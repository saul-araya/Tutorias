#include "Nodo.cpp"
#include "Lista.cpp"
#include "Empleado.cpp"

int main(){

    Lista* lista = new Lista();

    Empleado* emp1 = new Empleado("Saul", 100000);
    Empleado* emp2 = new Empleado("Yariela", 680000);
    Empleado* emp3 = new Empleado("Elizabeth", 600000);
    Empleado* emp4 = new Empleado("Carlos", 900000);
    Empleado* emp5 = new Empleado("Yariela", 900000);

    lista->agregarNodoFinal(emp1);
    lista->agregarNodoFinal(emp2);
    lista->agregarNodoFinal(emp3);
    lista->agregarNodoFinal(emp4);
    
    //intento de agregar empleado repetido
    lista->agregarNodoFinal(emp5);//No se inserta porque es repetido

    cout<<lista->toString()<<endl;

    cout<<"La cantidad actual es: "<<lista->getCantidad()<<endl;

    cout<<"El promedio del salario de los empleados es: "<<lista->promedioSalarios()<<endl;

    Empleado * aux = lista->buscarPorNombre("Yariela");
    if(aux != nullptr){
        cout<<"Si se encontro al empleado: "<<endl<<aux->toString();
    }else{
        cout<<"No se encontro al empleado"<<endl;
    }

    return 0;
}