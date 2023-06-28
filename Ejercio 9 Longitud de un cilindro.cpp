/*Escriba, compile y ejecute un programa que calcule la longitud de un cilindro de aluminio conocido el radio, la masa y su densidad.
Donde m es la masa, d la densidad del aluminio equivalente a 2.7 (g/cm3), r el radio del cilindro y pi 3.1416.*/

#include<iostream>
#include<string>
#include<cstdlib>

#define pi 3.1416
#define den 2.7

float mas = 0, ra = 0, lo = 0;
std::string seguir = "S";

void pedirDatos()
{
	system("CLS");
	system("color 70");

	std::cout << "\n\n\tPrograma que calcula la longitud de un cilindro de aluminio!\n";
	std::cout << "\t--------------------------------------------------------------------\n\n";
	std::cout << "\n\tCaptura y validacion de Datos";
	std::cout << "\n\t------------------------------\n\n";
	std::cout << "\n\tDigite la masa del cilindro en gramos: \t"; std::cin >> mas;
	while (mas <= 0)
	{
		std::cout << "\n\tError, digite la masa del cilindro en gramos: \t"; std::cin >> mas;
	}

	std::cout << "\n\tDigite el radio del cilindro en cm: \t"; std::cin >> ra;
	while (ra <= 0)
	{
		std::cout << "\n\tError, digite el radio del cilindro en cm: \t"; std::cin >> ra;
	}
}

void calcular()
{
	std::cout << "\n\tCalculando longitud del cilindro...\n\n";
	lo = (float(mas)) / (den * pi * pow(ra, 2));
}

void imprimirDatos()
{
	std::cout << "\n\t  Imprimir datos y resultados  ";
	std::cout << "\n\t-------------------------------\n";
	std::cout << "\n\tMasa del cilindro en gramos: \t" << mas;
	std::cout << "\n\tRadio del cilindro en cm: \t" << ra;
	std::cout << "\n\tDensidad del aluminio g/cm 3: \t" << den;
	std::cout << "\n\tLongitud del cilindro en cm: \t" << lo;
	std::cout << "\n\t-------------------------------\n\n";
}

int main()
{
	while (seguir == "S" or seguir == "s")
	{
		pedirDatos();
		calcular();
		imprimirDatos();

		std::cout << "\n\tDesea procesar otro cilindro: S o N\t"; std::cin >> seguir;
		while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N\t"; std::cin >> seguir;
		}
		std::cout << "\n\n";
	}
	system("pause");
	return 0;
}