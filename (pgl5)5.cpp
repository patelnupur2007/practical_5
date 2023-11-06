#include<iostream>
using namespace std;
class Test
{
	int mark;
	float spi;
	public:
		void setdata()
		{
			this->mark=70;
			this->spi=9.11;
		}
		void displaydata()
		{
			cout<<"Mark :"<<mark<<endl;
			cout<<"Spi  :"<<spi;
		}
};
int main()
{
	Test o1;
	o1.setdata();
	o1.displaydata();
	return 0;
}

