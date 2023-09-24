#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

void ingresar(int conjunto[]);
void mostrar(int conjunto[]);
void eliminar(int conjunto[]);

int main(){
	int conjunto[10];
	
	ingresar(conjunto);
	
	mostrar(conjunto);
	
	eliminar(conjunto);
	
	cout<<conjunto<<endl;
}

void ingresar(int conjunto[]){
	for(int i=0; i<10;i++){
		cout<<"Ingresa un valor en la posicion["<<i<<"]: ";
		cin>>conjunto[i];
	}
}

void mostrar(int conjunto[]){
	for(int i=0; i<10;i++){
		cout<<"\narreglo["<<i<<"] = "<<conjunto[i];
		cin>>conjunto[i];
	}
}

void eliminar(int conjunto[]){
	int opcion=0;
	
	cout<<"Posicion a eliminar: ";
	cin>>opcion;
	if(opcion<10){
		conjunto[opcion]=0;
		cout<<"Eliminado";
	}
}

