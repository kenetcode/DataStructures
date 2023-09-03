#include <stdio.h>
#include <conio.h>

void doble(float dato, int num);
main(){
	float dato=1.5;
	doble(dato, 3);
	printf("El valor de dato es: %10.2f\n", dato); //El valor original de la variable no cambia
	getch();
}

void doble(float dato, int num){
	int i;
	for(i=0;i<num;i++)
		dato=dato*2.0;
	printf("El resultado es: %10.2f\n", dato);
	getch();
}
