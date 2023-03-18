#include<iostream>
using namespace std;

class Employee
{
public:
int eid;
static int odc;
void show()
{
cout<<eid<<" "<<odc<<endl;
}

};
int Employee :: odc=0;
int main()
{

Employee e1;
Employee e2;
e1.eid =101;
Employee :: odc=4;

e2.eid = 201;

e1.show();
e2.show();


}

