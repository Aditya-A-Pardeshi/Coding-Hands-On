import utility
import shopping.shopping_cart                   #package_name.module_name
from shopping.shopping_cart import displayCart  #package_name.module_name-->function_name
from shopping import shopping_cart              #package-->module

print(utility)
print(shopping.shopping_cart)

iNo1=11
iNo2=10

iRet=utility.addition(iNo1,iNo2)
print("Addition is:",iRet)

iRet=utility.substraction(iNo1,iNo2)
print("Substraction is:",iRet)

iRet=utility.division(iNo1,iNo2)
print("Division is:",iRet)

iRet=utility.multiplication(iNo1,iNo2)
print("Multiplication is:",iRet)

iValue="apple","grapes"
iRet=shopping.shopping_cart.displayCart(iValue)     #package_name.module_name.function_name
print(iRet)

iValue=["apple","grapes"]
iRet=displayCart(iValue)     #function_name
print(iRet)

iValue=["apple","grapes"]
iRet=shopping_cart.displayCart(iValue)     #module_name.function_name
print(iRet)