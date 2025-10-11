#include <iostream>
#include <sstream>

using namespace std;

class Evento{
private:
    string nombreEvento;
    int annio;
    int mes;
    int dia;
    int hora;
    int cantidadPersonas;
    char tipoEscenario;
    int cantidadDias;
public:

    //Constructor sin parametros
    Evento(){
        this->nombreEvento = "";
        this->annio = 0;
        this->dia = 0;
        this->hora = 0;
        this->cantidadPersonas = 0;
        this->tipoEscenario = 'S';
        this->cantidadDias = 0;
    }

    //Constructor con parametros
    Evento(string nomEvento, int annio, int dia, int mes, int hora, int cantidadPersonas, char tipoEscenario, int canDias){
        this->nombreEvento = nomEvento;
        this->annio = annio;
        this->dia = dia;
        this->hora = hora;
        this->cantidadPersonas = cantidadPersonas;
        this->tipoEscenario = tipoEscenario;
        this->cantidadDias = canDias;
    }

    //Set
    void setNombreEvento(string nuevoNombre){
        this->nombreEvento = nuevoNombre;
    }

    void setAnnio (int annio){
        this->annio = annio;
    }

    void setMes(int mes){
        this->mes = mes;
    }

    void setDia(int dia){
        this->dia = dia;
    }

    void setHora(int hora){
        this->hora = hora;
    }

    void setCantidadPersonas(int cantidadPersonas){
        this->cantidadPersonas = cantidadPersonas;
    }

    void setTipoEscenario(char tipoEscenario){
        this->tipoEscenario = tipoEscenario;
    }

    void setCantidadDias(int canDias){
        this->cantidadDias = canDias;
    }

    //get
    string getNombreEvento(){
        return this->nombreEvento;
    }


    //toString
    string toString(){
        stringstream s;
        s<<"Nombre del evento: "<<this->nombreEvento<<"\n";
        s<<"Annio: "<<this->annio<<"\n";
        s<<"Dia: "<<this->dia<<"\n";
        s<<"Hora: "<<this->hora<<"\n";
        s<<"Cantidad de personas: "<<this->cantidadPersonas<<"\n";
        s<<"Tipo de escenario: "<<this->tipoEscenario<<"\n";
        s<<"Cantidad de dias: "<<this->cantidadDias<<"\n";
        return s.str();
    }

    //Costo por dia
    int costoPorDia(){
        switch (tipoEscenario){
        case 'b': return 60000; break;
        case 'l': return 75000; break;
        case 'p': return 100000; break;
        default:
            return 0;
            break;
        }
    }

    //Descuento
    int descuento(){
        int costo = costoPorDia();
        if(cantidadDias == 2 || cantidadDias == 3){
            return costo * 0.10;
        }else if(cantidadDias >= 4){
            return costo * 0.15;
        }else{
            return 0;
        }
    }

    //precio venta
    int precioVenta(){
        int total = costoPorDia() * cantidadDias - descuento();
        return (total + (total * 0.30)) / cantidadPersonas;
    }

    //clonar
    void clonar(Evento &e){
        e.nombreEvento = this->nombreEvento;
        e.annio = this->annio;
        e.dia = this->dia;
        e.hora = this->hora;
        e.cantidadPersonas = this->cantidadPersonas;
        e.tipoEscenario = this->tipoEscenario;
        e.cantidadDias = this->cantidadDias;
    }

    //Mas Antiguo
    Evento masAntiguo(Evento e){
        if(e.annio < this->annio || e.mes < this->mes || e.dia < this->dia){
            return e;
        }
        if(e.annio == this->annio && e.mes == this->mes && e.dia == this->dia){
            if(e.hora < this->hora){
                return e;
            }else{
                return *this;
            }
        }else{
            return *this;
        }
    }
};

class Numero{
private:
    int valor;
public:
    Numero(int n) : valor(n){}
    Numero(): valor(0){}

    int getValor(){return valor;}
    void setValor(int valor){this->valor = valor;}

    int evelar(Numero otro){
        int resultado = 1;
        if(otro.getValor() == 0) return resultado;
        for(int i = 0; i < otro.getValor(); i++){
            resultado *= this->valor;
        }
        return resultado;
    }

    bool altamenteAlternante(){
        int aux = this->valor;
        bool estado = false; //estado si esta en false significa que el valor debe ser par
        while(aux > 0){
            
            int digito = aux % 10;
            if(digito % 2 == 0 && !estado) estado = true;

            aux = aux / 10;

            if(aux % 2 != 0 && estado) estado = false;
            if(estado) return false;

            aux = aux / 10;
        }

        return true;
    }
};

int main(){

    /*Evento event1 = Evento("Evento 1", 2025, 10, 10, 8, 100, 'p', 3);
    Evento event2 = Evento();

    string nombreEvento;
    int annio, mes, dia, hora, cantidadPersonas, cantidadDias;
    char tipoEscenario;

    cout<<"Ingrese el nombre del evento: "; cin>>nombreEvento;
    cout<<"Ingrese el annio del evento: "; cin>>annio;
    cout<<"Ingrese el mes del evento: "; cin>>mes;
    cout<<"Ingrese el dia del evento: "; cin>>dia;
    cout<<"Ingrese la hora del evento: "; cin>>hora;
    cout<<"Ingrese la cantidad de personas: "; cin>>cantidadPersonas;
    cout<<"Ingrese la cantidad de dias: "; cin>>cantidadDias;
    cout<<"Ingrese el tipo de escenario ('b', 'l' o 'p'): "; cin>>tipoEscenario;

    event2.setNombreEvento(nombreEvento);
    event2.setAnnio(annio);
    event2.setMes(mes);
    event2.setDia(dia);
    event2.setHora(hora);
    event2.setCantidadPersonas(cantidadPersonas);
    event2.setCantidadDias(cantidadDias);
    event2.setTipoEscenario(tipoEscenario);

    int precioEvent1 = event1.precioVenta();
    int precioEvent2 = event2.precioVenta();
    if(precioEvent1 > precioEvent2){
        cout<<"El evento 2 tiene menor precio\n";
    }else if(precioEvent2 > precioEvent1){
        cout<< "El evento 1 tiene menor precio\n";
    }else{
        cout<<"Ambos eventos tiene el mismo precio\n";
    }

    cout<<event1.masAntiguo(event2).getNombreEvento()<<"\n";

    event1.clonar(event2);

    cout<<"Estado el evento 1: \n";
    cout<<event1.toString()<<"\n\nEstado del evento 2: \n"<<event2.toString();*/

    Numero n1 = Numero(2);
    Numero n2 = Numero(4);

    //cout<<n1.evelar(n2)<<endl;

    Numero n3 = Numero(8122);
    cout<<n3.altamenteAlternante()<<endl;
    return 0;
}