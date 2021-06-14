my_file=open("demo.txt")

#print(my_file)  #o/p-->> <_io.TextIOWrapper name='demo.txt' mode='r' encoding='cp1252'>

#print(my_file.read())
#my_file.seek(0)
#print(my_file.read())
#my_file.seek(0)
#print(my_file.read())

print(my_file.readline())

print(my_file.readlines())

my_file.close()