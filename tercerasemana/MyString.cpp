#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Stringlinkedlist
{

};

class Stringlist
{
    char** strs;
    size_t len;
     size_t cap;
 
    public:
    Stringlist(size_t cap0=10)
    :strs{new char*[cap0]},len{0},cap{cap0}
    {}
    ~Stringlist()
    {
        for (auto i = 0U; i<len; i++)
        {
            delete[] strs[i];

        }
          delete[]strs;

        
    }

    
    void push_back(const char* s)
    {
        if (len == cap)
        grow(); 
        auto slen= strlen(s);
        auto ns = new char [slen+1];
        memcpy(ns,s, slen+1);
        strs[len]= ns;
        len++;

    }

    void show()const
    {
        for (auto i = 0U; i < len; i++)
        {
            cout<<strs[i]<<"\n";
        }
        
    }    
     //Stringlist(const Stringlist&)=delete;
    //  Stringlist& operator=(const Stringlist& src)
    //  {

    //  }


     size_t size()const
     {
        return len;
     }

     const char* operator[](size_t idx)const
     {
         return strs[idx];
     }

     using iterator = char**;

      iterator /* char***/ begino()const
     {
         return strs;
     }

     iterator  endo()const
    {
        return strs+len;
    }

    private:
     void grow()
     {
          auto ncap = cap*2;
          auto nstrs = new char*[ncap];
          memcpy(nstrs,strs,cap*sizeof(char*));
          delete [] strs;
          strs = nstrs;
          cap=ncap;
     }

};

Stringlist::iterator begin(const Stringlist& e)
{
    return e.begino();
}

Stringlist::iterator end(const Stringlist& e)
{
    return e.endo();
}


int main()
{
   Stringlist s;
   s.push_back("c++");
   s.push_back("c");
   s.push_back("rust");
   s.push_back("nim");
   s.push_back("kotlin");
   s.push_back("go");
   s.push_back("c#");
   s.push_back("jav");

   s.show();

   auto r = s;
   r.show();

   auto n = s.size();
   for (auto i= 0U;i<n;i++) 
   {
       cout<<s[i]<<"\n";
   }

for (auto i = s.begino(); i <s.endo(); i++)

{
      cout<<*i<<"\n";
}

for (auto w : s)
{
    cout<<w<<"\n";
}

}