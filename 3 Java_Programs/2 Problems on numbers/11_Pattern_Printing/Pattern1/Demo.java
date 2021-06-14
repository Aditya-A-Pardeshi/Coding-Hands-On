/*
Write program to display below pattern
& * * * * *
* & 1 2 3 *
* A & 4 5 *
* B C & 6 *
* D E F & *
* * * * * &
*/


import java.lang.*;
import java.util.*;

class Pattern
{
	void Display(int row,int col)
	{
		//Filter for incorrect values for row and col
		if(row != col)
		{
			return;
		}
		
		//Updater for negative row and col
		if(row<0)
		{
			row = -1;
		}
		if(col<0)
		{
			col = -col;
		}
		
		int i = 0;
		int j = 0;
		int iNo = 1;
		char ch = 'A';
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=col;j++)
			{
				if(i==j)
				{
					System.out.print("& ");
				}
				else if((j==1)||(j==col)||(i==1)||(i==row))
				{
					System.out.print("* ");
				}
				else if(j>i)
				{
					System.out.print(iNo+" ");
					iNo++;
				}
				else if(j<i)
				{
					System.out.print(ch+" ");
					ch++;
				}
			}
			System.out.println();
		}
	}
	
}

class Demo
{
	public static void main(String args[])
	{
	Scanner sobj = new Scanner(System.in);
	int row = 0;
	int col = 0;
	
	System.out.println("Enter row:");
	row = sobj.nextInt();
	System.out.println("Enter col:");
	col = sobj.nextInt();

	Pattern pobj = new Pattern();
	pobj.Display(row,col);
	}
}