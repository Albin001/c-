#include<iostream>
using namespace std;
class n1
{
	public:
	int a;
	int add(int b, int c)
	{
		a=b+c;
		return a;
	}
};
class n2
{
public:
int d;
int sub(int b1,int b2)
{
d=b1 - b2;
return d;
}
};
class n3:public n1,n2
{
	public:
	int u1,u2;
	void display(int a,int b)
	{
		u1=add(a,b);
		cout<<"The Result Of Addition is :"<<u1<<endl;
	}
	void display1(int a,int b)
	{
		u2=sub(a,b);
		cout<<"Result Of Subtraction is :"<<u2<<endl;
	}
};

int main()
{
	n3 r1;
	r1.display(10,2);
	r1.display1(10,2);
}

