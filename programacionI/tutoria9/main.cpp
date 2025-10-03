#include "Carro.cpp"
#include "Nodo.cpp"
#include "Lista.cpp"

int main(){

    Lista* A = new Lista();
    Lista* B = new Lista();

    A->agregarNodoFinal(new Carro("BBB-818", 2025));
    A->agregarNodoFinal(new Carro("YSA-777", 2024));
    A->agregarNodoFinal(new Carro("BKL-987", 2025));
    A->agregarNodoFinal(new Carro("1764818", 2010));

    B->agregarNodoFinal(new Carro("BBB-818", 2025));
    B->agregarNodoFinal(new Carro("BKL-987", 2025));
    B->agregarNodoFinal(new Carro("YSK-245", 2025));

    cout<<A->coincidencias(B)->toString()<<endl;

    cout<<"------------------------Diferencias-----------------------"<<endl;

    cout<<A->diferencia(B)->toString()<<endl;


    return 0;
}