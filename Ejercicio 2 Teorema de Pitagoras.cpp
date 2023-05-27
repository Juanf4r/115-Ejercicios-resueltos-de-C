/*Escriba, compila y ejecute un programa que determine la distancia de una escalera
apoyada a la base de un edficio. */

#include<iostream>
#include<locale.h>
#include<windows.h>
#include<string>

int main()
{
	float dis = 0, ang = 0, hipot = 0;
	std::string seguir = "S";
	system("CLS");
	system("color 70");
	while (seguir == "S" or seguir == "s")
	{
		std::cout << "\n\n\n\tPrograma que calcula la distancia de la base de la escalera al edificio\n";
		std::cout << "\t-----------------------------------------------------------------------------\n";
		std::cout << "\n\n\tDigite los datos de la Hipotenusa en m y el angulo en grados  > 0 y <90\n\n\t"; 
		std::cin >> hipot >> ang;
		while(hipot < 0 or ang <=0 or ang >= 90);
		{
			std::cout << "\nError, digite datos positivos de la hipotenusa y el angulo > 0 y < 90\n\n\t"; 
			std::cin >> hipot >> ang;
		}

		dis = ((float)hipot) * sin(ang * 3.1416 / 180);

		std::cout << "\n\tImprimir datos y resultados  \n";
		std::cout << "\t------------------------------------------------------------------\n\n";

		std::cout << "\n\tHipotenusa (Longitud de la escalera en m): \t" << hipot << "\n\n";
		std::cout << "\n\tAngulo en grados de la escalera: \t" << ang << "\n\n";
		std::cout << "\n\tDistancia de la escalera al edificio en m: \t" << dis << "\n\n";
		std::cout << "\t------------------------------------------------------------------\n";
		std::cout << "\n\tDesea continuar procesando S o N\t";
		std::cin >> seguir;
		while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
		{
			std::cout << "\n\tError. Digite S o N \t";
			Sleep(500);
			std::cin >> seguir;
		}
	}
	std::cout << "\n\n\t";
	system("pause");
	return 0;
}