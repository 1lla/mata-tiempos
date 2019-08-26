#ifndef JUEGOS_H_INCLUDED
#define JUEGOS_H_INCLUDED

#include <string>

// es una interface
class Juego{
    public:
        Juego(const std::string& name);
        virtual ~Juego();
        const std::string& getName() const;

        virtual int play() = 0;

    private:
        std::string m_name;


};

// estos son los hijos
// classe nameKind : public oder privat nameVater

class  Hangman_ : public Juego {

    public:
            Hangman_();
            ~Hangman_() override;
            int play()  override;       //viene de la linea de virtual int play() = 0;


};



class  Chino_ : public Juego {

    public:
            Chino_();
            ~Chino_()   override;
            int play()  override;       //viene de la linea de virtual int play() = 0;


};

class  Chinchanpu_ : public Juego {

    public:
            Chinchanpu_();
            ~Chinchanpu_()  override;
            int play()      override;       //viene de la linea de virtual int play() = 0;


};



#endif // JUEGOS_H_INCLUDED


