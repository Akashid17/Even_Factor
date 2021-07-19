/*
Write a program which accept number from user and print even factors of that
number.
*/

#include<stdio.h>

void EvenFact(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iCnt = 1;

	for(int i = 2; i <= iNo/2; i++)
	{
		if(i%2 == 0 && iNo%i == 0)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	EvenFact(iValue);

	return 0;
}