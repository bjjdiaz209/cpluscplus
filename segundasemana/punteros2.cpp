//arrays en c 
//array tiene el contenido 
//
#include<iostream>
using namespace std;

void mostrar(int* e,size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
    //cout<<e[i]<<"\n";
    cout<<*e++<<"\n";

        
    }
    
}

int main()
{
    int e[]={6,8,5,4,3,9,10};
    int* f =e;

    cout<<e[0]<<"\n";
    cout<<*f<<"\n";

    mostrar(e,7);

}