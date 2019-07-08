#include <iostream>
#include <string>
using namespace std;

size_t contar(const char* t){
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
}

auto contar(string s,char k)
{
    
}




int main()
{
    auto c = contar("hoy es dia interesante",'e');

    auto d = "noche de sanjuan en el monte calvo"s;

    auto e = contar(d, 'o');

    cout<<c<<"\n";

    cout<<e<<"\n";



    cout<<c<<"\n";
}