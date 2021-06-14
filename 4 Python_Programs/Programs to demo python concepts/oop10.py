class PlayerCharacter:

    def __init__(self,name,age):
        self.name=name
        self.age=age

    @classmethod
    def Addition(cls,num1,num2):
        return cls("ABC",num1+num2)

obj=PlayerCharacter.Addition(2,3)           #Object creation using class method
print(obj)