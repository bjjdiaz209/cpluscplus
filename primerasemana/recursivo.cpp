#include <iostream>

using namespace std;


void print( int n)
{
    cout<<"hola\n";
    print(n-1);
}
int main()
{
    print(10);
    return 0;
}