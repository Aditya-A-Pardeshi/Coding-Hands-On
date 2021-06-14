
class node:
	
	def __init__(self,data):
		self.data=data
		self.next=None

class SLL:

	def __init__(self):
		self.head=None


	def Display(self):
	
		temp=self.head

	
		while temp!=None:
			print("|",temp.data,"|->",end="")
			temp=temp.next

		print("NULL")


	def Count(self):
	
		temp=self.head
		iCnt=0

		while temp!=None:
			iCnt+=1
			temp=temp.next

		return iCnt


	def InsertFirst(self,no):
	
		newn=node(no)

		if self.head==None:
			self.head=newn
		else:
			newn.next=self.head
			self.head=newn	


	def InsertLast(self,no):
			
		newn=node(no)

		temp=self.head

		if self.head==None:
			self.head=newn

		else:
		
			while temp.next!=None:			#traversal loop
				temp=temp.next
		
			temp.next=newn


	def InsertAtPosition(self,iPos,no):
		
		newn=node(no)
		temp=self.head

		iSize=0

		iSize=self.Count()

		if((iPos<1) or (iPos>iSize+1)):
			return
		
		if(iPos==1):
			self.InsertFirst(no)

		elif(iPos==iSize+1):
			self.InsertLast(no)

		else:
			for i in range(1,iPos-1):
				temp=temp.next

			newn.next=temp.next
			temp.next=newn
			
		

	def DeleteFirst(self):
	
		temp=None

		if self.head==None:
			return
		
		elif(self.head.next==None):
			del self.head
			self.head=None
		
		else:		
			temp=self.head
			self.head=self.head.next
			del temp


	def DeleteLast(self):

		temp=self.head

		if self.head==None:
			return
		
		elif(self.head.next==None):
			del self.head
			self.head=None
		
		else:
			while temp.next.next!=None:			#traversal loop
				temp=temp.next
		
			del temp.next
			temp.next=None


	def DeleteAtPosition(self,iPos):

		temp=self.head
		target=None

		iSize=self.Count()
		
		if((iPos<1) or (iPos>iSize)):
			return
		
		elif(iPos==1):
			self.DeleteFirst()

		elif(iPos==iSize):
			self.DeleteLast()

		else:

			for i in range(1,iPos-1):
				temp=temp.next

			target=temp.next

			temp.next=target.next
	
			del target
	
def main():

	obj1=SLL()

	while True:

		print("------------------------------------------")
		print("Menu-Driven Program For Singly Linked List")
		print("------------------------------------------")
		print("1.InsertFirst")
		print("2.InsertLast")
		print("3.InsertAtPosition")
		print("4.DeleteFirst")
		print("5.DeleteLast")
		print("6.DeleteAtPosition")
		print("7.Display")
		print("8.Count")
		print("0.Exit")
		print("------------------------------------------")
		iChoice=int(input("Enter Your Choice:"))
		print("------------------------------------------")
		
		if iChoice==1:
			no=int(input("Enter Data:"))
			obj1.InsertFirst(no)

		elif iChoice==2:
			no=int(input("Enter Data:"))
			obj1.InsertLast(no)

		elif iChoice==3:
			no=int(input("Enter Data:"))
			pos=int(input("Enter Position:"))
			obj1.InsertAtPosition(pos,no)

		elif iChoice==4:
			obj1.DeleteFirst()

		elif iChoice==5:
			obj1.DeleteLast()

		elif iChoice==6:
			pos=int(input("Enter Position:"))
			obj1.DeleteAtPosition(pos)

		elif iChoice==7:
			obj1.Display()

		elif iChoice==8:
			iRet=obj1.Count()
			print("The number of nodes in the Linked List are:",iRet)

		elif iChoice==0:
			print("Thank-You For Using the Application")
			break;
	
		else:
			print("Please Enter Valid Option")
	

if __name__=="__main__":
	main()