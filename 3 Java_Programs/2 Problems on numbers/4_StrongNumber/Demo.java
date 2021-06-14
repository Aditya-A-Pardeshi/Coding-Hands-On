/*
Accept number from user and check if it is strong number or not.
Strong number is such a number whose summation of factorial of digits is same as number
Eg
Input: 
145 - 1! + 4! + 5!
Output: True
190:1! + 9! +0!
Output: False
*/

import java.lang.*;
import java.util.*;

class Digits
{
	boolean checkStrong(int iNo)
	{
		int iDigit = 0;
		int iFact = 1;
		int iSum = 0;
		int temp = iNo;
		while(temp != 0)
		{
			iFact = 1;
			iDigit = temp%10;
			for(int i=1;i<=iDigit;i++)
			{
				iFact = iFact*i;
			}
			iSum = iSum + iFact;
			temp = temp/10;
		}
		if(iSum == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iNum = 0;
		boolean bRet = false;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number: ");
		iNum = sobj.nextInt();
		
		Digits dobj = new Digits();
		bRet = dobj.checkStrong(iNum);
		if(bRet == true)
		{
			System.out.println(iNum+" is strong");
		}
		else
		{
			System.out.println(iNum+" is not strong");
		}
	}
}