#include<iostream>
using namespace std;

class student
{
	private:
		char name[10];
		int roll_no;
		int marks[3];
                char grade;
	public:
		void input(void);
		char calc_grade(void);
		void display(void);

};

   void student::input()
   { 
	   cout<<"enter student name: ";
	   cin>>name;
	   cout<<"enter roll number: ";
	   cin>>roll_no;
	   cout<<"enter the marks in 3 subjects out of 100 : ";
	   cin>>marks[0]>>marks[1]>>marks[2];

   }

   char student::calc_grade()
   {
	   int totalmarks;
	   float pctg;
	   totalmarks=marks[0]+marks[1]+marks[2];
	   pctg=totalmarks/3;

	   if (pctg>=90)
		grade='A';  
	   else if(pctg>=80)
		grade='B';
	   else if(pctg>=70)
		grade='c';   
           else if(pctg>=60)
		grade='D';
           else
	        grade='E';
      return grade ;
   }

   void student::display()
   {
     cout<<"Name of student: "<<name<<"\n";
     cout<<"Roll no : "<<roll_no<<"\n";
     cout<<"Marks: "<<marks[0]<<","<<marks[1]<<","<<marks[2]<<"\n";
     cout<<"Grade: "<<grade;
   }

int main()
{
	student st1;
	st1.input();
	st1.calc_grade();
	st1.display();

	return 0;
}





