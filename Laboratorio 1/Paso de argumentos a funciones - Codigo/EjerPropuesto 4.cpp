#include <stdio.h>
#include <conio.h>

void area(double base, double altura);
void area(double radio);

int main(){
	//Cuadrado
	double b = 10;
	double a = 10;
	area(b, a);
	
	//Circulo
	double r = 15;
	area(r);
}

void area(double base, double altura){
	double area = base * altura;
	printf("area del cuadrado = %.2f", area);
}

void area(double radio){	
	double potencia = 1;
	
	for(int i = 1; i <= 2; i++){
		potencia = potencia * radio;	
	}
	
	double area = 3.1416 * potencia;	
	printf("area del circulo = %.2f", area);
}
