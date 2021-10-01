#include <iostream>

using namespace std;

int main(){
int numero;

    cout << "Ingresa tu numero: ";
    cin >> numero;

    if (numero == 0){
        cout << "El numero es neutro." <<endl;
    }
    else if(numero < 0){
    cout << "El numero es negativo." <<endl; 
    }
    else if(numero > 0){
    
    cout <<"El numero es positivo." <<endl;
    }

    return 0;
}