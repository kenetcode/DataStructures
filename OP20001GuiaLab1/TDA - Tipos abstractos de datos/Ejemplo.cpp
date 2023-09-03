#include <stdio.h>
#include <stdlib.h>

/*La definici�n de valor del TAD cadena en C ser� un arreglo de caracteres

Prototipo de funciones*/
int longitudCadena(char c[]);
void invertirCadena(char a[], char b[]);

int main ()
{
	char d[25], e[25];
	int n;
	printf("Digite una cadena:");
	scanf("%s", d);
	n = longitudCadena(d);
	printf("La longitud de la cadena es: %i\n", n);
	invertirCadena(d, e);
	printf("La cadena invertida es: %s\n", e);
	return 0;
}

/*La funci�n longitudCadena encuentra el tama�o o longitud de la cadena de caracteres. */
int longitudCadena(char c[]){
int i=0;

	if (c!=NULL){
		while (c[i] != '\0')
 			i++; 
		}
		/*Se puede sustituir el while por el llamado a la funci�n strlen(c), definida en 
 		<string.h> y retornando el valor que devuelva, as�: return strlen(c); */
	return i;
}

/*La funcion invertirCadena invierte una cadena de caracteres dada en a */
void invertirCadena(char a[], char b[]){
	int i, j=0;
	if (a != NULL){
 		i = longitudCadena(a);
 		while (i-1 >= 0){
 			b[j]=a[i-1];
 			i = i-1;
 			j = j+1;
 		}
	b[j]='\0';
	}
}
 
 /*las cadenas de caracteres en C llevan al final una marca de fin de la misma que 
 es '\0' */

