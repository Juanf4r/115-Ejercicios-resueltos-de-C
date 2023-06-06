/*Ejecuta un programa que calcule la altura maxima y el alcance de un proyectil 
que es disparado con un ángulo a y con una velocidad v.*/

#include<iostream>
#include<cstdlib>
#include<string>

float angulo = 0, veloin = 0, xmax = 0, hmax = 0, pi = 3.1416, g = 9.8;
std::string seguir = "S";

void pedirDatos()
{

	system("CLS");
	system("color 70");
	setlocale(LC_ALL, "");

	std::cout << "\n\n\tPrograma que calcula el alcance y altura máxima de un proyectil\n";
	std::cout << "\t----------------------------------------------------------------------\n";
	std::cout << "\n\n\tDigite el angulo > 0 y < 90 y velocidad inicial del proyectil en m/s\n\t";
	std::cin >> angulo >> veloin;

	while (angulo <= 0 or angulo >= 90 or veloin <= 0)
	{
		std::cout << "\n\n\tDigite el angulo > 0 y < 90 y velocidad inicial del proyectil en m/s\n\t";
		std::cin >> angulo >> veloin;
	}
}

void calculo()
{
	xmax = pow(veloin, 2) * sin(2 * angulo * pi / 180) * g;
	hmax = pow(veloin, 2) * pow(sin(angulo * pi / 180), 2) / (2 * g);
}

void imprimirDatos()
{
	std::cout << "\t          Imprimir Datos y resultados         \n";
	std::cout << "\n\tEl angulo de disparo del proyectil es: \t" << angulo << " grados\n";
	std::cout << "\n\tLa velocidad inicial del proyectil es: \t" << veloin << " m/s\n";
	std::cout << "\n\tEl alcance maximo del proyectil es: \t" << xmax << " m\n";
	std::cout << "\n\tLa altura maxima del proyectil es: \t" << hmax << " m\n";
	std::cout << "\t----------------------------------------------------------------------\n";
}

int main()
{
	while (seguir == "S" or seguir == "s")
	{
		pedirDatos();
		calculo();
		imprimirDatos();

		std::cout << "\n\tDesea procesar otro proyectil S o N\t"; std::cin >> seguir;
		while (seguir != "s" and seguir != "S" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N\t"; std::cin >> seguir;
		}
	}
	std::cout << "\n\n";
	std::cout << "\t";

	system("pause");
	return 0;
}