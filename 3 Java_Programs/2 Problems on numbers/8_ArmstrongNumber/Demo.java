/*
Accept number from user and check if it is armstrong number or not
Input: 153
Output: True (1^3+5^3+3^3 = 153)
Input: 2145
Output: False (2^4+1^4+4^4+5^4 != 2145)
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	int countDigit(int iNum)
	{
		int iCnt = 0;
		while(iNum != 0)
		{
			iCnt++;
			iNum = iNum/10;
		}
		return iCnt;
	}
	
	int Power(int iNum, int iExp)
	{
		int iAns = 1;
		for(int i = 0;i<iExp;i++)
		{
			iAns = iAns*iNum;
		}
		return iAns;
	}
	
	boolean Armstrong(int iNum)
	{
		int iCnt = 0;
		int iSum = 0;
		int temp = 0;
		boolean bAns = false;
		
		iCnt = countDigit(iNum);
		temp = iNum;
		while(temp != 0)
		{
			iSum = iSum + Power((temp%10),iCnt);
			if(iSum>iNum)
			{
				bAns = false;
				break;
			}
			temp = temp/10;
		}
		
		if(iSum == iNum)
		{
			bAns = true;
		}
		return bAns;
	}	
}

class Demo
{
	public static void main(String args[])
	{
		int iNo = 0;
		boolean bRet = false;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number:");
		iNo = sobj.nextInt();
		
		Numbers nobj = new Numbers();
		bRet = nobj.Armstrong(iNo);
		System.out.println(bRet);
	}
}