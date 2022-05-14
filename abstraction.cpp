#include<iostream>
using namespace std;
class n1
{
public:
virtual void add(int a,int b)=0;
};
class n2:public n1
{
public:
int c;
void add(int a,int b)
{
c=a+b;
cout<<"Result Of Addition :"<<c<<endl;
}
};
int main()
{
n2 n3;
n3.add(10,20);
}
