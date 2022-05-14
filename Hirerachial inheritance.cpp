#include<iostream>
using namespace std;
class n1
{
public:
int c;
int add(int a,int b)
{
	c=a+b;
	return c;
}
};
class n2:public n1
{
public:
int e1;
void check(int a ,int b)
{
	e1=add(a,b);
	if(e1%2==0)
	{
		cout<<"The Number is Even"<<endl;
	}
	else
	{
		cout<<"The Number is ODD"<<endl;
	}
}
};
class n3:public n1
{
public:
int f1;
void scale(int a,int b)
{
	f1=add(a,b);
	if(f1>10)
	{
		cout<<"No Scale Is Needed "<<endl;
	}
	else
	{
	f1=f1*2;
	cout<<"Rescaled the Value"<<endl;
	cout<<"The Rescaled Value is :"<<f1<<endl;
	}
}
};
int main()
{
	n3 t1;
	t1.scale(2,4);
}
