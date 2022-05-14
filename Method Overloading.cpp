#include<iostream>
using namespace std;
class n1
{
	public:
	int s,s1;
	void area(int a,int b)
	{
		s=a*b;
		cout<<"The Area of Rectangle is "<<s<<endl;
	}
	void area(float c,int a,int b)
	{
		s1=c*a*b;
		cout<<"The Area Of Traingle is "<<s1<<endl;
	}
};
int main()
{
n1 t;
t.area(10,20);
t.area(0.5,10,20);
}
