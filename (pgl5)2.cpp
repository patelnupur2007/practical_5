#include<iostream>
using namespace std;
class person
{
	public:
		void display1()
		{
			cout<<"Person class"<<endl;
		}
};
class student:public person
{
	public:
		void display2()
		{
			cout<<"Student class"<<endl;
		}
};
class ITstudent:public student
{
	public:
		void display3()
		{
			cout<<"ITstudent class"<<endl;
		}
};
int main()
{
	person p;
	student s;
	ITstudent i;
	p.display1();
	s.display2();
	s.display1();
	i.display3();
	i.display2();
	i.display1();
	return 0;
}
