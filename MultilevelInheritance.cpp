#include<iostream>
using namespace std;
class n1
{
	public:
	int c;
	int add(int a ,int b)
	{
		c=a + b;
		return c;
	}
};
class n2:public n1
{
 public:
 int d;
 void check(int a1,int b1)
 {
	 d=add(a1,b1);
	 if(d%2==0)
	 {
	  cout<<"The Number Is Even "<<endl;
	 }
	 else
	 {
	   cout<<"The Number Is ODD "<<endl; 
	 }
 }
 int mult(int a,int b)
 {
	 d=a*b;
	 return d;
 }
 
};
class n4:public n2
{
public:
int e;
void scale(int a,int b)
{
e=mult(a,b);
if(e>10)
{
cout<<"Scalling Is Needed"<<endl;
}
else
{
cout<<"Scaling Is Not Needed"<<endl;
}
}
int division(int a , int b)
{
e=a/b *2;
return e;
}
};
class n6:public n4
{
public:
int e1;
void compression(int a , int b)
{
e1=division(a , b);
if(e1>10)
{
cout<<"File Is Compressed "<<endl;
}
else
{
cout<<"File Is Not Compressed"<<endl;
}
}
};
int main()
{
	n6 t1;
	t1.compression(40,10);
}
