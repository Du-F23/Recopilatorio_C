#include <iostream>
using namespace std;
int numeros[10];
void burbuja (int ordenacion);

int main () {
cout << "Introduzca 10 enteros... " << endl;
for (int i=0; i<10; i++) {
cout << "Introduzca el número para la posición " << i << ": ";
cin >> numeros[i];
}
for (int i=0; i<10; i++)
cout << numeros[i] << " ";
cout << endl;
burbuja(0);

for (int i=0; i<10; i++)
cout << numeros[i] << " ";
cout << endl;
burbuja(1);

for (int i=0; i<10; i++)
cout << numeros[i] << " ";
cout << endl;

}

/*
* Esta funcion ordena un array de mayor a menor o de menor a mayor en función del valor del argumento:
* 0: De menor a mayor
* 1: De mayor a menor
* 
* Cualquier otro valor asumirá una ordenación 1
*/
void burbuja(int ordenacion){

// Ordenamos de menor a mayor, aplicando el metodo de burbuja

int pasada=0;
int aux, necesario;

do {
necesario=0;
for (int i=0; (i<(9-pasada)); i++) {

if (ordenacion == 0) {
if (numeros[i] > numeros[i+1]){
aux=numeros[i];
numeros[i]=numeros[i+1];
numeros[i+1]=aux;
necesario=1;
}
} else {
if (numeros[i] < numeros[i+1]){
aux=numeros[i];
numeros[i]=numeros[i+1];
numeros[i+1]=aux;
necesario=1;
}
}
}
pasada++;
} while (necesario);


}