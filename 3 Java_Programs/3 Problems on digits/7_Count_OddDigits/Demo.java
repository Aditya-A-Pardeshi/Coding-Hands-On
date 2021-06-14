/*
Write a program which accept number from user and return the
count of odd digits.
Input : 2395
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0 
*/

import java.lang.*;
import java.util.*;

class Digits
{
	int countOddDigits(int iNo)
	{
		int iOddCnt = 0;
		int iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if(iDigit%2 != 0)
			{
				iOddCnt++;
			}
			iNo = iNo/10;
		}
		return iOddCnt;
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
		iCnt = dobj.countOddDigits(iNum);
		//Display return value
		System.out.println("Count of odd digts: "+iCnt);
	}
}