#include "Trabajador.cpp"

int main(){
    string nombre, cedula;
    float cantidadHoras;
    float precioPorHora;
    char categoria;
    float salarioBruto;
    float salarioNeto;
    int anniosServicio;

    cout<<"\n-------------------Trabajdor 1---------------------\n";

    cout<<"Ingrese el nombre del trabajador 1: "; cin>>nombre;
    cout<<"Ingrese la cedula del trabajdor 1: "; cin>>cedula;
    cout<<"Ingrese la cantidad de horas trabajadas por el trabajador 1: ";cin>>cantidadHoras;
    cout<<"Ingrese el precio por hora del trabajdor 1: "; cin>>precioPorHora;
    cout<<"Ingrese la categoria del trabajador 1: "; cin>>categoria;
    cout<<"Ingrese los annios de servicio del trabajador: "; cin>>anniosServicio;

    Trabajador t1 = Trabajador(nombre, cedula, cantidadHoras, precioPorHora, categoria, anniosServicio);

    cout<<t1.toString()<<endl;

    cout<<"\n---------------------Salarios Trabajdor 1---------------------\n\n";

    t1.calculoSalarioNeto();
    cout<<t1.toString()<<endl;

    cout<<"\n-------------------Trabajdor 2---------------------\n";

    cout<<"Ingrese el nombre del trabajador 2: "; cin>>nombre;
    cout<<"Ingrese la cedula del trabajdor 2: "; cin>>cedula;
    cout<<"Ingrese la cantidad de horas trabajadas por el trabajador 2: ";cin>>cantidadHoras;
    cout<<"Ingrese el precio por hora del trabajdor 2: "; cin>>precioPorHora;
    cout<<"Ingrese la categoria del trabajador 2: "; cin>>categoria;
    cout<<"Ingrese los annios de servicio del trabajador: "; cin>>anniosServicio;

    Trabajador t2 = Trabajador(nombre, cedula, cantidadHoras, precioPorHora, categoria, anniosServicio);
    cout<<t2.toString()<<endl;

    cout<<"\n---------------------Salarios Trabajdor 2---------------------\n\n";

    t2.calculoSalarioNeto();
    cout<<t2.toString()<<endl;

    cout<<"\n-------------------Salario mayor?---------------------\n";

    if(t1.getSalarioNeto() > t2.getSalarioNeto()){
        cout<<"El primer trabajador tiene el salario mas alto\n";
    }else if(t1.getSalarioNeto() < t2.getSalarioNeto()){
        cout<<"El segundo trabajador tiene el salario mas alto\n";
    }else{
        cout<<"Ambos tienen el mismo salario\n";
    }


    return 0;
}