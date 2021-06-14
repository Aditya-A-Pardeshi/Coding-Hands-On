/*
Write a program which accept number from user and return
multiplication of all digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864 
*/

import java.lang.*;
import java.util.*;

class Digits
{
	int multiplyDigits(int iNo)
	{
		int iAns = 1;
		int iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if(iDigit != 0)
			{
				iAns = iAns * iDigit;
			}
			iNo = iNo/10;
		}
		return iAns;
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iNum = 0;
		int iProduct = 0;
		
		//Accept Number from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number:");
		iNum = sobj.nextInt();
		
		//object of Digits class
		Digits dobj = new Digits();
		//call to function
		iProduct = dobj.multiplyDigits(iNum);
		//Display return value
		System.out.println("Product of digits: "+iProduct);
	}
}