#include <stdio.h>
#include <conio.h>

void multi(int* num);

int main(){
	int a=24;	
	multi(&a);	
	getch();
	return 0;
}

void multi(int* num){
	printf("\tvalor modificado = %d", *num*10);	
}
