#include <iostream>

using namespace std;
 bool get_name(int a , const char** msg)
 {
     switch (a)
     {
     case 5:
         *msg = "cinco";
         return true;
         break;
     case 2:
         *msg = "dos";
         return true;
         break;
     default:
         break;
     }
 }


int main()
{
    const char* msg;
    bool r = get_name(5,&msg);
    if(r)
    cout<<msg<<"\n";
}