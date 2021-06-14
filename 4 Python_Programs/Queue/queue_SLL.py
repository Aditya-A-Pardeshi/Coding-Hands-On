

class node:
	def __init__(self,data):
		self.data=data
		self.next=None


class Queue:

	def __init__(self):
		print("Inside Constructor")
		self.head=None
		self.iSize=0

	def enQueue(self,iNo):

		newn=node(iNo)

		temp=self.head

		if self.head==None:
			self.head=newn
			

		else:
			while temp.next!=None:
				temp=temp.next

			temp.next=newn
		
		self.iSize=self.iSize+1

 		

	def deQueue(self):
		
		temp=None
		
		iRet=None

		if self.head==None:
			print("The Queue is empty")
			return iRet

		else:
			self.iSize=self.iSize-1

			temp=self.head
			self.head=self.head.next
			iRet=temp.data
			del temp

		return iRet
			

	def display(self):
		

		if self.head==None:
			print("The Queue is empty")

		else:
			temp=self.head

			while temp!=None:
				print(temp.data,end=" ")
				temp=temp.next


	def count(self):

		if self.head==None:
			print("The Queue is empty")

		else:
		
			return self.iSize


	def __del__(self):
		print("Inside Destructor")

		temp=None

		while self.head!=None:
			temp=self.head
			self.head=self.head.next
			del temp


def main():

	qobj=Queue()							#internally will call the constructor			

	while True:
	
		print("\n------------------------------------") 
		print("Menu-Driven Program For Queue")
		print("------------------------------------") 
		print("1.enQueue in the queue")
		print("2.deQueue in the queue")
		print("3.Display the contents in the queue")
		print("4.Count the elements in the Queue")
		print("0.Exit")
		print("------------------------------------") 
		iChoice=int(input("Please enter your choice:"))
		print("------------------------------------") 
		
	
		if iChoice==1:
			iValue=int(input("Enter the element:"))
			qobj.enQueue(iValue)

		elif iChoice==2:
			iRet=qobj.deQueue()
			print("The Dequeued element is:",iRet)

		elif iChoice==3:
			print("The Contents in the Queue are:")
			qobj.display()
		
		elif iChoice==4:
			iRet=qobj.count()
			print("The number of element in the Queue are:",iRet)

		elif iChoice==0:
			print("Thank-You for using the application")
			del qobj						#internally will cal the destructor
			break;

		else:
			print("Please enter valid option")

		
	
	


if __name__=="__main__":
	main()
	
		