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
	n1 operator+(n1 u1)
	{
		n1 temp;
		temp.a=a +u1.a;
		temp.b=b+u1.b;
		return temp;
	}
	void display()
	{
		cout<<a<<""<<"+"<<"i"<<b<<endl;
	}
	
};
int main()
{
	n1 A,B,C;
	A.i1(10,20);
	B.i1(30,40);
	C=A+B;  // A.operator + B 
	C.display();
}
