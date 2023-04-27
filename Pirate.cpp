#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void Inicio(){
	printf ("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,187);
	printf ("\t %c\t  ____  _           _          ____                              %c \n",186,186);
	printf ("\t %c\t |  _ \\(_)_ __ __ _| |_ ___   / ___| __ _ _ __ ___   ___         %c\n",186,186);
	printf ("\t %c\t | |_) | | '__/ _` | __/ _ \\ | |  _ / _` | '_ ` _ \\ / _ \\        %c\n",186,186);
	printf ("\t %c\t |  __/| | | | (_| | ||  __/ | |_| | (_| | | | | | |  __/        %c\n",186,186);
	printf ("\t %c\t |_|   |_|_|  \\__,_|\\__\\___|  \\____|\\__,_|_| |_| |_|\\___|        %c \n",186,186);
	printf ("\t %c                                                                       %c\n",186,186);
	printf ("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,202,188);
}
void Perdiste(){
	printf("\t __   __            _     ___  ____  _____ \n");
	printf("\t \\ \\ / /__  _   _  | |   / _ \\/ ___|| ____|\n");
	printf("\t  \\ V / _ \\| | | | | |  | | | \\___ \\|  _| \n"); 
	printf("\t   | | (_) | |_| | | |__| |_| |___) | |___ \n");
	printf("\t   |_|\\___/ \\__,_| |_____\\___/|____/|_____|\n");
}
void Ganaste(){
	printf ("\t__   __            ___        _____ _   _ _\n");
	printf ("\t\\ \\ / /__  _   _  (_) \\      / /_ _| \\ | | |\n");
	printf ("\t \\ V / _ \\| | | | | |\\ \\ /\\ / / | ||  \\| | |\n");
	printf ("\t  | | (_) | |_| | | | \\ V  V /  | || |\\  |_|\n");
	printf ("\t  |_|\\___/ \\__,_| |_|  \\_/\\_/  |___|_| \\_(_)\n");
}
int main(){
	int x, y, filas, columnas;
	Inicio();
	printf ("\n\tRECUERDE\n\t\t%c Esto < %c > es el mar si lo pisa pierde\n\t\t%c Usted debe encontrar el tesoro en menos de 50 movimientos\n\t\t%c El maximo de superficie es de 10x10 y el minimo es de 2x2", 248 ,177, 248, 248);
	do{
	printf ("\n\t    Ingrese la cantidad de 'x', en numeros enteros, de la superficie: ");
	scanf ("%d", &filas);
	} while (filas<2||filas>11);
	do{
	printf ("\t    Ingrese la cantidad de 'y', en numeros enteros, de las superficie: ");
	scanf ("%d", &columnas);
	} while (columnas<2||columnas>11);
		
	//ubicacion del tesoro y el pj
	int tesoro[2], pj[2];
	srand(time(NULL));
	for (x=0;x<2;x++){
		if (x==0){
			tesoro[x+1]=rand()%filas+1;
			pj[x+1]=rand()%filas+1;
		}
		if (x==1){
			tesoro[x+1]= rand () % columnas+1;
			pj[x+1]= rand () % columnas+1;
		}
	}
/*	if (columnas == 5){
	columnas=columnas+2;
	}*/
	//Mostrar juego

	int cont, win;
	char movimiento;
	do{
		x=0;
		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		for (x=0; x<filas+2; x++){
			printf ("\t\t");
			y=0;
			for (y=0; y<columnas+2; y++){
				if (x==0||y==0||x==filas+1||y==columnas+1){
					if ((x==filas+1&&y==0)||(x==0&&y==columnas+1)){
						printf ("%c%c%c",219,219,219);
					}
					else{
						printf ("%c%c%c",177, 177, 177);	
					}
				}
				else{
					if (pj[1]==x&&pj[2]==y){
						printf ("%c%c%c",178,004,178);
					}
					else{
					printf ("%c%c%c",178, 178, 178);
					}
				}
				if (y==columnas+1){
					printf ("\n");
				}
			}
		}
		do{
			printf ("\n\t\tHacia donde desea ir?\n\t\t%cRECUERDE\n\t\t%cLos espacios son de 3 de largo x 1 de alto\n\t\t%cw=Arriba\n\t\t%ca=Izquierda\n\t\t%cs=Abajo\n\t\t%cd=Derecha\n\t\t",248,248,248,248,248,248,248);
			scanf ("%s", &movimiento);
			switch (movimiento){
				case 'w':
					pj[1]=pj[1]-1;
					break;
				case 'a':
					pj[2]=pj[2]-1;
					break;
				case 's':
					pj[1]=pj[1]+1;
					break;
				case 'd':
					pj[2]=pj[2]+1;
					break;
				default:
					printf ("\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
					printf ("\n\t     %c\tIngrese una de las letras pedidas  %c\t\n", 179,179);
					printf ("\t     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
					break;
			}
		} while (movimiento!='w'&&movimiento!='a'&&movimiento!='s'&&movimiento!='d');
		if (pj[1]==tesoro[1]&&pj[2]==tesoro[2]){
			win=1;
			cont=51;
		}
		int z;
		for (x=0;x<filas+2;x++){
			for (y=0;y<columnas+2;y++){
				for (z=0;z<2;z++){
					if (pj[1]==filas+1||pj[2]==columnas+1||pj[z+1]==0){
						win=2;
						cont=51;
					}
				}
			}
		}
		cont++;
	}while (cont<50&&win==0);
	if (win==0||win==2){
	Perdiste();
	}
	
	else{
		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		for (x=0; x<filas+2; x++){
			printf ("\t\t");
			y=0;
			for (y=0; y<columnas+2; y++){
				if (x==0||y==0||x==filas+1||y==columnas+1){
					if ((x==filas+1&&y==0)||(x==0&&y==columnas+1)){
						printf ("%c%c%c",219,219,219);
					}
					else{
						printf ("%c%c%c",177, 177, 177);	
					}
				}
				else{
					if (pj[1]==x&&pj[2]==y){
						printf ("%c%c%c",178,004,127);
					}
					else{
					printf ("%c%c%c",178, 178, 178);
					}
				}
				if (y==columnas+1){
					printf ("\n");
				}
			}
		}
		printf ("\n\n");
		Ganaste();
	}
}

                                                         
/*----------------------------------------------------------------------- (71)
%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c

,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203
*/
