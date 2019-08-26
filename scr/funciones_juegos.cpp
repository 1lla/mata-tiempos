#include <iostream>
#include <funciones_juegos.h>


void menu(Juego* nameJuegos[], size_t numJuegos){
    for (unsigned i = 0; i < numJuegos; i++){
            std::cout << i+1 << ". " << nameJuegos[i]->getName() << std::endl;

    }


}
