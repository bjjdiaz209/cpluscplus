#include <iostream>
using namespace std;

class person
{
    string fn;
    string ln;
    size_t ci;

    public:
    person(const string&fn,const string& ln,size_t ci)
     :fn(fn),ln(ln),ci(ci)
     {}

   void show()const
   {
       cout<<"("<<ci<<")"<<ln<<""<<fn<<"\n";
   }

   size_t get_ci()const
   {
       return ci;
   }

   const string& get_first_name()const
   {
       return fn;//devolver referencias coinstatantes no atributos primitivos 
   }
};


int main()
{
    auto p= person{"juan","array",5};
    p.show();
}