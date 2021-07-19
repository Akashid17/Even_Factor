/*
Write a program which accept number from user and print even factors of that
number.
*/

using System;

class ArithmeticX
{
	public

	void EvenFact(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		for(int i = 2; i <= iNo/2; i++)
		{
			if(i%2 == 0 && iNo%i == 0)
			{
				Console.Write(i+"\t");
			}
		}
		Console.WriteLine();
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		aobj.EvenFact(iValue);		
	}
}