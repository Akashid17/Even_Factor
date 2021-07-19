/*
Write a program which accept number from user and print even factors of that
number.
*/

import java.lang.*;
import java.util.*;

class ArithmeticX
{
	void EvenFact(int iNo)
	{
		if(iNo < 0)
			iNo = -iNo;
		
		for(int i = 2; i <= iNo/2; i++)
		{
			if(i%2 == 0 && iNo%i == 0)
			{
				System.out.print(i+"\t");
			}
		}
		System.out.println();
	}
}

class Main
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number");

		int iValue = sobj.nextInt();

		ArithmeticX aobj = new ArithmeticX();
		aobj.EvenFact(iValue);
	}
}