#include <iostream>

using namespace std;



void mostrar(const char** array ,size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout<<array[i]<<"\n";
    }
    
}



int main()
{
    const char* dias[]={"lunes","martes","miercoles","viernes","sabado","domingo"};
    mostrar(dias,7);
}