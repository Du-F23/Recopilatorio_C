#include <iostream>
 
using namespace std;
 
int main()
{
    char nombre [30];
    char grupo [30];
    int edad;
 
    cout << "\nIngresa tu nombre: "; cin >> nombre;
    cout << "\nIngresa tu edad: "; cin >> edad;
    cout << "\nIngresa tu grupo: "; cin >> grupo;
 
    cout << "\nTu nombre es: " << nombre << endl;
    cout << "\nTu edad es: " << edad << endl;
    cout << "\nTu grupo es: " << grupo << endl;
 
    return 0;
}