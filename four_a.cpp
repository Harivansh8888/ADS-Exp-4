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
class Internal_Exam:public virtual Student
{
	public:
		int internal_eng,internal_math,internal_phys,internal_chem,internal_ped,internal_comp;
		get_internal_marks()
		{
			cout<<"//ENTER ALL MARKS OUT OF 100//"<<endl;
			cout<<endl;
			cout<<"Enter Internal Marks for English:"<<endl;
			cin>>internal_eng;
			cout<<"Enter Internal Marks for Mathematics:"<<endl;
			cin>>internal_math;
			cout<<"Enter Internal Marks for Physics:"<<endl;
			cin>>internal_phys;
			cout<<"Enter Internal Marks for Chemistry:"<<endl;
			cin>>internal_chem;
			cout<<"Enter Internal Marks for Physical Education:"<<endl;
			cin>>internal_ped;
			cout<<"Enter Internal Marks for Computers:"<<endl;
			cin>>internal_comp;
		}
		display_internal_marks()
		{
			cout<<"Internal Marks are:"<<endl;
			cout<<"English: "<<internal_eng<<endl;
			cout<<"Mathematics: "<<internal_math<<endl;
			cout<<"Physics: "<<internal_phys<<endl;
			cout<<"Chemistry: "<<internal_chem<<endl;
			cout<<"Physical Education: "<<internal_ped<<endl;
			cout<<"Computers: "<<internal_comp<<endl;
		}

};
