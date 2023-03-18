#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"Showing A"<<endl;
		}
};
class  B
{
    public:
	void show()
	{
		cout<<"Display B"<<endl;
	}
};

class C : public A,public B
{
    
};

int main()
{
	 C ob;
	 ob.B::show();
     ob.A::show();

}
