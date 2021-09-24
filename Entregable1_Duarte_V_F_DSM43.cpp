#include <iostream>
using namespace std;
float calculaBonificacion(int sueldo, char categoria, char condicion);
float calculaDescuento(int sueldoMasBonificacion, char condicion);

int main() {
   float sueldo;
   float bonificacion;
   float sueldoBruto;
   float descuento;
   float sueldoNeto;
   char categoria;
   char condicion;
   
  cout << "Ingrese su sueldo:" <<endl;
   cin >> sueldo;
   
   cout << endl << "Ingrese su categoría (A,B,C o D):" << endl;
   cin >> categoria;
   
   cout << endl << "Ingrese su condición (E o N):" << endl;
   cin >> condicion;
   
   bonificacion = calculaBonificacion(sueldo, categoria, condicion);
   sueldoBruto = sueldo + bonificacion;
   descuento = calculaDescuento(sueldoBruto, condicion);
   sueldoNeto = sueldoBruto - descuento;
   
   cout << endl << "El sueldo bruto es: " << sueldoBruto;
   cout << endl << "El sueldo neto es: " << sueldoNeto;
   
   
   return 0;
}

float calculaBonificacion(int sueldo, char categoria, char condicion) {
   float bonificacion = 0;
   
   switch (categoria) {
      case 'A':
         bonificacion = condicion == 'E' ? sueldo * 0.20 : sueldo * 0.17;
         break;
         
      case 'B':
         bonificacion = condicion == 'E' ? sueldo * 0.18 : sueldo * 0.15;
         break;
         
      case 'C':
         bonificacion = condicion == 'E' ? sueldo * 0.15 : sueldo * 0.14;
         break;
         
      case 'D':
         bonificacion = condicion == 'E' ? sueldo * 0.12 : sueldo * 0.10;
         break;
         
   }
   
   return bonificacion;
}

float calculaDescuento(int sueldoMasBonificacion, char condicion) {
   return condicion == 'E' ? sueldoMasBonificacion * 0.06 : sueldoMasBonificacion * 0.04;
}
