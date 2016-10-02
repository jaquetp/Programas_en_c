/*
Nobre: Jaqueline Torres
Programa: juego piedra, papel o tijera
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){

	// 1 = piedra; 2 = papel; 3= tijera

	int aleatorio, opcion;

	printf("\nBienvenido al juego de piedra, papel o tijera:\n");
	printf("\nSeleccione una opcion: \n1 = piedra\n2 = papel\n3 = tijeras\n\n");
	scanf("\n%d",&opcion);
	srand(time(NULL));
	aleatorio = (rand()% 3)+1;

	switch(opcion){
        case 1: 
		    printf("\nUsuario selecciono: piedra");
        break;

        case 2:
		    printf("\nUsuario selecciono: papel");		
        break; 

        case 3: 
		    printf("\nUsuario selecciono: tijera");		
        break;
        
        default: 
            printf("\nSelecciono una opcion incorrecta\n\n");
		return 0;
    }
    printf("\naleatorio = %d", aleatorio);

    switch(aleatorio){
        case 1:
            printf("\nCompu eligio piedra");
            if(opcion== 1) {
                printf("\nNadie gano\n");                
            } else if(opcion== 2) {
                printf("\nGana usuario");
            } else if(opcion== 3){
                printf("\nGana computadora");
            }
        break; 

        case 2: 
            printf("\nComputadora eligio papel");
            
            switch(opcion){
				case 1:
					printf("\nGana computadora");
				break; 
				case 2:
					printf("\nNadie gana");
				break;
				case 3:
					printf("\nGana usuario");
				break;
			}
	break;
		case 3:
			printf("\nComputadora eligio tijera");
			
			switch(opcion){
				case 1:
					printf("\nGana usuario");
				break;
				case 2:
					printf("\nGana computadora");
				break;
				case 3:
					printf("\nNadie gana");
				break;
			}
    }
	printf("\n\n");   
    return 0;
}
	
