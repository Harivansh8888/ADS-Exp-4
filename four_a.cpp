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
class External_Exam:public virtual Student
{
	public:
		int external_eng,external_math,external_phys,external_chem,external_ped,external_comp;
		get_external_marks()
		{
			cout<<"//ENTER ALL MARKS OUT OF 100//"<<endl;
			cout<<endl;
			cout<<"Enter External Marks for English:"<<endl;
			cin>>external_eng;
			cout<<"Enter External Marks for Mathematics:"<<endl;
			cin>>external_math;
			cout<<"Enter External Marks for Physics:"<<endl;
			cin>>external_phys;
			cout<<"Enter External Marks for Chemistry:"<<endl;
			cin>>external_chem;
			cout<<"Enter External Marks for Physical Education:"<<endl;
			cin>>external_ped;
			cout<<"Enter External Marks for Computers:"<<endl;
			cin>>external_comp;
		}
		display_external_marks()
		{
			cout<<"External Marks are:"<<endl;
			cout<<"English: "<<external_eng<<endl;
			cout<<"Mathematics: "<<external_math<<endl;
			cout<<"Physics: "<<external_phys<<endl;
			cout<<"Chemistry: "<<external_chem<<endl;
			cout<<"Physical Education: "<<external_ped<<endl;
			cout<<"Computers: "<<external_comp<<endl;

		}
};
class Result:public Internal_Exam,public External_Exam
{
	public:
		show_result()
		{
		float total_eng=(0.4*internal_eng)+(0.6*external_eng);
		float total_math=(0.4*internal_math)+(0.6*external_math);
		float total_phys=(0.4*internal_phys)+(0.6*external_phys);
		float total_chem=(0.4*internal_chem)+(0.6*external_chem);
		float total_ped=(0.4*internal_ped)+(0.6*external_ped);
		float total_comp=(0.4*internal_eng)+(0.6*external_eng);
			cout<<"Total Marks are: "<<endl;
			cout<<"English-->"<<total_eng<<endl;
			cout<<"Mathematics-->"<<total_math<<endl;
			cout<<"Physics-->"<<total_phys<<endl;
			cout<<"Chemisrty-->"<<total_chem<<endl;
			cout<<"Physical Education-->"<<total_ped<<endl;
			cout<<"Computers-->"<<total_comp<<endl;
		}
};
int main()
{
	Result s1;
	s1.student_Details();
	s1.display_Student_Details();
	s1.get_internal_marks();
	s1.display_internal_marks();
	s1.get_external_marks();
	s1.display_external_marks();
	s1.show_result();
	return 0;
}
