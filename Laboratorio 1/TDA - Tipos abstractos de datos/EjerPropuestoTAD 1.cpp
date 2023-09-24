#include<iostream>
#include<conio.h>

/*La definicion del TAD Rational seran dos numero enteros*/

//Prototipo de funciones
void makerational(int num, int denom);
void add(int a[1], int b[1]);
void mult(int a[1], int b[1]);
int equal(int a[1], int b[1]);



int main(){
	int A[]={5,2};
	int B[]={5,3};
	
	makerational(1,2);
	add(A,B);
	mult(A,B);
	printf("\n%i",equal(A,B));
	return 0;
}

//Permite crear un numero racional
void makerational(int num, int denom){
	int makerational[1];
	
	if(denom!=0){
		makerational[0]=num;
		makerational[1]=denom;
	}
	
	printf("El racional creado es %i/%i\n", makerational[0], makerational[1]);	
}


//Permite sumar dos numeros racionales
void add(int a[1], int b[1]){
	int add[1];
	
	add[1]=a[1]*b[1];
	add[0]=a[0]*b[1]+b[0]*a[1];
	printf("\nLa suma de %i/%i + %i/%i es: %i/%i\n", a[0], a[1], b[0], b[1], add[0], add[1]);
}

//Permite multiplicar dos numeros racionales
void mult(int a[1], int b[1]){
	int mult[1];
	
	mult[0]=a[0]*b[0];
	mult[1]=a[1]*b[1];
	printf("\nLa multiplicacion de %i/%i * %i/%i es: %i/%i\n", a[0], a[1], b[0], b[1], mult[0], mult[1]);
}

//Devolvera 1 si ambos(numeros racionales) son iguales y 0 si son diferentes
int equal(int a[1], int b[1]){
	int equal=0;
	
	if(a[0]*b[1]==b[0]*a[1])
		equal=1;
		
	return equal;	
}
