#include <stdio.h>
#include <conio.h>

void Intercambio(int, int); //por valor
void Intercambio(int *, int *); //por puntero
void Intercambio(int, int &, int &); //por referencia

int main(){
	int x=22, y=33;
	printf("\tx = %d\t y = %d\n", x, y);
	Intercambio(x,y);	//llamada por valor
	printf("\tx = %d\t y = %d\n", x, y);	
	Intercambio(&x, &y);	//llamada por puntero
	printf("\tx = %d\t y = %d\n", x, y);
	Intercambio(1, x, y);	//llamada por refencia
	printf("\tx = %d\t y = %d\n", x, y);
	getch();
	return 0;
}

//por valor
void Intercambio(int a, int b){
	int aux;
	aux=a;
	a=b;
	b=aux;
}

//por puntero
void Intercambio(int *a, int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

//por referencia
void Intercambio(int i, int &a, int &b){
	int aux=i;
	aux=a;
	a=b;
	b=aux;
}
