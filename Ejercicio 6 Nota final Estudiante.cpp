/*Calcule la nota final del estudiante conocidos tres notas parciales que se leen por teclado al igual que
el nombre del estudiante, las notas parciales tienen ponderaciones de 0.25, 0.30 y 0.45 respectivamente.
Se debe mostrar el nombre del estudiante, las notas parciales, las ponderaciones y la nota
final.*/

#include<iostream>
#include<cstdlib>
#include<string.h>
#include<windows.h>

float n1, n2, n3, f;
std::string seguir = "S", nom;

int main()
{
	

	while (seguir == "S" or seguir == "s")
	{
		system("CLS");
		system("color 70");

		std::cout << "\n\n\tPrograma que calcula la nota final del estudiante!\n";
		std::cout << "\t---------------------------------------------------------\n";
		std::cout << "\n\n\tDigite el apellido del estudiante\t"; std::cin >> nom;

		std::cout << "\n\n\tDigite las tres notas parciales entre 0 y 5\n\t";

	}


	system("pause");
	return 0;
}