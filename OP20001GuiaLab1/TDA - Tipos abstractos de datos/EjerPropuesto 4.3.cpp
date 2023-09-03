//Ejercicio 4.3
#include<iostream>
#include<conio.h>

using namespace std;

/*La definición de valor del TAD Conjunto será un arreglo de enteros*/

//Prototipo de las funciones
void ingresarElementos(int[], int nElementos);
void eliminarElementos(int[], int nEliminar);
void imprimirMinimo(int[]);
void imprimirMaximo(int[]);
void listarElementos(int[]);
void identificarElemento(int[], int nElemento);

int main(){
	int v[0];
	
	ingresarElementos(v, 6);
	return 0;
}

void ingresarElementos(int vector[], int nElementos){		
		
	for(int i=0; i<nElementos;i++){
		cout<<"Digita un numero["<<i<<"]: ";
		cin>>vector[i]; //es igual a elemento[i]
	}
	
	cout<<"Arreglo lleno";	
}

void eliminarElementos(int[], int nEliminar){
	
}


