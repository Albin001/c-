#include<iostream>
using namespace std;
class n1
{
public:
int c;
void add(int a,int b)
{
	c=a+b;
	cout<<"The Addition Of Result is :"<<c<<endl;
}
};
class n2:public n1
{
	public:
	int d1;
	void add(int b,float a)
	{
		d1=a+b;
		if(d1%2==0)
		{
		cout<<"The Addition Result  "<<d1<<" "<<"is Even"<<endl;
		}
		else
		{
			cout<<"The Addition Result "<<""<<d1<<"ODD"<<endl;
		}
	}
};
int main()
{
	n2 n5;
	n5.add(10,2);
}
