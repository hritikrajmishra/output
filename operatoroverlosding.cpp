#include<iostream>
using namespace std;

class demo 
{
	private:
		int a;
		int b;
		
	 public:
	 	void setA(int x)
	 	{
	 		a=x;
		 }
		void setB(int y) 
		{
			b=y;
		}
		int getB()
		{
			return b;
		}
		void show()
		{
			cout<<"a = "<<a<<" & b = "<<b<<endl;
		}
			demo operator + (const demo & ob2);
};

demo demo :: operator + (const demo& ob2)
{
    demo temp;
    temp.a = a + ob2.a;
    temp.b = b + ob2.b;
    return temp;
    
}

int main()
{
	demo ob1;
	demo ob2;
	demo res;
	
	ob1.setA(15);
	ob1.setB(25);
	ob1.show();

	ob2.setA(12);
	ob2.setB(27);
	ob2.show();
	
	res = ob1 + ob2 ;
	res.show();

};


