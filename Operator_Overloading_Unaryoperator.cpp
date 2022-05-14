#include<iostream>
using namespace std;
class n1
{
	public:
	int a,b;
	void i1(int a1,int b1)
	{
		a=a1;
		b=b1;
	}
	void operator+()
	{
		a=a-b;
		b=a+b;
	}
	void display()
	{
		cout<<"First Parameter"<<a<<endl;
		cout<<"second Parameter"<<b<<endl;
	}
};
int main()
{
	n1 n2;
	n2.i1(10,20);
	+n2;
	n2.display();
}
