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
	friend  n1 operator+(n1,n1);
	
	void display()
	{
		cout<<a<<""<<"+"<<"i"<<b<<endl;
	}
	
};
n1 operator+(n1 u1,n1 u2)
	{
		n1 temp;
		temp.a=u1.a +u2.a;
		temp.b=u1.b+u2.b;
		return temp;
	}

int main()
{
	n1 A,B,C;
	A.i1(10,20);
	B.i1(30,40);
	C=A+B;  // A.operator + B 
	C.display();
}

