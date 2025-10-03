#include "Lista.cpp"
#include "Producto.cpp"
#include "Nodo.cpp"

int main(){

    Lista* l1 = new Lista();
    Lista* l2 = new Lista();

    l1->agregarNodoFinal(new Producto("Pepsi", 1400.00));
    l1->agregarNodoFinal(new Producto("Harina", 1000.00));
    l1->agregarNodoFinal(new Producto("Huevo", 3000.00));
    l1->agregarNodoFinal(new Producto("Coca cola", 2600.00));

    l2->agregarNodoFinal(new Producto("Pepsi", 1400.00));
    l2->agregarNodoFinal(new Producto("Harina", 1000.00));
    l2->agregarNodoFinal(new Producto("Huevo", 3000.00));
    l2->agregarNodoFinal(new Producto("Coca cola", 2600.00));

    cout<<l1->compararaListas(l2)<<endl;



    /*
    
    =============================Matrices===================================
    
    */
    int filas = 2;
    int columnas = 2;

    int **matriz = new int*[filas];

    for (int i = 0; i<filas; i++)
	{
		matriz[i] = new int[columnas];
	}

    matriz[0][0] = 5;
    matriz[0][1] = 1;
    matriz[1][0] = 10;
    matriz[1][1] = 12;

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}




























