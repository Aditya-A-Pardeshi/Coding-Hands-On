/*
Write a program that calculates even factorial number
eg: Input:7
Output: 2*4*6
Input: 8
Output: 2*4*6*8
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	int evenFactorial(int iNo)
	{
		int iFact = 1;
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		for(int i=2;i<=iNo;i+=2)
		{
			iFact = iFact*i;
		}
		return iFact;
	}
}


class Demo
{
	public static void main(String args[])
	{
		int iNum = 0;
		int iFact = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number: ");
		iNum = sobj.nextInt();
		
		Numbers nobj = new Numbers();
		iFact = nobj.evenFactorial(iNum);
		
		System.out.println("Even factorial is "+iFact);
	}
}
