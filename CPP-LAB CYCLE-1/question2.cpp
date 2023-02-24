#include<iostream>
#include<cmath>
using namespace std;

//area of square

float area(int side)
	{
 		return side*side;	
	}

//area of rectangle
float area(int side1,int side2)
	{
		return  side1*side2;
	}

//area of circle

float area(float radius)
	{	
		return  (radius*radius)*3.14;
	}

//area of triangle

float area(int side1,int side2,int side3)
	{
		int s;
		s=side1+side2+side3;
		return sqrt(s*(s-side1)*(s-side2)*(s-side3));
	}

//area of trapezium

float area(int lwrside,int upside,float height)
	{
		return .5*(lwrside+upside)*height;
	}

int main()
{
  int side,side1,side2,side3,lwrside,upside;
  float radius,height;
  cout<<"**Area of square**"<<"\n";
  cout<<" enter the side of square: "<<"\n";
  cin>>side;
  cout<<" Area of square  = "<<area(side)<<"\n";

  cout<<" **Area of rectangle**"<<"\n";
  cout<<" enter the sides of rectangle: "<<"\n";
  cin>>side1>>side2;
  cout<<" Area of rectangle : "<<area(side1,side2)<<"\n";

  cout<<" **Area of circle**"<<"\n";
  cout<<" enter the radius of circle:"<<"\n";
  cin>>radius;
  cout<<" Area of the circle = "<<area(radius)<<"\n";

  cout<<" ** Area of triangle**"<<"\n";
  cout<<" enter the three sides of triangle: "<<"\n";
  cin>>side1>>side2>>side3;
  cout<<" Area of triangle = "<<area(side1,side2,side3)<<"\n";

  cout<<" **Area of trapezium**"<<"\n";
  cout<<" enter the lowerside and uper side:"<<"\n";
  cin>>lwrside>>upside;
  cout<<" enter the height of trapezium:"<<"\n";
  cout<<" Area of trapezium = "<<area(lwrside,upside,height)<<"\n";

  return 0;
}





	
	 
  	
