#include "Cliente.cpp"
#include "Cuenta.cpp"

int main(){

    Cliente cliente = Cliente("1234567", "Sofia", "Heredia", 22);

    Cuenta cuenta = Cuenta("AS55678434", 200000, cliente);

    cout<<cuenta.mostrarCuenta()<<endl;

    if(cuenta.retiro(100000)){
        cout<<"Se hizo el retiro con exito"<<endl<<endl;
    }
    else{
        cout<<"No se pudo hacer el retiro"<<endl<<endl;
    }

    if(cuenta.retiro(400000)){
        cout<<"Se hizo el retiro con exito"<<endl<<endl;
    }
    else{
        cout<<"No se pudo hacer el retiro"<<endl<<endl;
    }

    cuenta.ingreso(500000);

    cout<<cuenta.mostrarCuenta()<<endl;

    return 0;
}