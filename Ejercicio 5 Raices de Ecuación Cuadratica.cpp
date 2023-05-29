/*Escriba, compile y ejecute un programa en C++ que calcule las raíces 
de una ecuación cuadrática de la forma aX2 + bX + c. */

#include<iostream>
#include<cstdlib>
#include<string.h>
#include<locale.h>

std::string seguir = "S";
float a, b, c, r1, r2;

void calculos()
{
	r1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
	r2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
}

void imprimirDatos()
{
	std::cout << "\tImprimir Datos y resultados\n";
	std::cout << "\t--------------------------------------------------------------\n";
	std::cout << "\n\tEcuacion cuadratica general a X ^ 2 + b X + c\n\t";
	std::cout << "\n\tEcuacion cuadratica particular "<< a <<" X ^ 2 + " << b << "X + " << c << "\n\t";
	std::cout << "\n\tEl coeficiente cuadratico es:             \t" << a << "\n";
	std::cout << "\n\tEl coeficiente lineal es:                 \t" << b << "\n";
	std::cout << "\n\tEl coeficiente termino independiente es : \t" << c << "\n";
	std::cout << "\n\tLa primera raiz de la ecuacion cuadratica es: \t" << r1 << "\n";
	std::cout << "\n\tLa segunda raiz de la ecuacion cuadratica es: \t" << r2 << "\n";
}

int main()
{
	while (seguir == "S" or seguir == "s")
	{
		system("CLS");
		system("color 70");

		std::cout << "\n\tPrograma que calcula las raices de una ecuacion cuadratica!\n";
		std::cout << "\t--------------------------------------------------------------\n";
		std::cout << "\n\tDigite los coeficientes a, b y c de la ecuacion cuadratica: \n\t";
		std::cin >> a; std::cout << "\n";
		std::cin >> b; std::cout << "\n";
		std::cin >> c; std::cout << "\n";

		while (a == 0)
		{
			std::cout << "\n\tNo es una ecuacion cuadratica, digite el coeficiente a\t"; std::cin >> a;
		}

		if (b * b - 4 * a * c < 0)
		{
			std::cout << "\n\tLa ecuacion no tiene raices reales\n";
			system("pause");
			return 0;
		}

		calculos();
		imprimirDatos();

		std::cout << "\t--------------------------------------------------------------\n";
		std::cout << "\n\tDesea continuar procesando S o N \t"; std::cin >> seguir;

		while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N\t"; std::cin >> seguir;
		}
	}
	system("pause");
	return 0;
}