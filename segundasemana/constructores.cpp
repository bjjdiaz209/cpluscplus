
#include <iostream>
#include <string>
using namespace std;


class product
{

    size_t id;
    string brand;
    string model;
public:
    product(size_t id,const string& b,const string& m)
    :id{id},brand{b},model{m}
    {
        cout<<"producto created"<<"\n";
    }
    ~product()
    {
        cout<<"chau"<<"\n";
    }


    void show()const
    {
        cout<<"("<<id<<")"<<brand<<model<<"\n";
    }

    product&  operator=(const product& p) //void
    {
       cout<<"product=\n";
       if(this == &p)
       return *this;////
       this->~product();
       id = p.id;
       brand = p.brand;
       model = p.model;
       return *this;//////
    }


    product(const product& src)
    :id{src.id},brand{src.brand},model{src.model+ "(copy)"}
    
{
    cout<<"pructo copia"<<"\n";
}

};





int main()
{
    product p {1,"nintendo","swtich"};//iniforme inicializacion
    product q {2,"sony","ps4"};
    p.show();
    product r =p;//copias

    r.show();

    r= q;//sino escribo asgnacion , el compilador escribe la signaicon
    r.show();


    
}