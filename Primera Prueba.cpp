#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std; 			//Comando para no tener que poner siempre detras, de un cout o cin, std 

int operarios, cant[6], resto[6], error, total[6][4], alfajor[4], precio[4] ,ganancia[4], op_error[6]; 			// Declaracion de las variables int
string tipos[6], rst;				//Declaracion de la variable string

void precios(){				//Funcion para poner los precios
	int i;					//Declaro i
	srand(time(NULL));		//Funcion de semilla para el randomizador
	for (i=0;i<4;i++){		//For para declarar a que espacio del vector ingreso el precio randomizado
		precio[i]=rand()%4999+5000;			//Guardo el randomizado en el vector
	}
}

void info_alfajores(){ 			//Funcion para ingresar la cantidad de alfajores y el tipo
		for (operarios=0; operarios<6; operarios++){ 				//Ciclo de repetción para que se ingresen los datos de los operarios
			tipos[operarios]="";
			cant[operarios]=0;
			do{						//Ciclo de comprobacion
				cout << "Ingrese los tipos de alfajores tal cual estan escritos" << endl;					//Aclaraciones al usuario
				cout << "Operario " << operarios+1 << ", ingrese el tipo de alfajor (Tipos: Chocolate, Dulece_de_leche, Fruta o Mixtos): ";		//Pedir al usuario que ingrese el tipo de chocolate
				cin >> tipos[operarios];			// Guardar lo ingresado en la variable
			} while (tipos[operarios]!="Chocolate"&&tipos[operarios]!="Dulce_de_leche"&&tipos[operarios]!="Fruta"&&tipos[operarios]!="Mixtos");		//Confirmacion
			cout << "Operario " << operarios+1 << ", ingrese la cantidad de alfajores (en numeros enteros): ";		//Pedir que ingrese la cantidad de alfajores
			cin >> cant[operarios];			//Guardar lo ingresado en la variable
			cout << endl;			//Salto de linea
		}
}

void operaciones(){				//Funcion para las operaciones de los ejercicios
	int i, num;			//Crear variable i para un for
	for (operarios=0; operarios<6; operarios++){		//Usamos el for para elegir el operario
		resto[operarios]=cant[operarios]%6;				//Resto de una division
		if (resto[operarios]>0){						//If para saber si es un error o no
			error++;									//Le sumo 1 a error
			op_error[operarios]++;						//Le sumo 1 al error en los operarios
		}
		if (tipos[operarios]=="Chocolate"){								//Si la variable tipos es igual a Chocolate
			num=(cant[operarios]-resto[operarios])						//le resto el el resto a la cantidad
			ganancia[1]=ganancia[1]+(precio[1]*num);					//multiplico el numero que me dio arriba por el precio y lo sumo con ganancia
			total[operarios][1]=total[operarios][1]+cant[operarios];	//guardo la cantidad de alfajores en el total
		}
		else if (tipos[operarios]=="Dulce_de_leche"){					//Si la variable tipos es igual a Dulce de leche
			num=(cant[operarios]-resto[operarios])
			ganancia[2]=ganancia[2]+(precio[2]*num);
			total[operarios][2]=total[operarios][2]+cant[operarios];
		}
		else if (tipos[operarios]=="Fruta"){							//Si la variable tipos es igual a Fruta
			num=(cant[operarios]-resto[operarios])
			ganancia[3]=ganancia[3]+(precio[3]*num);
			total[operarios][3]=total[operarios][3]+cant[operarios];
		}
		else if (tipos[operarios]=="Mixtos"){							//Si la variable tipos es igual a Mixtos
			num=(cant[operarios]-resto[operarios])
			ganancia[4]=ganancia[4]+(precio[4]*num);
			total[operarios][4]=total[operarios][4]+cant[operarios];
		}
	}
}


int main(){
	precios();			//Uso de funcion precios
	do{					//Inicio de ciclo do
		info_alfajores();		//Uso de la funcion 
		operaciones();		//Uso de la funcion 
		cout << "Desea seguir ingresando informacion?";					//Imprimo si desea seguir
		cout << endl << "Solo aceptamos como respuesta afirmativa valida: si, Si, SI";			//Explicacion al usuario
		cin >> rst;			//Guardo los valores en la variable
	} while (rst=="si"||rst=="SI"||rst=="Si");			//Mientras rst sea igual a lo mostrado se sigue repitiendo
	//IMPRIMIR TODO
	cout << endl << "La cantidad de entregas con error es de: " << error << endl;
	cout << "Los alfajores de Chocolate, tienen una ganancia de: " << ganancia[1] << endl;
	cout << "Los alfajores de Dulce de leche, tienen una ganancia de: " << ganancia[2] << endl;
	cout << "Los alfajores de Fruta, tienen una ganancia de: " << ganancia[3] << endl;
	scout << "Los alfajores Mixtos, tienen una ganancia de: " << ganancia[4] << endl;
	//SI DESEA QUE NO FUNCIONE SAQUE LAS ANOTACIONES
/*	for (int i=0; i<6; i++){
		cout << "El operario " << i+1;
		cout << endl << "\tCantidad de alfajores de Chocolate: " << total[operaciones][1];
		cout << endl << "\tCantidad de alfajores de Dulce de leche: " << total[operaciones][2];
		cout << endl << "\tCantidad de alfajores de Fruta: " << total[operaciones][3];
		cout << endl << "\tCantidad de alfajores Mixtos: " << total[operaciones][4];
		cout << endl;
	}*/
	cout << endl << endl << "FIN DEL PROGRMA";
}
