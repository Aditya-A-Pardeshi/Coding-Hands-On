/*
Write functions to accept elements of array and display array. Write these functions in package.
*/

import DemoPackage.DemoArray;
import java.lang.*;
import java.util.*;

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int iSize = sobj.nextInt();
		
		DemoArray dobj = new DemoArray(iSize);
		dobj.Accept();
		dobj.Display();
	}
}

