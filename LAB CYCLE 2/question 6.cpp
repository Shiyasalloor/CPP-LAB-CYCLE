#include<iostream>
using namespace std;

class student
{
    protected:
            int roll_no;
    public:
            void getRollNo()
            {
                cout<<"Enter the roll number of the student : ";
                cin>>roll_no;
            }
};

class test:public student
{
    protected:
            int marks[3];
    public:
            void getMarks()
            {
                cout<<"enter the marks in three subjects(out of 100) : ";
                cin>>marks[0]>>marks[1]>>marks[2];
            }
};

class sports
{
    protected:
            int score;
    public:
            void getScore()
            {
                cout<<"Enter the score in the sports (out of 100) : ";
                cin>>score;
            }
};

class result:public sports , public test
{
    protected:
            int total;
    public:
            void display()
        {
            cout<<"####*** RESULT ***####"<<endl;
            cout<<"Roll number of the student : "<<roll_no<<endl;
            cout<<"subject wise marks : "<<endl;
            cout<<"subject 1 : "<<marks[0]<<" , subject 2 : "<<marks[1]<<" , subject 3 : "<<marks[2]<<endl;
            cout<<"mark in sports : "<<score<<endl;
            total=marks[0]+marks[1]+marks[2]+total;
            cout<<"Total mark of the student : "<<total<<endl;
            if(total>200)
            {
                cout<<"Status of the student : PASS"<<endl;
            }
            else
            {
                cout<<"Status of the student : FAIL"<<endl;
            }
        }
};

int main()
{
    result st1;
    st1.getRollNo();
    st1.getMarks();
    st1.getScore();
    st1.display();
    return 0;
}





