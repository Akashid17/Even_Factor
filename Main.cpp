/*
Write a program which accept number from user and print even factors of that
number.
*/

#include <iostream>

using namespace std;

class ArithmeticX
{
public:
	void EvenFact(int);
};

void ArithmeticX::EvenFact(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(int i = 1; i <= iNo/2; i++)
	{
		if(i%2 == 0 && iNo%i == 0)
		{
			cout<<i<<"\t";
		}
	}
	cout<<endl;
}

int main()
{
	int iValue = 0;

	cout<<"Enter Number"<<endl;
	cin>>iValue;

	ArithmeticX aobj;

	aobj.EvenFact(iValue);

	return 0;
}