#include<iostream>
using namespace std;

class Animal
{
	public:
		void run()
		{
			cout<<"Running"<<endl;
		}
		
};
class Lion : public Animal
{
    public:
	void roar()
	{
		cout<<"Roaring"<<endl;
	}
};

class Dog : public Animal
{
    public:
    void bark(){
	cout<<"barking"<<endl;
    }
};

int main()
{
	Lion l;
	l.run();
	l.roar();
	Dog g;
	g.run();
	g.bark();
	return 0;
}
