#include <stdio.h>
#include <conio.h>

void mayor(int valor1, int valor2);

int main(){
	int a=24, b=12;
	mayor(a,b);	
	getch();
	return 0;
}

void mayor(int valor1, int valor2){
	int aux;
	
	if(valor1>valor2){
		aux=valor1;
		valor1=valor2;
		valor2=aux;
		printf("\tvalor1 = %d\t valor2 = %d\n", valor1, valor2);	
	}
}


