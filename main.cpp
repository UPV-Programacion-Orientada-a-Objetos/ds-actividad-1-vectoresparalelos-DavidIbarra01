//El Prototipo
#include <iostream>
#include <vector>
#include <string>
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
    std::vector<std::string> nombres_atletas = {};
     std::vector<std::string> pais_origen;
     std::vector<std::string> disciplina;
    std::vector<char> genero;
    std::vector<int> cantidad_medallas;

std::cout << nombres_atletas[0];

    std::cout << "1) Registrar Atleta." << std::endl;
    std::cout << "2) Buscar Atleta." << std::endl;
    std::cout << "3) Calcular el total de medallas de oro del pais." << std::endl;
    std::cout << "4) Encontrar Atleta con la mayor cantidad de medallas." << std::endl;
    int select = 0;
//Validar la seleccion del usuario
    while (true)
    {
         std::cin >> select;
    if (select < 1 or select > 4)
    {
       std::cout << "Dato invalido\n";
    } else if (select == 1)
    {
        
    }else if (select == 2)
    {
      
       break;
    }else if (select == 3)
    {
        
       break;
    }else if (select == 4)
    {
      
       break;
    }
    
    }
    return 0;
}