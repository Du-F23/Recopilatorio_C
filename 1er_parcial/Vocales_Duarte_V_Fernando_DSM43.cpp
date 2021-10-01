/*Construya un programa que identifique si una letra es una vocal.*/ 
#include <iostream>
using namespace std;
int main (){
char vocal;
cout <<"Digite una letra: ";
cin >> vocal;

switch (vocal)
{
case 'a':
cout<<"Haz escojido la vocal a";
    break;

case 'e':
cout<<"Haz escojido la vocal e";
break;


case 'i':
cout<<"Haz escojido la vocal e";
break;


case 'o':
cout<<"Haz escojido la vocal e";
break;


case 'u':
cout<<"Haz escojido la vocal e";
break;


default:
cout<<"Esta letra no es una vocal";
    break;
}

return 0;
}