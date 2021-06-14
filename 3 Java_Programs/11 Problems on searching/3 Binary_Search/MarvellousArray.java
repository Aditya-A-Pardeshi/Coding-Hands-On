/*

*/
package Marvellous;
import java.lang.*;
import java.util.*;

public class MarvellousArray
{
	//characteristic
	public int arr[];
	
	//parameterised constructor
	public MarvellousArray(int iSize)
	{
		//dynamic memory allocation
		arr = new int[iSize];
	}
	
	//Behaviour
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the elements: ");
		for(int i=0;i<arr.length;i++)
		{
			arr[i] = sobj.nextInt();
		}
	}
	
	//Behaviour
	public void Display()
	{
		System.out.println("Entered elements are:");
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
}