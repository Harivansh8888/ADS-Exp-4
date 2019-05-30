#include<iostream>
using namespace std;

class student
{
 
 private:
    int sap,math,phy,chem,eng,ads,scm; char n[20]; 
  
  public:
   void input()
  {
  cout<<"Enter your name   :";
  cin>>n;
  cout<<"Enter your sap id :";
  cin>>sap;
  cout<<"Eneter marks out of 100";
  cout<<"\nMaths   :";
  cin>>math;
  cout<<"Physics   :";
  cin>>phy;
  cout<<"Chemistry :";
  cin>>chem;
  cout<<"English   :";
  cin>>eng;
  cout<<"ADS       :";
  cin>>ads;
  cout<<"SCM       :";
  cin>>scm;
  }
 friend class result;
};

