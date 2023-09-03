#include <stdio.h>
#include <conio.h>

void menorACero(int &arg1, int &arg2);

int main(){
	int n1 = 1;
	int n2 = -6;
	menorACero(n1, n2);
}

void menorACero(int &arg1, int &arg2){
	if(arg1 < arg2){		
		printf("el menor es = %d", arg1);
	} if (arg2 < arg1){		
		printf("el menor es = %d", arg2);
	}
}
