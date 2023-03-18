#include<iostream>
using namespace std;

//  hybrid inheritance

class A
{
    public:
    void show()
    {
        cout<<"showing A"<<endl;
    }
    
};
class B : virtual public A
{
    
};

class C :virtual public A
{
    
};

class D : public B , public C
{
    
};

int main()
{
	 D ob;
	 ob.show();
}
