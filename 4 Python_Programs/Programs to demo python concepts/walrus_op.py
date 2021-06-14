

name="Helllooooooooo"

if(len(name)>10):
    print(f"The length is {len(name)} long..")


if( (a := len(name) ) > 10 ):                   #walrus operator
    print(f"The length is {a} long..")


while( (a := len(name) ) > 1 ):                 #while loop using walrus operator
    print(a)
    name=name[:-1]
    
print(name)