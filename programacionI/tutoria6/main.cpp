#include "Person.cpp"
#include "Employee.cpp"
#include "Client.cpp"

int main(){

    Person *p = new Employee("Saul", "402650782", 21, "123421422", "Data Base");
    Person *p2 = new Client("Kevin", "23243243", 32, "Avenida central, 250m Sur");

    Person ** vec = new Person*[10];

    vec[0] = p;
    vec[1] = p2;
    //...

    for(int i = 0; i < 2; i++){
        if(dynamic_cast<Employee*>(vec[i])){
            cout<<"Es Empleado: "<<endl<<endl<<vec[i]->toString();
        }
        else{
            cout<<"Es Cliente: "<<endl<<endl<<vec[i]->toString();
        }
    }

    return 0;
}