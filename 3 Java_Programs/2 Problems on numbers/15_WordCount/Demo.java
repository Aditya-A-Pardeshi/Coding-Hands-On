/*
Accept string from user and count number of spaces
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	int CountWords(String str)
	{
		//convert string to character array
		char arr[] = str.toCharArray();
		//loop counter
		int i = 0;
		//variable to count words
		int iCnt = 0;
		//variable to hold array length
		int size = arr.length;
		while(i<size)
		{
			if(arr[i]==' ')	//found space
			{
				while((i<size) && (arr[i] == ' '))	//skip all whitespaces
				{
					i++;
				}
			}
			else if((i<size) && (arr[i] != ' '))	//found non space character
			{
				//increment word count
				iCnt++;
				while((i<size) &&(arr[i] != ' '))	//skip all characters
				{
					i++;
				}
			}
		}
		return iCnt;
	}
}

class Demo
{
	public static void main(String args[])
	{
		String s1 = null;
		int count = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string:");
		s1 = sobj.nextLine();
		
		DemoString dobj = new DemoString();
		count = dobj.CountWords(s1);
		System.out.println("Number of words: "+count);
	}	
}