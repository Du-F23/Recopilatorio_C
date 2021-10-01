#include<iostream>
using namespace std;
int main(){
    float a,b, resul=0;
    cout<<"Digite el valor de a: ";
        cin>>a;
    cout<<"Digite el valor de b: ";
        cin>>b;
    resul=(a/b)+1;
    cout.precision(10);
    cout<<"\nEl resultado es: "<<resul<<endl;

    return 0;
}
