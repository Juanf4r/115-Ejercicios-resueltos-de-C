/*Escriba, compile y ejecute un programa en C++ que convierta la temperatura en 
grados Celsius a grados Fahrenheit,Kelvin y Rankime*/

#include<iostream>
#include<cstdlib>
#include<string>
#include<locale.h>


float C, K, F, R;
std::string seguir = "S";

void pedirDatos()
{
	std::cout << "\tDigite la temperatura en grados celsius\n\n\t"; std::cin >> C;
	while (C < -273)
	{
		std::cout << "\n\tDato errado, digite la temperatura en grados celsius de nuevo\t";
		std::cin >> C;
	}
	K = C + 273; F = 9.0 / 5 * C + 32; R = F + 460;
}

void imprimirDatos()
{
	std::cout << "\n\tImprimir Datos y Resultados\n\n";
	std::cout << "\n\tLa temperatura en grados Celsius es: \t" << C << "\n";
	std::cout << "\n\tLa temperatura en grados Kelvin es: \t" << K << "\n";
	std::cout << "\n\tLa temperatura en grados Fahrenheit es: \t" << F << "\n";
	std::cout << "\n\tLa temperatura en grados Rankime es: \t" << R << "\n";
	std::cout << "\n\t-----------------------------------------------------------------------\n";
}

int main()
{
	
	while (seguir == "S" or seguir == "s")
	{
		system("CLS");
		system("color 70");

		std::cout << "\n\n\n\tPrograma que convierte de una escala de temperatura a otra!\n";
		std::cout << "\t-----------------------------------------------------------------------\n";
		
		pedirDatos();
		imprimirDatos();

		std::cout << "\n\tDesea continuar procesando? S o N\t"; std::cin >> seguir;

		while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N\t"; std::cin >> seguir;
		}
	}
	std::cout << "\n\n\t";
	system("pause");
	return 0;
}