names={1:"aditya",2:"pruthvi"}

print(names)

names[3]="vaibhav"
print(names)

print(names.keys())
print(names.values())
print(names.items())

print(names.pop(3))
print(names)

names.popitem()
print(names)

car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}

car.update({"color": "White"})

print(car)

