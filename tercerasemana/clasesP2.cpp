#include <iostream>
#include <cstdlib>


using namespace std;



int cmpint(const void* a, const void*b)
{
    int* aa = (int*)a;
    int* bb = (int*)b;


    return *aa -*bb;

}

int main()
{
    int c[] = {8,9,2,5,4,10,1};
    qsort(c,7,sizeof(int),cmpint);


    for (auto e : c)
    {
        cout<<e<<"\n";
    }
    
}