//El Prototipo
#include <iostream>
#include <vector> //Para utilizar metodos de vectores, como el push_back
#include <string> 
#include <sstream> //Para manipular las cadenas de caracteres
#include <fstream> //Proporciona las herramientas necesarias para la lectura de archivos CSV
#define nombre_archivo "list.csv"
//PROBLEMA PROBLEMON: Registro de Atletas Olímpicos



    /*std::cout << "+----------------------------------------------------+" << std::endl;
|                       FEDERACIÓN MUNDIAL DE ATLETISMO                        |
|-------------------------------------------------------------------------------|
|                                                                               |
|                  __________________                                      |
| //|\\  __/|__   //                \\                                     |
| // \\ /  /    //    Atletas UPV    \\                                      |
|     /  /     //_____________________\\                                  |
|    /  /     //_______________________\\                             |
|                                                                               |
|   
+-------------------------------------------------------------------------------+
";*/



int main() {
    
 //Mis variables
std::string nombres_atletas[50];
std::string paises_origen[50];
std::string disciplinas[50];
char generos[50];
int cantidades_medallas[50];
  int select;
int numero_atletas = 0;

do
{
  std::cout << "1) Registrar Atleta." << std::endl;
    std::cout << "2) Buscar Atleta." << std::endl;
    std::cout << "3) Calcular el total de medallas de oro del pais." << std::endl;
    std::cout << "4) Encontrar Atleta con la mayor cantidad de medallas." << std::endl;
     std::cout <<"5) Salir" << std::endl;
 std::cin >> select;

 switch (select)
 {
 case 1:
    std::cout << "Ingrese el nombre del atleta:\n";
    std::cin.ignore(); //Limpia el cin
    std::getline(std::cin, nombres_atletas[numero_atletas]);
    
    std::cout << "Su pais de origen:\n";
    std::getline(std::cin, paises_origen[numero_atletas]);

    std::cout << "Su disciplina:\n";
    std::getline(std::cin, disciplinas[numero_atletas]);

    std::cout << "Su genero: (M/F)\n";
   std::cin >> generos[numero_atletas];

    std::cout << "Y por ultimo, la cantidad de medallas que posee:\n";

    //Validacion de cantidad positiva en las medallas
    while (true)
    {
        std::cin >> cantidades_medallas[numero_atletas];
        if (cantidades_medallas[numero_atletas] < 0)
        {
            std::cout << "¡ERROR! Ingrese un numero positivo\n";
        }else{
            break;
        }
        
    }
    

    numero_atletas++;
    break; //registro
 

    case 2: //La busqueda de atletas :)

    break;
 default:
 std::cout << "Ingrese una opcion valida\n";
    break;
 }

} while (true); //EL CORAZON DEL PROGRAMA

    std::cout << "Gracias por haber utilizado el programa :3\n";
    return 0;
}