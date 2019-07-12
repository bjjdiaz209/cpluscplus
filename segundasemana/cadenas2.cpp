#include<iostream>
using namespace std;

void intercambiar(char& a, char& b)
{
    char aux = a;
    a =b;
}




size_t tamanio(const char* s)
{
    auto fin =s;
    while(*fin)
    fin++;
    return fin-s;


}
void invertir(char* s)
{
   auto len = tamanio(s);
   for (size_t i = 0; j = len-1;i<j;i++ ;j--)
   {
       intercambiar(s[i],s[j])
   }
    
}
/* *
void tamano(char* t)
{
    size_t res = 0;
    while(*t != '\0'){
        if(*t == ' '){
            res++;
            *t++;
        } else {
            *t++;
        }
    }
    res++;
    return res;

}*/
int main()
{

    char q[]="erase una hidalgo  de noble atadura";

    invertir(q);

    cout<<q<<"\n";
}