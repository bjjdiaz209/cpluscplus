#include <iostream>
#include <cstring>

using namespace std;






int main()
{
    int** m= new int*[3];
     m[0] = new int [4];
     m[0] = new int [3];
     m[0] = new int [4];
      

      m[0][0]=1;
      m[0][1]=4;
      m[0][2]=8;
      m[0][3]=9;
      m[1][0]=2;
      m[1][1]=3;
      m[1][2]=5;
      m[2][0]=4;
      m[2][1]=9;
      m[2][2]=6;
      m[2][3]=6;
      
   for (size_t i = 0; i < 3; i++)
   {
       delete[]m[i];
       delete []m;
       m =nullptr;
       delete[]m;
   }
   

}