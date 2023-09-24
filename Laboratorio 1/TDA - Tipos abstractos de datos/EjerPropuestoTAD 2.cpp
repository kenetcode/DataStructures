#include <iostream>
#include <string.h>

using namespace std;

void imprimir(char cadena[]);
void copiar(char cadena[]);
void buscar(char cadena[], char buscado);
void convertir(char cadena[]);

int main(){
	char cadena[25];//solo puede leer 24 caracteres
	
	cout<<"Digite una cadena: ";
	cin.getline(cadena, 25, '\n');
		
	imprimir(cadena);
	copiar(cadena);
	
	char buscado;
	cout<<"\nCaracter a buscar: ";
	cin>>buscado;	
	buscar(cadena,buscado);
	
	convertir(cadena);
}


void imprimir(char cadena[]){	
	if(strlen(cadena)==0){//strlen me da la longitud de la cadena
		cout<<"\nCadena vacia";
	}
	else{
		cout<<"\n"<<cadena<<endl;
	}
	
}

void copiar(char cadena[]){
	char cadena2[25];
	
	if(strlen(cadena)==0){//strlen me da la longitud de la cadena
		cout<<"\nCadena vacia";
	}
	else{
		strcpy(cadena2, cadena);//strcpy copia el contenido de una cadena a otra
		cout<<"\nCadena copiada: ";
		cout<<cadena2<<endl;
	}
}

void buscar(char cadena[], char buscado){
	if(strlen(cadena)==0){//strlen me da la longitud de la cadena
		cout<<"\nCadena vacia";
	}
	else{
		int i=0, c=0;
		while(cadena[i]!='\0'){
			if(cadena[i]==buscado){
				cout<<"\nCaracter encontrado en la posicion "<<i+1<<endl;
				c++;
			}
		++i;
		}
		if(c==0){
			cout<<"\nCaracter no encontrado";
		}
	}	
}

void convertir(char cadena[]){
	if(strlen(cadena)==0){//strlen me da la longitud de la cadena
		cout<<"\nCadena vacia";
	} 
	else{
		strlwr(cadena);//strlwr convierte mayusculas a minusculas	
		cout<<cadena<<endl;
	}
}
