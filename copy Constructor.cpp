#include<iostream>
using namespace std;
class n1
{
	public:
	int r1,r2,r3,r4;
	n1(int a,int b)
	{
		r1=a;
		r2=b;
	}
	n1(n1 &old)
	{
		r3=old.r1;
		r4=old.r2;
		cout<<"The First Parameter is :"<<r3<<endl;
		cout<<"The Second Parameter is :"<<r4<<endl;
		
	}
};
int main()
{
n1 h1(10,20);
n1 h2(h1);
}
