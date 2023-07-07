/* Escriba, compila y ejecute un programa que calcule la cantidad de calor Q que se debe
aplicar a una masa de agua para elevar la temperatura en C°. */

#include<iostream>
#include<string>
#include<cstdlib>
#include<locale.h>

float Q = 0, mas = 0, Tf = 0, Ti = 0;
std::string seguir = "S";

void calculandoDatos()
{
	std::cout << "\n\tCalculando la cantidad de calor requerido...";
	Q = mas * (Tf - Ti);
}

void pedirDatos()
{
		system("cls");
		system("color 70");
		std::cout << "\n\n\tPrograma que calcula la cantidad de calor!\n";
		std::cout << "\t-----------------------------------------------------\n\n";

		std::cout << "\n\tCaptura y validacion de Datos";
		std::cout << "\n\t-------------------------------\n\n";
		std::cout << "\n\tDigite la masa de agua en gramos: "; std::cin >> mas;

		while (mas <= 0)
		{
			std::cout << "\n\tError, digite la masa de agua en gramos: "; std::cin >> mas;
		}

		std::cout << "\n\tDigite la temperatura inicial en grados celsius: "; std::cin >> Ti;

		while (Ti <= -273)
		{
			std::cout << "\n\tError, digite la temperatura inicial en grados celsius: "; std::cin >> Ti;
		}

		std::cout << "\n\tDigite la temperatura final en grados celsius: "; std::cin >> Tf;

		while (Tf < Ti)
		{
			std::cout << "\n\tError, la temperatura final debe ser mayor que la inicial: "; std::cin >> Tf;
		}
}

void imprimirDatos()
{
	std::cout << "\n\n\tImprimir datos y resultados!\n";
	std::cout << "\t-----------------------------------------------------\n\n";

	std::cout << "\n\tMasa de agua en gramos: \t\t\t\t" << mas;
	std::cout << "\n\tTemperatura Inicial en grados celsius Ti: \t" << Ti;
	std::cout << "\n\tTemperatura Final en grados celsius Tf: \t\t" << Tf;
	std::cout << "\n\tCantidad de calor en Calorias Q: \t\t" << Q;
	std::cout << "\n\t-----------------------------------------------------\n\n";
}

int main()
{
	while (seguir == "S" or seguir == "s") 
	{
		pedirDatos();
		calculandoDatos();
		imprimirDatos();
		std::cout << "\n\tDesea procesar nuevamente: S o N\t"; std::cin >> seguir;

		while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N\t"; std::cin >> seguir;
		}
	}
	system("pause");
	return 0;
}