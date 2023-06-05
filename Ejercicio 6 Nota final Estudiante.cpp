/*Calcule la nota final del estudiante conocidos tres notas parciales que se leen por teclado al igual que
el nombre del estudiante, las notas parciales tienen ponderaciones de 0.25, 0.30 y 0.45 respectivamente.
Se debe mostrar el nombre del estudiante, las notas parciales, las ponderaciones y la nota
final.*/

#include<iostream>
#include<cstdlib>
#include<string>
#include<windows.h>

float n1, n2, n3, nf;
std::string seguir = "S", nom;

void imprimirDatos()
{
	std::cout << "\n\n\t             Imprimir datos y resultados             \n";
	std::cout << "\t---------------------------------------------------------\n";
	std::cout << "\n\tReporte de Calificaciones del estudiante: \t" << nom << "\n";
	std::cout << "\n\tLa primera nota parcial y su porcentaje son: \t" << n1 << "\t0.25"<<"\n";
	std::cout << "\n\tLa segunda nota parcial y su porcentaje son: \t" << n2 << "\t0.30" << "\n";
	std::cout << "\n\tLa tercera nota parcial y su porcentaje son: \t" << n3 << "\t0.45" << "\n";
	std::cout << "\n\tLa nota final del estudiante es: \t" << nf << "\n";
	std::cout << "\t---------------------------------------------------------\n";
}

int main()
{
	while (seguir == "S" or seguir == "s")
	{
		system("CLS");
		system("color 70");

		std::cout << "\n\n\tPrograma que calcula la nota final del estudiante!\n";
		std::cout << "\t---------------------------------------------------------\n";
		std::cout << "\n\n\tDigite el apellido del estudiante\t"; std::getline(std::cin, nom);

		std::cout << "\n\n\tDigite las tres notas parciales entre 0 y 5\n\t";
		std::cin >> n1 >> n2 >> n3;

		while (n1 < 0 or n1>5 or n2 < 0 or n2>5 or n3 < 0 or n3 >5)
		{
			std::cout << "\n\n\tError, digite las ters notas parciales entre 0 y 5\n\t";
			std::cin >> n1 >> n2 >> n3;
		}

		nf = n1 * 0.25 + n2 * 0.3 + n3 * 0.45;

		imprimirDatos();

		std::cout << "\n\tDesea procesar otro estudiante? S o N\t"; std::cin >> seguir;
		while (seguir != "S" and seguir != "s" and seguir != "n" and seguir != "N")
		{
			std::cout << "\n\tError. Digite S o N\t";
			std::cin >> seguir;
		}
	}

	std::cout << "\n\n\t";
	system("pause");
	return 0;
}