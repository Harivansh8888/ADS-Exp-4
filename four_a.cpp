#include<iostream>
using namespace std;
class Student
{
	public:
		int roll;
		string name;
		string gender;
		student_Details()
		{
			cout<<"Enter Name"<<endl;
			cin>>name;
			cout<<"Enter Roll Number"<<endl;
			cin>>roll;
			cout<<"Enter Gender(M/F)"<<endl;
			cin>>gender;
		}
		display_Student_Details()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll Number: "<<roll<<endl;
			cout<<"Gender: "<<gender<<endl;
		}
};
