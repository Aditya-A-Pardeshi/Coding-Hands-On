//Application to add two numbers

import java.lang.*;
import java.util.*;

//Arithmetic class definition
class Arithmetic
{
	int Add(int iNo1,int iNo2)
	{
		int iResult = 0;
		iResult = iNo1 + iNo2;
		return iResult;
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iNum1 = 0, iNum2 = 0, iRet = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter first number: ");
		iNum1 = sobj.nextInt();
		System.out.println("Enter second number: ");
		iNum2 = sobj.nextInt();
		
		//object of Arithmetic class
		Arithmetic aobj = new Arithmetic();
		iRet = aobj.Add(iNum1,iNum2);
		System.out.println("Addition is "+iRet);
	}
}