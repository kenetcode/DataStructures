#include <stdio.h>
#include <conio.h>

void potencia(double* n, int* p);

int main(){
	double num = 3;
	int pot = 2;	
	potencia(&num ,&pot);	
	getch();	
}

void potencia(double* n, int* p){
	double potencia = 1;
	
	for(int i = 1; i <= *p; i++){
		potencia = potencia * (*n);	
	}
	
	printf("resultado: = %.f", potencia);
}
