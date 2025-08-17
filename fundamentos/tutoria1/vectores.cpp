#include <iostream>
#include <sstream>

using namespace std;

int main(){

    int arreglo[10];

    arreglo[0] = 2;
    arreglo[1] = 80;
    arreglo[2] = 46;
    arreglo[3] = 23;
    arreglo[4] = 7;
    arreglo[5] = 52;

    int can = 6;

    for(int i = 0; i < can; i++){
        cout<<arreglo[i]<<endl;
    }

    return 0;
}