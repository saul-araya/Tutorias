#include "Juego.h"

Juego::Juego(){
    this->p1 = nullptr;
    this->p2 = nullptr;
    this->ban = nullptr;
    this->peri = nullptr;
}
Juego::Juego(Jugador* p1, Jugador* p2, Banca* ban, Perinola* peri){
    this->p1 = p1;
    this->p2 = p2;
    this->ban = ban;
    this->peri = peri;
}
Juego::~Juego(){
    delete p1, p2, ban, peri;
}
void Juego::jugar(){
    bool actual = false;

    if(actual){ //juegue J1
        p1->usarPerinola(this->peri);
        resultadoAlJugar(p1);
    }else{ //Juegue J2
        p2->usarPerinola(this->peri);
        resultadoAlJugar(p2);
    }

    if(this->ban->getCapital() <= 0){cout<<"La banca se ha quedado sin dinero";}

    

}
void Juego::mostrarEstadoJuego(){

}
void Juego::resultadoAlJugar(Jugador* current){
    switch (*this->peri->getEstado())
    {
    case 1:
        current->setCapital(new int(*current->getCapital() + 2000));
        this->ban->setCapital(new int(*current->getCapital() - 2000));
        break;
    case 2:
        current->setCapital(new int(*current->getCapital() + 4000));
        this->ban->setCapital(new int(*current->getCapital() - 4000));
        break;
    case 3:
        this->p1->setCapital(new int(*current->getCapital() + 1000));
        this->p2->setCapital(new int(*current->getCapital() + 1000));
        this->ban->setCapital(new int(*current->getCapital() - 2000));
        break;
    case 4:
        current->setCapital(new int(*current->getCapital() + 1000));
        this->ban->setCapital(new int(*current->getCapital() - 1000));
        break;
    case 5:
        current->setCapital(new int(*current->getCapital() - 500));
        this->ban->setCapital(new int(*current->getCapital() + 500));
    default:
        break;
    }
}