class AgeInvalid(Exception):
    print("Inside class AgeInvalid(Exception)")
    def __init__(self,msg):
            self.msg=msg

def main():

    try:
        age=int(input("Enter the age:"))
        if age<18:
            print("Inside if age<18:")
            raise AgeInvalid("Your Age is less than 18")

    except AgeInvalid as obj:
        print("Inside except AgeInvalid as obj")
        print(obj)

    else:
        print("Inside else:")
        print("You will get license in 7 working days")

if __name__=="__main__":
    main()