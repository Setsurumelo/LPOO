#include <stdio.h>
#include <string.h>
char tabla[3][3]={0,0,0,0,0,0,0,0,0};
//Mostrar la tabla sin nada
void Tateti(){
	for (int j=0; j<3;j++){
		for (int i=0; i<3;i++){
			if (i==0&&j==0){
			printf ("\n -+---+---+---+-\n  |");
			}
			printf (" - |");
			if (i==2){
				printf ("\n -+---+---+---+-\n");
				if (i!=2||j!=2){
					printf ("  |");
				}
			}
		}
	}
}
int main (){
	Tateti();			//Usa la funcion 
	int fila, columna, x, y, win=0, cont;				//Variables int
	char simbolo;				//Variables char
	do{
		//Ingresar X o O
		cont++;
		do{
		printf ("Ingrese el simbolo < X > o < O >: \n");
		scanf ("%s", &simbolo);
		} while (simbolo!='X'&&simbolo!='O');
		do{
			//Ingresar fila
			printf ("Ingrese un numero ENTERO del 1 al 3 para indicar su fila: ");
			scanf ("%d", &fila);
			if (fila<=0||fila>=4){
				printf ("Ingrese uno de los numeros pedido\n");
			}
		} while (fila<=0||fila>=4);
		do{
			//Ingresar columna
			printf ("Ingrese un numero ENTERO del 1 al 3 para indicar su columna: ");
			scanf ("%d", &columna);
			if (columna<=0||columna>=4){
				printf ("Ingrese uno de los numeros pedido\n");
			}
		} while (columna<=0||columna>=4);
		columna=columna-1;
		fila=fila-1;
		//Guardar el simbolo en la tabla
		if (tabla[fila][columna]==0){
			for (x=0; x<3; x++){
				for (y=0; y<3; y++){
					if (x==fila&&y==columna){
						tabla[x][y]=simbolo;
					}
				}
			}
		}
		else {
			printf ("\nEse espacio ya esta ocupado ingrese de nuevo la filas y columnas pero en otros espacios\n");
		}
		for (x=0; x<3; x++){
			for (y=0; y<3; y++){
				if (x==0&&y==0){
					printf ("\n -+---+---+---+-\n  |");
				}
				if (tabla[x][y]=='X'||tabla[x][y]=='O'){
					printf (" %c |", tabla[x][y]);
				}
				else{
					printf (" - |");
				}
				if (y==2){
					printf ("\n -+---+---+---+-\n");
					if (x!=2||y!=2){
						printf ("  |");
					}
				}
			}
		}
		if ((tabla[0][0] == 'X' && tabla[0][1] == 'X' && tabla[0][2] == 'X') || (tabla[1][0] == 'X' && tabla[1][1] == 'X' && tabla[1][2] == 'X') || (tabla[2][0] == 'X' && tabla[2][1] == 'X' && tabla[2][2] == 'X') || (tabla[0][0] == 'X' && tabla[1][0] == 'X' && tabla[2][0] == 'X') || (tabla[0][1] == 'X' && tabla[1][1] == 'X' && tabla[2][1] == 'X') || (tabla[0][2] == 'X' && tabla[1][2] == 'X' && tabla[2][2] == 'X') || (tabla[0][0] == 'X' && tabla[1][1] == 'X' && tabla[2][2] == 'X') || (tabla[0][2] == 'X' && tabla[1][1] == 'X' && tabla[2][0] == 'X')) {
    			win=1;
    			printf ("\n-+------------------------------+-\n");
    			printf (" |\tGanador jugador < X >\t| ");
    			printf ("\n-+------------------------------+-\n");
			}
		else if ((tabla[0][0] == 'O' && tabla[0][1] == 'O' && tabla[0][2] == 'O') || (tabla[1][0] == 'O' && tabla[1][1] == 'O' && tabla[1][2] == 'O') || (tabla[2][0] == 'O' && tabla[2][1] == 'O' && tabla[2][2] == 'O') || (tabla[0][0] == 'O' && tabla[1][0] == 'O' && tabla[2][0] == 'O') || (tabla[0][1] == 'O' && tabla[1][1] == 'O' && tabla[2][1] == 'O') || (tabla[0][2] == 'O' && tabla[1][2] == 'O' && tabla[2][2] == 'O') || (tabla[0][0] == 'O' && tabla[1][1] == 'O' && tabla[2][2] == 'O') || (tabla[0][2] == 'O' && tabla[1][1] == 'O' && tabla[2][0] == 'O')) {
			win=1;
			printf ("\n-+------------------------------+-\n");
			printf (" |\tGanador jugador < O >\t| ");
			printf ("\n-+------------------------------+-\n");
		}
		else if (cont==9){
			printf ("\n-+----------------------+-\n");
			printf (" |\tEmpate\t\t| ");
			printf ("\n-+----------------------+-\n");
			win=2;
		}
	} while (win==0);
	return 0;
}
