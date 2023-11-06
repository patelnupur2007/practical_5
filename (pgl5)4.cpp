#include<iostream>
using namespace std;
class A1
{
	public:
		A1()
		{
			cout<<"Constructor of the base class A1\n";
		}
};
class A2
{
	public:
		A2()
		{
			cout<<"Constructor of the base class A2\n";
		}
};
class s:public A1,public A2
{
	public:
		s():A1(),A2()
		{
			cout<<"Constructor of the derived Class s\n";
		}
};
int main()
{
	s obj;
	return 0;
}
