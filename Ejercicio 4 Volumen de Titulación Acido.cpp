/*Escreiba, compile y ejecute un programa en C++ que calcule el volumen de titulación requerido de un ácido. */

#include<iostream>
#include<cstdlib>
#include<locale.h>
#include<string>

float na = 0, va = 0, nb = 0, vb = 0;
std::string seguir = "S";

void pedirDatos()
{
	std::cout << "\n\tDigite la concentracion en eq-g/L y volumen de la base en L: \n\t";
	std::cin >> nb >> vb;

	while (nb <= 0 or vb <= 0)
	{
		std::cout << "\n\tError. Digite la concentracion en eq-g/L y volumen de la base en L: \n\t";
		std::cin >> nb >> vb;
	}

	std::cout << "\n\tDigite la concentracion en eq-g/L: \n\t";
	std::cin >> na;

	while (na <= 0)
	{
		std::cout << "\n\tError. Digite la concentracion en eq-g/L: \n\t";
		std::cin >> na;
	}
}

void imprimirDatos()
{
	std:: cout << "\n\n\t    Imprimir datos y resultados    \n";
	std::cout << "\t------------------------------------------------------------------\n\n";
	std::cout << "\n\tLa concentracion de la base en eq-g/L es:          \t" << nb << "\n";
	std::cout << "\n\tEl volumen de la base en litros L es:              \t" << vb << "\n";
	std::cout << "\n\tLa concentracion del acido en eq-g/L es:           \t" << na << "\n";
	std::cout << "\n\tEl volumen requerido del acido en litros L es:     \t" << va << "\n";
	std::cout << "\t------------------------------------------------------------------\n";
}

int main()
{
	

	while (seguir == "S" or seguir == "s")
	{
		system("CLS");
		system("color 70");
		std::cout << "\n\n\tPrograma que calcula el volumen de titulacion de una base!\n";
		std::cout << "\t------------------------------------------------------------------\n";
		
		pedirDatos();

		va = ((float)nb) * vb / na;

		imprimirDatos();

		std::cout << "\n\tDesea continuar procesando S o N\t";
		std::cin >> seguir;
		while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N\t";
			std::cin >> seguir;
		}

	}
	std::cout << "\n\n\t";

	system("pause");
	return 0;
}