//El Prototipo
#include <iostream>
#include <vector>
#include <string>
//PROBLEMA PROBLEMON: Registro de Atletas Olímpicos

void menu();


void Registrar(std::vector<std::string>&nombres,  std::vector<std::string>&paises,  std::vector<std::string>&disciplina,  std::vector<char>&genero,  std::vector<int>&medallas){
    std::string name;
std::cout << "Ingrese el nombre del atleta:\n";
std::cin.ignore();
std::getline(std::cin, name);
nombres.push_back(name);

std::cout << "El pais de origen:\n";
std::string pais;
std::getline(std::cin, pais);
paises.push_back(pais);
menu();
}

void Buscar(){

}

void CalcularTotalMedallas(){

}
//Buscar el atleta con mayor cantidad de medallas
void AtletaHardcore(){

}




void menu(){
   

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

 //Mis variables
    std::vector<std::string> nombres_atletas;
     std::vector<std::string> pais_origen;
     std::vector<std::string> disciplina;
    std::vector<char> genero;
    std::vector<int> cantidad_medallas;

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
        Registrar(nombres_atletas, pais_origen, disciplina, genero, cantidad_medallas);
       break;
    }else if (select == 1)
    {
        Buscar();
       break;
    }else if (select == 1)
    {
        CalcularTotalMedallas();
       break;
    }else if (select == 1)
    {
        AtletaHardcore();
       break;
    }
    
    }
    
}


int main() {
menu();
    return 0;
}