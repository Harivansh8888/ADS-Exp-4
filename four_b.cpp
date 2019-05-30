#include<iostream>
using namespace std;

class hydrogen;
class sulphur;
class oxygen
{
  private:
             int o;
    
  public:
   friend void compound(oxygen&a1,hydrogen&b1,sulphur&c1);
    oxygen(){  cout<<"Enter molecular mass of oxygen:";  cin>>o;  }
};



class hydrogen
{
  private :
              int h;

  public:
    friend void compound(oxygen&a1,hydrogen&b1,sulphur&c1);
      hydrogen(){  cout<<"Enter molecular mass of hydrogen";   cin>>h;  }

};
class sulphur
{
    public:
    int s;
   public :
     friend void compund(oxygen&a1,hydrogen&b1,sulphur&c1);
               sulphur() {  cout<<"Enter molecular mass of sulphur";   cin>>s;  }

};
void compound(oxygen&a1,hydrogen&b1,sulphur&c1)
{
 int a,b,c;
   a=2*b1.h+c1.s+4*a1.o;
   b=2*b1.h+c1.s+3*a1.o;
   c=2*b1.h+2*c1.s+3*a1.o;
  cout<<a<<endl<<b<<endl<<c;
}

