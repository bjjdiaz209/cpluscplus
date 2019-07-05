#include <iostream>

using namespace std;
//paso de parametro por valor
size_t get_dias(size_t m)

{
    size_t r =0;
    switch (m)
    {
    case 1:
        r = 31;
        break;
    case 2:
        r = 28;
        break;
    case 6:
        r = 30;
        break;

    case 7:
        r = 31;
        break;
    
    }

}



int main()
{
    size_t mes =6 ;
    size_t dias =get_dias(mes);
    cout<<dias<<"\n";
}