/*
Write a java program which accept number from user and return the
count of even digits.
Input : 2395
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/

import java.lang.*;
import java.util.*;

class Digits
{
	int countEvenDigits(int iNo)
	{
		int iEvenCnt = 0;
		int iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if(iDigit%2 == 0)
			{
				iEvenCnt++;
			}
			iNo = iNo/10;
		}
		return iEvenCnt;
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
		iCnt = dobj.countEvenDigits(iNum);
		//Display return value
		System.out.println("Count of even digts: "+iCnt);
	}
}