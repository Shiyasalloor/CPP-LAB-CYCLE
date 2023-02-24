#include<iostream>
using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
		int seconds;

	public:
		Time(){}
		void get_time();
		void put_time();
		void sum(Time,Time);

};

void Time::get_time()
{
	cout<<"Enter the hours:";
	cin>>hours;
	cout<<"enter the minutes:";
	cin>>minutes;
	cout<<"Enter the seconds:";
	cin>>seconds;
}

void Time::put_time()
{
	cout<<hours<<"hours "<<minutes<<"minutes "<<seconds<<" seconds"<<"\n";
}

void Time::sum(Time t1,Time t2)
{
  seconds=t1.seconds+t2.seconds;
  minutes=seconds/60;
  seconds=seconds%60;
  minutes=minutes+t1.minutes+t2.minutes;
  hours=minutes/60;
  minutes=minutes%60;
  hours=hours+t1.hours+t2.hours;
}


int main()
{
	Time t1,t2,t3;
	t1.get_time();
	t2.get_time();
	t3.sum(t1,t2);

	t1.put_time();
	t2.put_time();
	t3.put_time();
       
	return 0;
}






































































