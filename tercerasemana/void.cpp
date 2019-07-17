//void* 
//un puntero a una direccionde memoria
//void descubre el tipo de dto al que se esta apuntando
//no permite aplixar el opreador asteristco
//no tiene aritmetica de puteros
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    int q = 4;
    auto r=  "hola";
    const void* store[2];
    store[0]= &q;
    store[1] = r;
     
     cout<<store[0]<<"\n";
     cout<<store[1]<<"\n";


    cout<<*((int*)store[0])<<"\n";
    cout<<((char*)store[1])<<"\n";


}