/*
Accept number from user and display number of elements from fabonacci series till that number
Input: 40
Output: 0 1 1 2 3 5 8 13 21 34
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	void FibSeries(int iNum)
	{
		int first = 0;
		int second = 1;
		int third = 0;
		
		while(first<iNum)
		{
			System.out.print(first+" ");
			third = first+second;
			first = second;
			second = third;
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iNo = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter length of series:");
		iNo = sobj.nextInt();
		
		Numbers nobj = new Numbers();
		nobj.FibSeries(iNo);
	}
}