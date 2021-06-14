/*
Accept range from user display strong numbers in that range.
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
	void checkStrong(int iStart,int iEnd)
	{
		int iDigit = 0;
		int temp = 0;
		int iFact[] = {1,1,2,6,24,120,720,5040,40320,362880};
		//Filter for incorrect range
		if(iStart>iEnd)
		{
			return;
		}
		//Filter for negative range
		if((iStart<=0) || (iEnd<=0))
		{
			return;
		}
		
		for(int i=iStart;i<=iEnd;i++)
		{
			int iSum = 0;
			temp = i;
			while(temp != 0)
			{
				iSum = iSum + iFact[temp%10];
				temp = temp/10;
			}
			if(iSum == i)
			{
				System.out.println(i);
			}
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iStart = 0;
		int iEnd = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter start range: ");
		iStart = sobj.nextInt();
		
		System.out.println("Enter end range: ");
		iEnd = sobj.nextInt();
		
		Digits dobj = new Digits();
		dobj.checkStrong(iStart,iEnd);
	}
}