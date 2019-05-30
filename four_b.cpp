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
