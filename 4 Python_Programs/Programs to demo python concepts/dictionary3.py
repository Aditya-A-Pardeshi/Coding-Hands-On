student={"Aditya":11,"Pruthvi":21,33:"abc"}

print(student)

print("\nKeys in student")
for i in student.keys():
    print(i)

print("\nvalues in student")
for i in student.values():
    print(i)

print("\nKey and values are")
for i in student.keys():
    print(i,student[i])

print("\nKey:values are")
for i,j in student.items():
    print(i,j)