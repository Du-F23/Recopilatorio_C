#include<iostream>
using namespace std;
int main(){
    float a,b,c,d, resul=0;
     cout<<"Digite el valor de a: ";
        cin>>a;
    cout<<"Digite el valor de b: ";
        cin>>b;
         cout<<"Digite el valor de c: ";
        cin>>c;
    cout<<"Digite el valor de d: ";
        cin>>d;
                    resul = (a+b)/(c+d);

    cout.precision(10);
    cout<<"\nEl resultado es: "<<resul<<endl;

        return 0;
}
