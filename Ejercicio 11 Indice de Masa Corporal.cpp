/* Escriba, compile y ejecute un programa en C++ que calcule y valore el índice de masa corporal calculado como imc = m / T 2. */

#include <iostream>
#include <string>
#include <Windows.h>

float m = 0, t = 0, imc = 0;
std::string seguir = "S", nom, valora;

void inicio()
{
    std::cout << "\n\n\tPrograma que calcula y valora el indice de masa corporal!\n";
    std::cout << "\t----------------------------------------------------------------\n\n"; Sleep(400);
    std::cout << "\n\tCaptura y validacion de datos";
    std::cout << "\n\t-----------------------------\n"; Sleep(400);
}

void pedirDatos()
{
    std::cout << "\n\tDigite el nombre del paciente: "; Sleep(400); std::cin >> nom;
    std::cout << "\n\tDigite la masa en Kg: "; Sleep(400); std::cin >> m;
    while (m <= 0)
    {
        std::cout << "\n\tError, digite la masa en Kg: ";
        Sleep(400); std::cin >> nom;
    }

    std::cout << "\n\tDigite la talla en m: ";
    Sleep(400); std::cin >> t;
    while (t <= 0 or t > 2.5)
    {
        std::cout << "\n\tError, digite la talla en m: ";
        Sleep(400); std::cin >> t;
    }
}

void calcularDatos()
{
    std::cout << "\n\tCalculando y valorando el I.M.C.....\n\n"; Sleep(400);
    imc = (float(m)) / pow(t, 2);

    if (imc < 18.5)
    {
        valora = "Insuficiencia Ponderal";
    }
    else
    {
        if (imc < 25)
        {
            valora = "Intervalo Normal";
        }
        else
        {
            if (imc < 30)
            {
                valora = "Preobesidad";
            }
            else
            {
                if (imc < 35)
                {
                    valora = "Obesidad Clase 1";
                }
                else
                {
                    if (imc < 40)
                    {
                        valora = "Obesidad Clase 2";
                    }
                    else
                    {
                        valora = "Obesidad Clase 3";
                    }
                }
            }
        }
    }
}

void imprimirDatos()
{
    std::cout << "\n\t         Imprimir Datos y Resultados             ";
    std::cout << "\n\t-------------------------------------------------\n";
    std::cout << "\n\tNombre del paciente: \t\t\t" << nom; Sleep(400);
    std::cout << "\n\tMasa del paciente en Kg: \t\t" << m; Sleep(400);
    std::cout << "\n\tTalla del paciente en m: \t\t" << t; Sleep(400);
    std::cout << "\n\tIndice de masa corporal en Kg / m2: \t" << imc; Sleep(400);
    std::cout << "\n\tValoracion del indice IMC: \t\t" << valora; Sleep(400);
    std::cout << "\n\t-------------------------------------------------\n\n";
}

int main()
{
    while (seguir == "S" or seguir == "s")
    {
        system("CLS");
        system("color 70");
        inicio();
        pedirDatos();
        calcularDatos();
        imprimirDatos();

        std::cout << "\n\tDesea procesar otro paciente: S o N\t"; Sleep(400); std::cin >> seguir;
        while (seguir != "S" and seguir != "s" and seguir != "N" and seguir != "n")
        {
            std::cout << "\n\tError. Digite S o N\t"; Sleep(500); std::cin >> seguir;
        }
    }

    system("pause");
    return 0;
}
