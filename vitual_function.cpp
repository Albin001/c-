#include<iostream>
using namespace std;
class n1
{
public:
virtual void display()
{
	cout<<"Base class"<<endl;
}
virtual void sample()
{
	cout<<" Sample class"<<endl;
}
};
class n2:public n1
{
public:
void display()
{
	cout<<"Derived  class"<<endl;
}
void sample()
{
	cout<<"Derived Sample"<<endl;
}
};
int main()
{
	n1 *ptr;
	n2 n3;
	ptr=&n3;
	ptr->display();
	ptr->sample();
}
