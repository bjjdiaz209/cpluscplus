#include <iostream>
#include <string>
using namespace std;
//variables que refieren a un dato
//referencia siempre se inicializa con una variable
//relacion entre una referancia y el dato referenciado es de por vida
//no hay aritmetica de referencias
//no hay referencia nula
//paso de parametro por refrencia
//evitar copias innecesarias de valores
//sobrecvarga de opreadores


size_t contar(const string& s, char k)//refrencia constante
{
    size_t n=0;
    for (auto c : s)
    
        if (c==k)
        
            n++;
        
        return n;
         
}

void intercambair(int a,int b)
{
    int aux =a;
    a=b;
    b=aux;
}

size_t contar(const string& s, size_t pos,const char k)
{
    if (pos==s.length())
    {
        return 0;
    }
    
    return (k==s[pos]+contar(s,pos+1,k));
}

int main()
 {
//     auto c = contar("hoy es dia interesante",'e');

//     auto d = "noche de sanjuan en el monte calvo"s;

//     auto e = contar(d, 'o');

//     cout<<c<<"\n";

//     cout<<e<<"\n";
//     cout<<c<<"\n";

    int x=8;
    int y = 0;
    intercambair(x,y);
    cout<<x<<"\n";

    //tarea

    string s = "erase un hidalgo caballero"
    invertir(s);
    cout<<s<<"\n";
    string ns = a_string(-12345678)

    cout<<ns<<"\n";

}




