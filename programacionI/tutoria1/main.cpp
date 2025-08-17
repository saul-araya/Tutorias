#include <iostream>
#include "Person.cpp"
#include "Student.cpp"

using namespace std;

int main(){

    //Creamos un objeto puntero de la clase Student con su constructor parametrizado
    Student* s = new Student("4444444", "Saul", 20, "Full-Stack Enginner", 9);

    //Llamamos a los metodos que sobreescribimos aplicando polimorfismo
    s->eat();
    s->walk();
    cout<<s->toString()<<endl;

    //Liberamos la memoria del puntero que creamos
    delete s;

    /*
    Resultado a esperar:

    El estudiante esta comiendo en la soda!!!
    El estudiante esta caminando por la Universidad!!!
    Nombre: Saul
    Profesion: Full-Stack Enginner
    */

    return 0;
}