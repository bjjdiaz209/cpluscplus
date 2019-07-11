//puntero es una variabke 
//almacena una direccon de memoria
//contiene el tipo de dato  que hay en una direccion de memoria
//dangling pointer
//un puntero sin indicador
//un valor arbitrario
//apuntador a memoria "desllacetd"
#include<iostream>
using namespace std;









int main()
{
    int z = 648;
    int* pz = &z;

    cout<<pz<<"\n";
    cout<<*pz<<"\n";

    int* q = nullptr;//imprimir ) si apunat a q 
    cout<<q<<"\n";   
    //cout<<*q<<"\n";

    int* r = (int*)0xCAFECAFE;
    cout<<r<<"\n";
    cout<<*r<<"\n";

}