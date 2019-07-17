//variable que a;lmacna una direccion de memoria
//apuntua una funcion
//podemos invocar ala funcion apuntada por estos punteros
//editar comprotamiento
#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int mul(int x, int y)
{
    return x*y;
}

void slow_function(void(*proc)(size_t))
{
     size_t max= 1'000'000'0000;
    
        for (size_t i = 0; i < max; i++)
        {
            if (i%(max/100)==0)
            {
                //cout<<i/(max/100)<<"\n";
                proc(i/(max/100));

            }
            
        }
        
    }
    void show_progress(size_t perc)
    {
        cout<<perc<<"%\n";
    }


using Func = int(*)(int, int);
int main()
{   

    Func f =sum;
    //auto f = sum;
    cout<<f(10,20)<<"\n";
    f=mul;
    cout<<f(10,20)<<"\n";


    slow_function(show_progress);
}