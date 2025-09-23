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

    std::vector<std::string> nombres_atletas;
     std::vector<std::string> pais_origen;
     std::vector<std::string> disciplina;
    std::vector<char> genero;
    std::vector<int> cantidad_medallas;

 

while (true)
    {
    std::cout << "1) Registrar Atleta." << std::endl;
    std::cout << "2) Buscar Atleta." << std::endl;
    std::cout << "3) Calcular el total de medallas de oro del pais." << std::endl;
    std::cout << "4) Encontrar Atleta con la mayor cantidad de medallas." << std::endl;
     std::cout <<"5) Salir" << std::endl;
    int select = 0;
//Validar la seleccion del usuario
    
         std::cin >> select;
    if (select < 1 or select > 5)
    {
       std::cout << "Dato invalido\n";
    } else if (select == 1) //REGISTRAR
    {
        
        std::cout << "Ingrese el nombre del atleta:\n";
        std::string name = "";
        std::cin.ignore();
        std::getline(std::cin, name);
        nombres_atletas.push_back(name);

        std::cout << "Su pais de origen:\n";
        std::string pai;
        std::getline(std::cin, pai);
        pais_origen.push_back(pai);

        std::cout << "Su disciplina:\n";
       std::string dis;
        std::getline(std::cin, dis);
        disciplina.push_back(dis);

        std::cout << "Su genero:\n";
        char gen;
       std::cin >> gen;
       genero.push_back(gen);

        std::cout << "Y por ultimo la cantidad de medallas:\n";
        int meda;
       std::cin >> meda;
       cantidad_medallas.push_back(meda);


    }else if (select == 2)
    {
      
     
    }else if (select == 3)
    {
        
      
    }else if (select == 4)
    {
      
     
    }else if (select == 5)
    {
         std::cout << "Gracias por utilizar este programa :3." << std::endl;
      break;
    }
    
    } //WHILE
    return 0;
}