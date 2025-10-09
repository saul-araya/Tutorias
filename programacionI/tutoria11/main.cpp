#include <iostream>
#include "Lista.cpp"
#include "Estudiante.cpp"
#include "Nodo.cpp"

using namespace std;

int main(){

    Lista* l1 = new Lista();
    Lista* l2 = new Lista();

    l1->agregarNodoFinal(new Estudiante("Juan", "1234", 2025, true));
    l1->agregarNodoFinal(new Estudiante("Yariela", "4321", 2025, true));
    l1->agregarNodoFinal(new Estudiante("Carlos", "1111", 2025, false));
    l1->agregarNodoFinal(new Estudiante("Saul", "1010", 2025, true));
    l1->agregarNodoFinal(new Estudiante("Eli", "8888", 2025, false));

    l2->agregarNodoFinal(new Estudiante("Jose", "5555", 2025, true));
    l2->agregarNodoFinal(new Estudiante("Gabriel", "9999", 2025, true));
    l2->agregarNodoFinal(new Estudiante("Marielle", "2222", 2025, false));
    l2->agregarNodoFinal(new Estudiante("Saul", "1010", 2025, true));

    if(l1->buscarEstudiante("1111")) cout<<"Si lo encontre";
    else cout<<"No lo encontre";

    l1->copiaLista(l2);

    cout<<l1->toString()<<endl;

    l1->eliminaNoActivos();

    cout<<l1->toString()<<endl;

    return 0;
}