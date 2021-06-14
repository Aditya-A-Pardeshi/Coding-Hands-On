/*
Accept number from user and return its generic root
Input:789
Output:7+8+9 = 24 ->2+4 = 6
Input:9948
Output: 9+9+4+8 = 30 -> 3+0 = 3
*/

import java.lang.*;
import java.util.*;

class Digits
{
	int GenericRoot(int iNum)
	{
		//Updater to handle negative input
		if(iNum<0)
		{
			iNum = -iNum;
		}
		int iSum = 0;
		while(iNum>9)
		{
			iSum = 0;
			while(iNum != 0)
			{
				iSum = iSum+iNum%10;
				iNum = iNum/10;
			}
			iNum = iSum;
		}
		return iNum;
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iNum = 0;
		int iRet = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number: ");
		iNum = sobj.nextInt();
		
		Digits dobj = new Digits();
		iRet = dobj.GenericRoot(iNum);
		System.out.println(iRet);
	}
}