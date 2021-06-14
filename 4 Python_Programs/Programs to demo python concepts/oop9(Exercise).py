class Cat:
    species = 'mammal'
    def __init__(self, name, age):
        self.name = name
        self.age = age

# Instantiate the Cat object with 3 cats
obj1 = Cat("ABC", 10)
obj2 = Cat("PQR", 20)
obj3 = Cat("XYZ", 30)

# Find the oldest cat
def get_oldest_cat(*args):
    return max(args)

# Output
print(f"The oldest cat is {get_oldest_cat(obj1.age, obj2.age, obj3.age)} years old.")