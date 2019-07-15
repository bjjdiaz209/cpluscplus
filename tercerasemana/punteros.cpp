#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    auto a = "juli";
    const char* b = "15th";

    size_t aa = strlen(a);
    auto bb = strlen(b);

    char* s = new char[aa+bb+1];
      

      memcpy(s,a,aa);

      mempcpy(s+aa,b,bb+1);
     
    //strcpy(s,a);

    //strcat(s,b);


    cout<<s<<"\n";
}