#include<iostream>
using namespace std;
class n1
{
public:
int a;
int add(int a1,int b1)
{
a=a1+b1;
return a;
}
};
class n2:public n1
{
public:
int r1;
int check(int a1,int b1)
{
r1=add(a1,b1);
if(r1%2==0)
{
	return 2;
}
else
{
	return 1;
}
}
};
class n3:public n1
{
public:
int d;
int scalable(int a1,int b1)
{
d=add(a1,b1);
if(d>10)
{
	return d;
}
else
{
return d*2;
}
}
};
class n4:public n2,n3
{
public:
int d1,d2;
void display(int a1,int b1)
{
	d1=scalable(a1,b1);
	d2=check(a1,b1);
	cout<<"The Scalable Result is:"<<d1<<endl;
	if(d2==2)
	{
	cout<<"The Result Is :Even"<<endl;
	}
	else
	{
		cout<<"The Result is : Odd"<<endl;
	}
}
};
int main()
{
n4 g1;
g1.display(5,2);
}

