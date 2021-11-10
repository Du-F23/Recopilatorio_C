#include <iostream>
using namespace std;

char caracter[10];
void burbuja (int ordenacion);

int main () {
cout << "Introduzca 10 caracteres diferentes " << endl;
for (char i=0; i<10; i++) {
cout << "Introduzca la edad para la posicion " << i << ": ";
cin >> caracter[i];
}
for (char i=0; i<10; i++)
cout << caracter[i] << " ";
cout << endl;
burbuja(0);

for (int i=0; i<10; i++)
cout << caracter[i] << " ";
cout << endl;
burbuja(1);

for (int i=0; i<10; i++)
cout << caracter[i] << " ";
cout << endl;

}
void burbuja(int ordenacion){

// Ordenamos de menor a mayor, aplicando el metodo de burbuja

int pasada=0;
int aux, necesario;

do {
necesario=0;
for (int i=0; (i<(9-pasada)); i++) {

if (ordenacion == 0) {
if (caracter[i] > caracter[i+1]){
aux=caracter[i];
caracter[i]=caracter[i+1];
caracter[i+1]=aux;
necesario=1;
}
} else {
if (caracter[i] < caracter[i+1]){
aux=caracter[i];
caracter[i]=caracter[i+1];
caracter[i+1]=aux;
necesario=1;
}
}
}
pasada++;
} while (necesario);
}
