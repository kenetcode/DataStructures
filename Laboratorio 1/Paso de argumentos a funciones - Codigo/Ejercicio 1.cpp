#include <iostream>

void DemoLocal(int valor);

int main(void){
	int n=10;
	std::cout<<"Antes de llamar a DemoLocal, n = "<<n<<"\n";
	DemoLocal(n);
	std::cout<<"Despues de llamar a DemoLocal, n = "<<n<<"\n";
	std::cout<<"Pulse Intro para continuar";
	std::cin.get();
}

void DemoLocal(int valor){
	std::cout<<"Dentro de DemoLocal, valor = "<<valor<<"\n";
	valor = 75;
	std::cout<<"Dentro de DemoLocal, valor = "<<valor<<"\n";
}

/*¿Cómo cambia el valor de n, si es que lo hace?
n cambia solo dentro de la funcion DemoLocal, y su valor original fuera de
la llamada no es modificado.*/
