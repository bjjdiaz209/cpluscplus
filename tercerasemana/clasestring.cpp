#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class MyString
{
   char * s;//const
    size_t len;


public:
MyString(const char* p)
//:s{p},len{strlen(p)}
:len{strlen(p)}
{
    s =new char [len+1];
    memcpy(s,p,len+1);

}

MyString& operator = (const MyString& src)
{
    if(this == &src )
    return *this;

    this-> ~MyString();

    len= src.len;
    s =new char[len+1];
    memcpy(s,src.s ,len+1);
    return *this;
}
~MyString()
{
    cout<<"bye\n";
    delete []s;
}
const char* data()const
{
    return s;
}
void show()const
{
    cout<<s<<"\n";
}

MyString(const MyString& src)
:len{src.len}
{
 s= new char[len+1];
 memcpy(s,src.s,len+1);
}
};


int main()
{
    // MyString q = "hola mundo";
    // cout<<q.data()<<"\n";

   /*  char* s = new char[100];

    strcpy(s,"hola amigos como estan");
    MyString r = s;
    delete[]s;

    cout<<r.data()<<"\n";*/

   MyString a = "ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit";
    MyString b =a;
    b.show();

MyString c = "dadsda";
    MyString d = "ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas l ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas l ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas l ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas l ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas l ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas l ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas l crit ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la critayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit ayer fue aniversario de la paz mw la pelas fanbor todos es un ameme los spiderman es pesima peliculas la crit ";
     c=d;
    c.show();
    

}
