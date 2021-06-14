/*
Write a program which accept matrix and display addition of elements from each row and column
Input : 
3 2 5 9
4 3 2 2 
8 4 1 5
3 9 7 5
Output:  19 11 18 24
Output : 18 18 15 25
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void AddColumn(int a[][])
	{
		//Calculates number of rows and columns present in given matrix    
        int rows = a.length;    
        int cols = a[0].length;    
            
        //Calculates sum of each row of given matrix    
        for(int i = 0; i < rows; i++)
		{    
            int sumRow = 0;    
            for(int j = 0; j < cols; j++)
			{    
              sumRow = sumRow + a[i][j];    
            }    
            System.out.println("Sum of " + (i+1) +" row: " + sumRow);    
        }    
            
        //Calculates sum of each column of given matrix    
        for(int i = 0; i < cols; i++)
		{    
            int sumCol = 0;    
            for(int j = 0; j < rows; j++)
			{    
              sumCol = sumCol + a[j][i];    
            }    
            System.out.println("Sum of " + (i+1) +" column: " + sumCol);    
        }  
    }    
	
}

class Demo
{
	public static void main(String args[])
	{
		//Accept value of row and column from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns: ");
		int iCol = sobj.nextInt();
		
		//allocate memory for array of specified size
		int arr[][] = new int[iRow][iCol];
		
		//Accept elements
		System.out.println("Enter the matrix elements: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.println("Enter element: "+(i+1)+(j+1));
				arr[i][j] = sobj.nextInt();
			}
		}
		
		//Display entered matrix
		System.out.println("Entered matrix is: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		//object of class
		Arrays aobj = new Arrays();
		//call to function
		aobj.AddColumn(arr);
	}
}