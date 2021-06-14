/*
Write a program which accept number from user and return
difference between summation of even digits and summation of odd
digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/

import java.lang.*;
import java.util.*;

class Digits
{
	int findSum(int iNo)
	{
		int iEvenSum = 0;
		int iOddSum = 0;
		int iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if(iDigit%2 == 0)
			{
				iEvenSum = iEvenSum + iDigit;
			}
			else
			{
				iOddSum = iOddSum + iDigit;
			}
			iNo = iNo/10;
		}
		return (iEvenSum - iOddSum);
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iNum = 0;
		int iResult = 0;
		
		//Accept Number from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number:");
		iNum = sobj.nextInt();
		
		//object of Digits class
		Digits dobj = new Digits();
		//call to function
		iResult = dobj.findSum(iNum);
		//Display return value
		System.out.println("Difference between sum of even and odd of digits: "+iResult);
	}
}