#include<iostream>
using namespace std;
class n1
{
	public:
	int c;
	void add(int a,int b)
	{
		c=a+b;
		cout<<"Addition of Result is :"<<c<<endl;
	}
};
class n2:virtual public n1
{
};
class n3:virtual public n1
{
};
class n4:virtual public n2,n3
{
};
int main()
{
n4 r1;
r1.add(10,20);
}
