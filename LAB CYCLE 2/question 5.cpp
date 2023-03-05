#include<iostream>
using namespace std;

class bike
{
    protected:
                int bike_no;
    public:
                bike(){}
                void getBikeNo(int n)
                {
                    bike_no=n;
                }
                void putBikeN0()
                {
                    cout<<"Bike Number= "<<bike_no<<endl;
                }
};

class car 
{
    protected:
            int car_no;
    public:
            car(){}
            void getCarNo( int n)
            {
                car_no=n;
            }
            void putCarNo()
            {
                cout<<"car number = "<<car_no<<endl;
            }
};

class district:public bike,public car 
{
    protected:
            int disNo;
    public:
            district(){}
            void getDisNo(int n)
            {
                disNo=n;
            }
            void details()
            {
                cout<<"bike district Number = "<<disNo<<"    bike number = "<<bike_no<<endl;
                cout<<"car district Number = "<<disNo<<"    car number = "<<car_no<<endl;
            }
};

class registration:public district
{
    public:
        registration(){}
        void Registration()
        {
            cout<<"Registration Number of the bike : KL "<<disNo<<" H "<<bike_no<<endl;
            cout<<"Registration Number of the car : KL "<<disNo<<" H "<<car_no<<endl;
        }
};

int main()
{
    registration cus1;;
    int a,b,c;
    cout<<"enter the number of the bike : ";
    cin>>a;
    cus1.getBikeNo(a);
    cus1.putBikeN0();
    cout<<"enter the car number : ";
    cin>>b;
    cus1.getCarNo(b);
    cus1.putCarNo();
    cout<<"enter the district number of the car and bike : ";
    cin>>c;
    cus1.getDisNo(c);
    cout<<"Details of the vehicles:"<<endl;
    cus1.details();
    cout<<endl;
    cout<<"**Registration number of the vehicles**"<<endl;
    cus1.Registration();
    return 0;
    
}











