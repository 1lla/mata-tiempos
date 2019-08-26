
#include <iostream>
#include <juegos.h>

//clase name :: clase methode

Juego :: Juego(const std::string& name){
        m_name = name;
}

//destructor

Juego :: ~Juego(){}

//constante typo_de_dato Clase_name :: funcion() constante;
const std::string& Juego :: getName() const{
        return m_name;
}

/////////////////////////////

//clase_Name :: methode: VatersKonstructor
//wir rufen die funktion in line 5;

Hangman_ :: Hangman_():Juego("Hangman"){}
Hangman_:: ~Hangman_(){}

//typo_de_dato Clase_name :: funcion()
int Hangman_ :: play(){
    std::cout << "ich spiele." << std::endl;
    return 15;
}

////////////////////////////////////////

Chino_ :: Chino_():Juego("Chino´s"){}
Chino_ :: ~Chino_(){}
int Chino_ :: play(){
        std::cout << "ich spiele." << std::endl;
        return 7;
}

Chinchanpu_ :: Chinchanpu_() : Juego("Chin Cham Pu"){}
Chinchanpu_ :: ~Chinchanpu_(){}
int Chinchanpu_ :: play(){
        std::cout << "ich spiele." << std::endl;
        return 55;
}







