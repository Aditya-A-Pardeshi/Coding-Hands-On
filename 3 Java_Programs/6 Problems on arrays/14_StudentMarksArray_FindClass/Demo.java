/*
Write java program which accept marks of N students from user
and display class of each student.
Less than 35 - Fail
Less than 50 - Pass class
Less than 60 - Second class
Less than 70 - First class
Greater than 70 - First class with Distinction
Input : 67.3 45.8 88.9 77.5 55.2
Output : 67.3 First class
45.8 Pass class
88.9 First class with Distinction
77.5 First class with Distinction
55.2 Second class
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void displayStudentClass(float crr[])
	{
		for(int i = 0;i<crr.length;i++)
		{
			if (crr[i] < 35)
			{
				System.out.println(crr[i]+" Fail");
			}
			else if ((crr[i] >= 35) & (crr[i] < 50))
			{
				System.out.println(crr[i]+" Pass class");
			}
			else if ((crr[i] >= 50) & (crr[i] < 60))
			{
				System.out.println(crr[i]+" Second class");
			}
			else if ((crr[i] >= 60) & (crr[i] < 70))
			{
				System.out.println(crr[i]+" First class");
			}
			else if (crr[i] >= 70)
			{
				System.out.println(crr[i]+" First class with Distinction");
			}
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept array size
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int iSize = sobj.nextInt();
		
		//Allocate memory
		float arr[] = new float[iSize];
		
		//Accept array contents
		System.out.println("Enter marks of student: ");
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.nextFloat();
		}
		
		//object of class
		Arrays aobj = new Arrays();
		
		//call function
		aobj.displayStudentClass(arr);
	}
}