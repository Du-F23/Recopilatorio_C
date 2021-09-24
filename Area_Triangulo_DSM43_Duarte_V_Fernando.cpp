#include <iostream>
using namespace std;
int main(){
 float area, base, altura, multi;   
 cout << "Ingrese la base en cm de su triangulo: ";
 cin >> base;

cout << "Ingresa la altura en cm de su triangulo: ";
cin >> altura;

multi = (base*altura);
area = (multi/2);

cout << "EL area de su triangulo es de: " <<area;

return 0;
}
