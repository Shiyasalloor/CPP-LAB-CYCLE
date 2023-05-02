#include <iostream>
using namespace std;

class Animal 
{
    public:
        virtual void speak() = 0;
        virtual void move() 
        {
            cout << "This animal is moving" << endl;
        }
};


class Cat : public Animal 
{
    public:
        void speak() 
        {
            cout << "Meow!" << endl;
        }
};


class Dog : public Animal 
{
    public:
        void speak() 
        {
            cout << "Woof!" << endl;
        }

        void move()     
        {
            cout << "This dog is running" << endl;
        }
};

int main() 
{
    int animalType;
    int ch;
    do
    {
        cout<<"1-START\n2-EXIT"<<endl;
        cin>>ch;
        if(ch==2)
        {
            cout<<"Exited succcessfully ";
            return 0;
        }
        cout << "Enter the type of animal (1 for cat, 2 for dog): ";
        cin >> animalType;
    
        Animal* animal;
    
        if (animalType == 1) 
        {
            animal = new Cat();
        } 
        else if (animalType == 2) 
        {
            animal = new Dog();
        } 
        else 
        {
            cout << "Invalid animal type" << endl;
            return 1;
        }
        animal->speak();
        animal->move();

        delete animal;

    }while(ch==1);

    
    return 0;
}
