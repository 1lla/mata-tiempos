#include <iostream>
#include <juegos.h>
#include <vector>

#include "juegos.h"
#include "funciones_juegos.h"

//se incian los objetos
Hangman_    hangman;
Chino_      chino;
Chinchanpu_ chinchanpu;



int main()
{
    //esto es un contenedor
    Juego* nameJuegos[] = { &hangman, &chino, &chinchanpu };

    std::cout << "Hello world!" << std::endl;

    menu(nameJuegos, sizeof(nameJuegos)/sizeof(nameJuegos[0]));

    return 0;
}
