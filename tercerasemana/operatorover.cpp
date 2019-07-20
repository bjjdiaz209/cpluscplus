#include <iostream>

using namespace std;

class Complex
{
    double r;
    double im;

    public:
    Complex(double r = 0, double im =0)
    :r{r},im {im}
    {

    }
    Complex operator+(const Complex& p)const
    {
        return {r+p.r,im+p.im};
    }

    Complex& operator=(const Complex&  result)
    {
       r += result.r;
       im+= result.im;

       return *this;
    }

       Complex operator+(double z)
        {
           cout<<"operator + alterno"<<"\n" ;
           return{r+z ,im};
       }

     
        Complex& operator++()
        {
            r+1;
            return *this;
        }

       Complex operator++(int)
       {
        auto m = *this;
        r++;
        return m;
       }

    //    bool operator==(const Complex& h)const
    //    {
    //         return r == h.r && im == h.im;
    //    }

      bool operator!=(const Complex& b)
      {
          return im != b.im;
          return !(im == b.im);
      }

      bool operator >(const Complex&)
      {
               
      }

    string to_string()const
    {
        if(r == 0 && im ==0)
            return "0";

        string result;
        if(r!=0)
        {
            result= std::to_string(r);
        }
        if (im == 0 )
        return result;
        
        bool posi = im>0;
        auto  im2 = im > 0? im : -im;

        result+=posi?"+": "-";
        
        if (im2 == 1)
        {
            result+= "i";
            return result;
        }
        result+= std::to_string(im2)+ ";";
        return result;
            
    }
    void show()const
    {
       cout<<to_string()<<"\n";
    }

};

 Complex operator+(double a ,const Complex& b)
     {
          return b+a;
     }

int main()
{
   Complex a {6,8};
 
      Complex b {6,1};
      Complex c {4,-1};
      Complex d {8,-1};
      Complex e {4,9};
      Complex f {5,8};
 
 
      a.show();
      b.show();
      c.show();
      d.show();
      e.show();
      f.show();

    // Complex x {6,5};
    // Complex y {8,2};
    // auto z = x+y;
    // z.show();
   

   //(x += y).show();

    // Complex w = x+y;
    // w.show();


   Complex g{6,4};
   (++g).show();

    auto h = g++;
    h.show();
    g.show();

    Complex x {6,8};
    Complex y {5,7};

   if(x != y  + Complex {1,1})
   {
       cout<<"igua\n";
   }

}