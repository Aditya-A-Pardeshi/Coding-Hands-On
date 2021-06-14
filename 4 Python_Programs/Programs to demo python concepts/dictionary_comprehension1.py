#Dictionary comprehension is same as List and Set Comprehension.

simple_dict={"a":1,"b":2}

print(simple_dict)

my_dict={key:value*2 for key,value in simple_dict.items()}

print(my_dict)

my_dict1={num:num*2 for num in [1,2,3]}
print(my_dict1)
