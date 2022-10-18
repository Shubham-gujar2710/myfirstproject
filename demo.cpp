#include<iostream>
using namespace std;
class soham
{
	int a;
	char b;
	public:
		soham(int m,char k)
		{
			this->a=m;
			this->b=k;
		}
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int main()
{
	soham A(10,'s');
	A.display();
	soham B(20,'a');
	B.display();
}