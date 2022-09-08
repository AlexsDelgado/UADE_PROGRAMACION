#include <iostream> 
#include <stdio.h>
#include <string>

void Clase5() {
	//mostrar por pantalla string
	std::string nombre = "Alexs Delgado";
	printf("Mi nombre es: %s \n", nombre.c_str());
	std::cout << "Mi nombre es: " << nombre << "\n";

	//concatenar
	std::string nombreconcat = "Alexs";
	std::string apellidoconcat = "Delgado";
	std::string concat = nombreconcat + " " + apellidoconcat;
	std::cout << concat;

	//tamaño / largo
	std::string txt = "abcdefghijklmnopqrstuvxyz";
	std::cout << txt.length() << "\n";
	std::cout << txt.size() << "\n";

	//input
	std::string fullname;
	std::cout << "Ingresar nombre completo: " << std::endl;
	getline(std::cin, fullname);
	std::cout << "Tu nombre es: " << fullname << std::endl;

	//acceso a posicion
	std::string mensaje = "Hola mundo";
	std::cout << mensaje[5];

	//comparacion
	std::string word_a = "ABC";
	std::string word_b = "DEF";
	std::string word_c = "DEF";
	std::string word_d = "DEFG";

	printf("word_a > word_b: %i \n", word_a > word_b); //falso
	printf("word_a < word_b: %i \n", word_a < word_b); //verdadero
	printf("word_c == word_b: %i \n", word_a == word_b); //verdadero
	printf("word_c < word_d: %i \n", word_c < word_b); //verdadero

	//substring
	std::string str3 = "the long and winding road.";
	std::string str4 = str3.substr(13, 7); //winding

	//busqueda
	int pos = str3.find("winding"); //busca winding
	std::string str2 = str3.substr(pos);//guarda un segundo string a partir de donde encuentra la pos


	//arreglos multidimensionales
	int tablero[8][8];
	int rows = 8;
	int columns = 8;
	int counter = 0;

	for (int i = 0; i < rows; i++) {//fila
		for (int j = 0; j < columns; j++) {//columna
			counter++;
			tablero[i][j] = counter;
		}
	}
	printf("ultimo casillero: %i\n", tablero[rows - 1][columns - 1]);
}
