#include <iostream>
#include <string>
using namespace std;
using namespace std::string_literals;






int main()
{
    string s;
    string h = "hola";
    string j("amigos");
    string k{"javeros"};
    string m =string {"helllo"};
    auto n = string {"friends"};
    auto p = "hello"s;

    h+="s";
    cout<<h<<"\n";
    size_t len = h.length(); //sacr posicision de una cadena
    h[0] ='r';

    for (auto i = 0U; i < len+20000; i++)
    {
        //cout<<h[i]<<"\n";
        //cout<<h.at(i)<<"\n"; //comparacion 10 veces
        cout<<h[i]<<"\n";//utilizar operador []



    }

    for (char k : h)
    {
        cout<<k<<"\n";
    }
    
    


    //cout<<p<<"\n";
}