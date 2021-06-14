/*
Write a program which accept number from user and return the
count of digits in between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0
*/

import java.lang.*;
import java.util.*;

class Digits
{
	int countDigits(int iNo)
	{
		int iCnt = 0;
		int iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if((iDigit>3) && (iDigit<7))
			{
				iCnt++;
			}
			iNo = iNo/10;
		}
		return iCnt;
	}
}


class Demo
{
	public static void main(String args[])
	{
		int iNum = 0;
		int iCnt = 0;
		
		//Accept Number from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number:");
		iNum = sobj.nextInt();
		
		//object of Digits class
		Digits dobj = new Digits();
		//call to function
		iCnt = dobj.countDigits(iNum);
		//Display return value
		System.out.println("Count of digts between 3 anf 7 is  "+iCnt);
	}
}