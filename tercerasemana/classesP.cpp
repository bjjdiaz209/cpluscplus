#include <iostream>
#include <cstring>

using namespace std;


class point
{
   public:
   int x,y;

   void show()const
   {
       cout<<"("<<x<<";"<<y<<")\n";
   }
   ~point()
   {
      cout<<"adios mundo cruel"<<"\n";
   }
};



int main()
{
    point p {6,8};

    auto q = new point{6,8};
    p.show();
    (*q).show();
    q->show();

    delete q;
}