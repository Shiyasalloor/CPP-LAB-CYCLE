#include<iostream>
#include<cmath>
class shapes
{
	protected:
		float area;
	public:
		virtual void getarea()=0;
		virtual void display()
		{
			std::cout<<"Area = "<<area<<"\n";
		}
};
class circle:public shapes
{
	private:
		int r;
		float pi=3.14;
	public:
		void getarea()
		{
			std::cout<<"Enter the radius for the circle:";
			std::cin>>r;
			area=pi*(pow(r,2));
		}
};
class square:public shapes
{
	private:
		int side;
	public:
		void getarea()
		{
			std::cout<<"Entet the value for the side of square:";
			std::cin>>side;
			area=pow(side,2);
		}
};
class ellipse:public shapes
{
	private:
		int Maxis;     //Maxis = Major axis
		int maxis;     //maxis = minor axis
		float pi=3.14;
	public:
		void getarea()
		{
			std::cout<<"Enter the Major axis:";
			std::cin>>Maxis;
			std::cout<<"Enter the minor axis:";
			std::cin>>maxis;
			area=pi*Maxis*maxis;
		}
};
class rectangle:public shapes
{
	private:
		int l;
		int b;
	public:
		void getarea()
		{
			std::cout<<"Enter the length for the Rectangle:";
			std::cin>>l;
			std::cout<<"Enter the breadth for the Rectangle:";
			std::cin>>b;
			area=l*b;
		}
};
int main()
{
	int choice;
	shapes *ptr;
	std::cout<<"### Available Shapes for finding area ###\n";
	do
	{
		std::cout<<"\nPress 1 to find the area of circle"<<std::endl;
		std::cout<<"Press 2 to find the area of square"<<std::endl;
		std::cout<<"Press 3 to find the area of ellipse"<<std::endl;
		std::cout<<"Press 4 to find the area of rectangle"<<std::endl;
		std::cout<<"Press 5 to Quit"<<std::endl;
		std::cin>>choice;
		switch(choice)
		{
			case 1:
				ptr=new circle;
				ptr->getarea();
				ptr->display();
				break;
			case 2:
				ptr=new square;
				ptr->getarea();
				ptr->display();
				break;
			case 3:
				ptr=new ellipse;
				ptr->getarea();
				ptr->display();
				break;
			case 4:
				ptr=new rectangle;
				ptr->getarea();
				ptr->display();
				break;
			case 5:
				exit (0);
			default:
				std::cout<<"Enter a correct choice"<<std::endl;
				break;
		}
	}
	while(choice!=5);
	return 0;
}	
