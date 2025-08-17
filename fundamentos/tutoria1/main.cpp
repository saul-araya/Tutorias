#include <iostream>
#include <sstream>

using namespace std;

class Animal{
private:
    string raza;
    int edad;
    bool vacuna;
public:
    Animal(){
        this->raza = "";
        this->edad = 0;
        this->vacuna = false;
    }
    Animal(string raza, int edad, bool vacuna){
        this->raza = raza;
        this->edad = edad;
        this->vacuna = vacuna;
    }
    ~Animal(){}

    string getRaza(){return this->raza;}
    int getEdad(){return this->edad;}
    bool getVacuna(){return this->vacuna;}

    void setRaza(string raza){this->raza = raza;}
    void setEdad(int edad){this->edad = edad;}
    void setVacuna(bool vacuna){this->vacuna = vacuna;}

    virtual void comer(){
        cout<<"Metodo de la clase abstracta (animal)"<<endl;
    }

    virtual void hacerSonido(){
        cout<<"Metodo de la clase abstracta (animal)"<<endl;
    }
};

class Gato : public Animal{
private:
    int cantGarras;
    bool esDomestico;
public:
    Gato() : Animal(){
        this->cantGarras = 0;
        this->esDomestico = false;
    }
    Gato(string raza, int edad, bool vacuna, int cantGarras, bool esDomestico) : Animal(raza, edad, vacuna){
        this->cantGarras = cantGarras;
        this->esDomestico = esDomestico;
    }
    ~Gato(){}

    int getCantGarras(){return this->cantGarras;}
    bool getEsDomestico(){return this->esDomestico;}

    void setCantGarras(int cantGarras){this->cantGarras = cantGarras;}
    void setEsDomestico(bool esDomestico){this->esDomestico = esDomestico;}

    void comer(){
        cout<<"El gato esta comiendo pescado"<<endl;
    }

    void hacerSonido(){
        cout<<"El gato esta maullando"<<endl;
    }

};

class Perro : public Animal{
private:
    int cantGarras;
    bool esDomestico;
public:
    Perro() : Animal(){
        this->cantGarras = 0;
        this->esDomestico = false;
    }
    Perro(string raza, int edad, bool vacuna, int cantGarras, bool esDomestico) : Animal(raza, edad, vacuna){
        this->cantGarras = cantGarras;
        this->esDomestico = esDomestico;
    }
    ~Perro(){}

    int getCantGarras(){return this->cantGarras;}
    bool getEsDomestico(){return this->esDomestico;}

    void setCantGarras(int cantGarras){this->cantGarras = cantGarras;}
    void setEsDomestico(bool esDomestico){this->esDomestico = esDomestico;}

    void comer(){
        cout<<"El perro esta comiendo carne"<<endl;
    }

    void hacerSonido(){
        cout<<"El perro esta ladrando"<<endl;
    }

    void jugar(string cosa){
        cout<<"El perro esta jugando con:"<<cosa<<endl;
    }

};

int main(){

    Gato g = Gato("egipcio", 2, true, 4, true);
    Perro p = Perro("Doberman", 4, true, 0, true);

    //Metodos de la clase Gato
    g.comer();
    g.hacerSonido();

    cout<<endl<<endl;

    p.comer();
    p.hacerSonido();

    p.jugar("una bola");

    return 0;
}