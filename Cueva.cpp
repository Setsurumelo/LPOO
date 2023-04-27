#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	//Poner pisos
		//Variables
		int fila, columna, cueva[10][10];
		
	for (fila=0; fila<10; fila++){
		for (columna=0; columna<10; columna++){
			cueva[fila][columna]=1;
		}
	}
	
	//Poner pozos
		//Variables
		int cont, j, pozo_uno, pozo_dos, posicion[2];
		
	srand(time(NULL));
	for (cont=0;cont<3;cont++){
		do{
			pozo_uno = rand() % 10;
        	pozo_dos = rand() % 10;
        } while (cueva[pozo_uno][pozo_dos]==0||(pozo_uno==9&&pozo_dos==9)||(pozo_uno==0&&pozo_dos==0));
    	cueva[pozo_uno][pozo_dos]=0;
	}
	
	//Moverse
		//Variables
		int rt, recorrido[10][10], x, y;

	printf ("Para moverse solo puede usar estos numeros:");

	do{
		printf ("\n 1 = ARRIBA\n 2 = DERECHA\n 3 = ABAJO\n 4 = IZQUIERDA\n");
		scanf ("%d", &rt);
		switch (rt){
			case 1:
				if (y>0){
					y=y-1;
				}
				else{
					printf ("Ingrese la direccion de nuevo, ya que no se puede ir para esa direccion\n");
				}
				break;
			case 2:
				if (x<9){
					x=x+1;
				}
				else{
					printf ("Ingrese la direccion de nuevo, ya que no se puede ir para esa direccion\n");
				}
				break;
			case 3:
				if (y<9){
					y=y+1;
				}
				else{
					printf ("Ingrese la direccion de nuevo, ya que no se puede ir para esa direccion\n");
				}
				break;
			case 4:
				if (x<0){
					x=x-1;
				}
				else{
					printf ("Ingrese la direccion de nuevo, ya que no se puede ir para esa direccion\n");
				}
				break;
			default:
				printf ("Ingrese un valor valido\n");
				break;
		}
		for (fila=0;fila<10;fila++){
			for (columna=0;columna<10;columna++){
				if (y==fila&&x==columna){
					printf ("| J |\t");
				}
				else{
					printf ("|   |\t");
				}
				if (columna==9){
					printf ("\n------------------------------------------------------------------\n");
				}
				
			}
		}
	} while (x!=9||y!=9);
}
