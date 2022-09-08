#include <iostream>
#include <stdio.h>
#include <string>
#define CALIFICACIONES_LENGTH 5
#define ROWS 3
#define COLUMNS 3

//globales
int calificaciones[CALIFICACIONES_LENGTH]; //Array Clase 5
std::string board[ROWS][COLUMNS]; //Board Clase 5


void opcion() {
	std::cout << "Opciones: \n" << std::endl;
	std::cout << " 0_ Salir del programa \n";
	std::cout << " 1_ Clase 1 \n";
	std::cout << " 2_ Clase 2 \n";
	std::cout << " 3_ Clase 3 \n";
	std::cout << " 4_ Clase 4 \n";
	std::cout << " 5_ Clase 5 \n";

}
int tomarValor() {
	int valor;
	std::cout << "Ingrese un valor: ... \n";
	std::cin >> valor;
	return valor;
}

//clase 5
void inicializarArrayC5() {
	//IMPORTANTISIMO inicializar antes de trabajar
	for (int i = 0; i < CALIFICACIONES_LENGTH; i++) {
		calificaciones[i] = -1;

	}
}
void asignarValorArrayC5() {
	//asignamos valor variable

	for (int i = 0; i < CALIFICACIONES_LENGTH; i++) {
		std::cout << "Ingrese una nota para la posicion " << i << std::endl;
		calificaciones[i] = tomarValor();
	}
	std::cout << "*********" << std::endl;
}
void mostrarValoresArrayC5() {
	for (int i = 0; i < CALIFICACIONES_LENGTH; i++) {
		std::cout << "Posicion: " << i << " NOTA -> ";
		std::cout << calificaciones[i] << std::endl;
	}
	std::cout << "*********" << std::endl;
}

void ejercicioArrayCalificaciones() {
	inicializarArrayC5();
	mostrarValoresArrayC5();
	asignarValorArrayC5();
	mostrarValoresArrayC5();
}

void inicializarBoardC5() {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++) {
			board[i][j] = "None";
		}
	}
}
std::string asignarUnidadesC5(int tipoUnidad) {
	switch (tipoUnidad) {
	case 1:
		return "Arquero";
	case 2:
		return "Soldado";
	case 3:
		return "Caballero";
	default:
		return "None";
	}
}
void mostrarTablero() {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++) {
			std::cout << board[i][j] << " - ";
		}
		std::cout << std::endl;
	}
}
void armarTablero() {
	int unidad;
	std::string unidadAsignada;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++) {
			unidad = 0;
			std::cout << "Ingrese una unidad para la posicion " << i << "_" << j << std::endl;
			std::cin >> unidad;
			unidadAsignada= asignarUnidadesC5(unidad);
			board[i][j] = unidadAsignada;
			std::cout << "Se posiciono un " << unidadAsignada << "en la posicion" << std::endl;
		}
	}
}

void ejercicioBoard() {
	inicializarBoardC5();
	mostrarTablero();
	armarTablero();
	mostrarTablero();
}


void clase5() {
	std::cout << "*********" << std::endl;
	std::cout << "|CLASE 5|" << std::endl;
	std::cout << "| Array |" << std::endl;
	std::cout << "*********" << std::endl;

	//explicacion Array
	//ejercicioArrayCalificaciones();

	//ejercicio clase 5 
	ejercicioBoard();


	std::cout << "*********" << std::endl;

}



int main()
{

	int opcionMenu;
	bool continuar;
	continuar = true;


	do {
		opcion();
		opcionMenu = tomarValor();
		switch (opcionMenu) {
		case 0:
			continuar = false;
			break;
		case 1://clase 1
			break;
		case 2://clase 2
			break;
		case 3://clase 3
			break;
		case 4://clase 3
			break;
		case 5://clase 3
			clase5();
			break;
		case 6://clase 3
			break;
		default:
			std::cout << "La opcion ingresada no es correcta \n";
			system("pause");
			system("cls");
			//codigo
			break;
		}
		system("pause");
		system("cls");
	} while (continuar == true);
}
