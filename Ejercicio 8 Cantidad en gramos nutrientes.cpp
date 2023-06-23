/*Escriba, compile y ejecute un programa en C++ que calcule la cantidad en gramos de cada uno de los nutrientes para una dieta
en Kcal que se lee por teclado. */

#include<iostream>
#include<string>
#include<locale.h>

#define ec 0.55
#define el 0.30
#define ep 0.15
#define kc 4
#define kl 9
#define kp 4

float gc, gl, gp, dieta, kcar, klip, kpro;
std::string seguir = "S", nom;

void calculos()
{
	kcar = ((float)dieta) * ec;
	klip = ((float)dieta) * el;
	kpro = ((float)dieta) * ep;
	gc = ((float)kcar) / kc;
	gl = ((float)klip) / kl;
	gp = ((float)kpro) / kp;
}

void imprimirDatos()
{
	std::cout << "\n\n\n\t                        Imprimir Datos                           \n";
	std::cout << "\t---------------------------------------------------------------------\t";
	std::cout << "\n\tEl nombre del o la paciente es: \t" << nom << "\n";
	std::cout << "\n\tLa dieta calorica del paciente es: \t" << dieta << " Kcal\n";
	std::cout << "\n\tEl aporte calorico de los carbohidratos es: \t" << kcar << " Kcal\n";
	std::cout << "\n\tEl aporte calorico de los lipidos es: \t" << klip << " Kcal\n";
	std::cout << "\n\tEl aporte calorico de las proteinas es: \t" << kpro << " Kcal\n";
	std::cout << "\n\tLos gramos de carbohidratos requeridos son: \t" << gc << " g\n";
	std::cout << "\n\tLos gramos de los lipidos requeridos son: \t" << gl << " g\n";
	std::cout << "\n\tLos gramos de proteinas requeridos son: \t" << gp << " g\n";
	std::cout << "\t---------------------------------------------------------------------\t";
}

int main()
{
	system("CLS");
	system("color 70");

	std::cout << "\n\n\n\tPrograma que calcula los gramos de nutriente para una dieta calorica!\n";
	std::cout << "\t---------------------------------------------------------------------\t";

	while (seguir == "S" or seguir == "s")
	{
		std::cout << "\n\n\tDigite el nombre del paciente: \t"; std::cin >> nom;
		std::cout << "\n\n\tDigite la dieta calorica en Kcal del paciente: \t"; std::cin >> dieta;

		while (dieta <= 0)
		{
			std::cout << "\n\n\tError. digite valor mayor de 0, digite la dieta calorica en Kcal: \t"; std::cin >> dieta;
		}

		calculos();
		imprimirDatos();

		std::cout << "\n\tDesea procesar otro paciente: S o N\t"; std::cin >> seguir;

		while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N\t"; std::cin >> seguir;
		}

		if (seguir == "s" or seguir == "S")
		{
			system("CLS");
		}
	}

	system("pause");
	return 0;
}