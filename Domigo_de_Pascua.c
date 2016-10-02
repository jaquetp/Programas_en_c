/*Jaqueline T.P
CALCULAR EL DOMINGO DE PASCUA*/

#include<stdio.h>
int main(){
	int A,B,C,D,E,N;
	int anio;
	printf("Ingrese anio:");
	scanf("%d",&anio);
		
		A = anio % 19; 
		B = anio % 4; 
		C = anio % 7; 
		D = (19 * A + 24) % 30; 
		E = (2 * B + 4 * C + 6 * D + 5) % 7; 
		N = (22 + D + E);

	if(N <= 31)
		printf("\nEl domingo de pascua sera: %d de marzo de %d\n", N, anio);
		else
		printf("\nEl domingo de pascua sera: %d de abril de %d\n",N-31,anio);
		return 0;
} 
