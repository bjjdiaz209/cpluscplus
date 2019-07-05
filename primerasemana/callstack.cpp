#include <iostream>

using namespace std;

int suma (int ,int);


int main()
{
    int a= 6 ,b=5;
    int c = suma(a,b);
    cout<<c<<"\n";
}
 
int suma(int x , int y)
{
        int z = x+y;
        return z;
}
