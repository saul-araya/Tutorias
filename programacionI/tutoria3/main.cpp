#include "Departamento.cpp"

int main(){

    Departamento* depa = new Departamento(new string("RRHH"), new string("8347834"), new int(10));

    Empleado* e = new Empleado(new string("402650782"), new string("Saul"), new int(10));
    e->registerVenta(new double(2000.60));
    e->registerVenta(new double(1060.60));
    e->registerVenta(new double(1670.60));

    Empleado* e2 = new Empleado(new string("8888888"), new string("Yariela"), new int(10));
    e2->registerVenta(new double(2000.60));
    e2->registerVenta(new double(3000.60));
    e2->registerVenta(new double(1670.60));

    Empleado* e3 = new Empleado(new string("9999999"), new string("Juancito"), new int(10));
    e3->registerVenta(new double(2000.60));
    e3->registerVenta(new double(1060.60));
    e3->registerVenta(new double(1670.60));

    Empleado* e4 = new Empleado(new string("9999999"), new string("Juancito"), new int(10));
    e4->registerVenta(new double(2000.60));
    e4->registerVenta(new double(1060.60));
    e4->registerVenta(new double(1670.60));


    if(depa->insertarEmpleado(e)) cout<<"Empleado registrado correctamente\n";
    else cout<<"No se pudo registrar el empleado, puede estar repetido o que el departamento este lleno\n";
    if(depa->insertarEmpleado(e2)) cout<<"Empleado registrado correctamente\n";
    else cout<<"No se pudo registrar el empleado, puede estar repetido o que el departamento este lleno\n";
    if(depa->insertarEmpleado(e3)) cout<<"Empleado registrado correctamente\n";
    else cout<<"No se pudo registrar el empleado, puede estar repetido o que el departamento este lleno\n";
    if(depa->insertarEmpleado(e4)) cout<<"Empleado registrado correctamente\n\n";
    else cout<<"No se pudo registrar el empleado, puede estar repetido o que el departamento este lleno\n\n";


    cout<<"-------------------------Buscar empleado por id------------------------\n";
    cout<<"-----------------------------------------------------------------------\n";
    Empleado* temp = depa->buscarEmpleado("402650782");
    if(temp != nullptr){
        cout<<temp->toString()<<endl;
    }else{
        cout<<"No se encontro"<<endl;
    }

    cout<<"--------------------Empleado con las mejores ventas--------------------\n";
    cout<<"-----------------------------------------------------------------------\n";
    cout<<depa->empleadoMejoresVentas()->toString()<<endl<<endl;

    cout<<"--------------------Ingreso total del departamento---------------------\n";
    cout<<"-----------------------------------------------------------------------\n";
    cout<<"El ingreso total del departamento es: "<<depa->ingresoDepartamento()<<"\n\n";

    cout<<"----------------------Insertar venta a empleado------------------------\n";
    cout<<"-----------------------------------------------------------------------\n";
    if(depa->insertarVentaAEmpleado("402650782", 5000.56)) cout<<"La venta se a registrado exitosamente\n\n";
    else cout<<"La venta no se pudo registrar, puede que el empleado no este registrado.\n\n";

    cout<<"------------------Promedio de ventas de un empleado--------------------\n";
    cout<<"-----------------------------------------------------------------------\n";
    cout<<"El promedio de ventas del empleado es: "<<depa->promedioVentasEmpleado("8888888")<<"\n\n";

    return 0;
}