#include<iostream>
using namespace std;

 class a
 {
     public:
     void show()
     {
         cout<<"hii i am class a"<<endl;
         
     }
 };
 class b : public a
 {
     public:
     void show()
     {
         cout<<"hii i am class b"<<endl;
         
     }
 };

int main()
{
	 a ob;
	 b ob2;
	
	 ob2.show();

};


