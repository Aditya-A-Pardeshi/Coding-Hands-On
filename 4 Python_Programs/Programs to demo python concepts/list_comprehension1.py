#List comprehension offers a shorter syntax when you want to create a new list
# based on the values of an existing list.
#Shortcut instead of looping seperately.
#Quickly create list.
#Shorthand.
#One Liners.
#Less Readability.
#Creation of DS is really faster in python using Comprehensions.

my_list=[char for char in "Hello"]
print(my_list)

my_list1=[num for num in range(10) if num%2==0] #Variable(Expression)-->Loop-->Condition
print(my_list1)

my_list2=[num%2==0 for num in range(10)]
print(my_list2)

my_list3=[num*2 for num in range(10) if num%2==0]
print(my_list3)