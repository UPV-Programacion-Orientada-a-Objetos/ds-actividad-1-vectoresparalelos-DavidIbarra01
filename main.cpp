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
 if (numero_atletas >= 50)
 {
    std::cout << "ERROR: No queda espacio para mas atletas pipipi (maximo de hasta 50)\n";
 }else{    

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
    //Guardar atleta

            std::ofstream archivo("data/list.csv", std::ios::out);
            if (archivo.fail()) {
                std::cout << "Ocurrio un error al abrir el archivo\n";
               
            } else {
                archivo << "Nombre,pais,disciplina,genero,medallas" << std::endl;
                 archivo << nombres_atletas[numero_atletas] << ","  << paises_origen[numero_atletas] << ","    << disciplinas[numero_atletas] << ","  << generos[numero_atletas] << ","  << cantidades_medallas[numero_atletas] << std::endl;
                archivo.close();
                std::cout << "Atleta registrado y guardado en el csv correctamente\n";
            }

    numero_atletas++;
    break; //registro

 }
 

    case 2: //La busqueda de atletas :)
   
if(numero_atletas == 0) {
            std::cout << "Los arrays estan vacios.\n";
        } else {
            std::cout << "Ingrese el nombre del atleta a buscar: ";
            std::string findName;
            std::cin >> findName;
            
//--------------------------------------------------------------
            bool Existe = false;
            for(int i = 0; i < numero_atletas; i++) {
                if(nombres_atletas[i] == findName) {
                    std::cout << "¡Atleta encontrado yeei!:\n";
                    std::cout << "- Nombre: " << nombres_atletas[i] << std::endl;
                    std::cout << "- Pais: " << paises_origen[i] << std::endl;
                    std::cout << "- Medallas: " << cantidades_medallas[i] << std::endl;
                    Existe = true;
                    break;
                }
            }
            if(!Existe) {
                std::cout << "Atleta no encontrado o no existe.\n";
            }
        }

    break;
 default:
 std::cout << "Ingrese una opcion valida\n";
    break;
 }

} while (true); //EL CORAZON DEL PROGRAMA

    std::cout << "Gracias por haber utilizado el programa :3\n";
    return 0;
}