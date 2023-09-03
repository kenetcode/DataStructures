#include <stdio.h>
#include <conio.h>

void entrada(float* x, int* y);//prototipo de funcion
int main()//cambie el tipo de dato del metodo de void a main
{
	float x=1.5;
	int y=5;
	printf("El valor de x y y antes de la llamada a la funcion es: %10.2f\t, %d\n",x,y);
	entrada(&x, &y);
	printf("El valor de x y y despues de la llamada a la funcion es: %10.2f\t, %d\n",x,y);
	getch();
	
	return 0;//agrege este return por no me compilaba 
}

void entrada (float* x, int* y){
	*x=7.5;
	*y=23;
}
