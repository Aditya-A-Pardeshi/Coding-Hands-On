name=input("Enter your name:")
age=int(input("Enter your age:"))

print(f"Hii..{name.capitalize()}..you are {age} yeaars old..Go ahead in your life..Dont worry..")


#-------------also we can use format method as formatted string--------------------------

print("Hello {}, your balance is {}.".format("Aditya", 500))

print("Hello {0}, your balance is {1}.".format("Aditya", 500))

print("Hello {name}, your balance is {amount}.".format(name="Aditya", amount=500))

print("Hello {0}, your balance is {amount}.".format("Aditya", amount=500))
