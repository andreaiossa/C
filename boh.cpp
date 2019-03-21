A * (2 + 50) + (1-A)*(2+50+50+50) =  52*A + 152 - 152*A = 152 - 100A
152 - 100A <= 1.10 * 50
152-55 <= 100A
A => 0.97

//////////////////////////////////

int uomini = 0;
int donne = 0;
bool mutex_U = true;
bool mutex_D = true;
bool free = true;

void uomo(){

	P(mutex_U);
	if(uomini == 0){
		P(free);
		uomini++:
		V(mutex_U);
	}else{
		uomini++;
		V(mutex_U);
	}

	piscia();

	P(mutex_U);
	uomini--;
	if(uomini == 0){
		V(mutex_U);
		V(free);
	}else{
		V(free);
	}

}

void donne(){

	P(mutex_D);
	if(donne == 0){
		P(free);
		donne++:
		V(mutex_D);
	}else{
		donne++;
		V(mutex_D);
	}

	piscia();

	P(mutex_D);
	donne--;
	if(donne == 0){
		V(mutex_D);
		V(free);
	}else{
		V(free);
	}
}




void uomo(){
	monitor.entraU();
	piscia();
	monitor.esceU();
}

void donna(){
	monitor.entraD();
	piscia();
	moonitor.esceD();
}


monitor monitor {
	int uomini = 0;
	int donne = 0;
	condition free;
	condition free_U;
	condition free_D;

	void entraU{
		uomini++;
		if(donne > 0){
			if(uomini == 1){
				free.wait();
				free_U.signal();
			}else{
				free_U.wait();
				free_U.signal();
			}
		}
	}

	void esceU(){
		uomini--;
		if(uomini == 0){
			free.signal();
		}
	}

	void entraD(){
		donne++;
		if(uomini > 0){
			if(donne == 1){
				free.wait();
				free_D.signal();
			}else{
				free_D.wait();
				free_D.signal();
			}
		}
	}

	void esceD(){
		donne--;
		if(donne == 0){
			free.signal();
		}
	}
}


///////////////////////////////////////////////////////////

bool sveglia = false;
bool mutex_C = true;
int posti = 6;
int clienti = 0;

void barbiere(){

	while(1){

		P(sveglia);
		P(mutex_C);
		posti++;
		V(mutex_C);

		taglio();

		P(mutex_C);
		clienti--;
		if(posti < 6){
			V(sveglia);
		}
		V(mutex_C);
	}	
}



void cliente(){

	P(mutex_C);
	if(posti > 0){
		if(clienti == 0){
			clienti++;
			posti--;
			V(mutex_C);
			V(sveglia);
		}else{
			clienti++;
			posti--;
			V(mutex_C);
		}
	}else{
		V(mutex_C);
	}
}













































