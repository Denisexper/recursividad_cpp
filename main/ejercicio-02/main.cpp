#include <iostream>
#include <utility>
using namespace std;

int main () {

    string x;
    cin>>x;

    //guardar el tamano de X
    int n = x.size();

    //flag
    int pos = -1;

    //verificar si existe un 0 en el numero X
    for(int i = n -1; i >= 0; i--){
        if(x[i] == '0'){
            pos = i;
            break;
        }
    }

    // guardar la poscion del '0' en pos
    if(pos == -1){

        cout << -1 << '\n';
        return 0;
    }

    //contador de swaps
    int contador = 0;
    //mover el 0 hasta el final
    for(int i = pos; i < n- 1; i++){

        swap(x[i], x[i + 1]);
        contador++;

    }
    //sacar los tres ultimos numeros y sacarles le modulo
    int ultimos = (x[n-3] -'0') * 100 + (x[n-2] - '0') * 10 + (x[n-1] - '0');

    if(ultimos % 40 == 0){

        cout<< "Es multiplo de 40" << '\n';
    }
    
    
}