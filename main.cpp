//El Prototipo
#include <iostream>
//PROBLEMA PROBLEMON: Registro de Atletas Olímpicos

void Registrar(){



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
        Registrar();
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