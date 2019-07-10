//clases 
//define un tipo de dato nuevo
//es una receta para favricar objetos
//objeto es una instancia de la clase
//ain conjuntoi de atributos con valores concretos
//un conjunto de metodos que actuan sobre los atributos

#include <iostream>
using namespace std;
class point
{
  
    int x;
    int y;
public:
    void show()const //no va modificar la estructura del objeto
    {
     cout<<x<<";"<<y<<"\n";

    }
    point(int x,int y):x{x},y{y}
    {
        // this->x=x;
        // this->y=y;
    }

    point():point(0,0)
    {}

    int get_x()const
    {
        return x;
    }

};
// void show (const point& x)
// {
//     cout<<x.x<<";"<<x.y<<"\n";
// }

int main()
{
    point a {25,40};
    // a.x =25;
    // a.y=40;

    point b {14,48};

    a.show();
    b.show();
    
    
    
    point c;
    c.show();
     
     auto x = b.get_x();
     cout<<x<<"\n";

}