class PlayerCharacter:
    Membership=True
    def __init__(self,name,age):
        if PlayerCharacter.Membership:
            self.name=name                      #Attributes
            self.age=age                        #Attributes

    def Shout(self):                          #Methods
       print(f"My name is {self.name}")


player1=PlayerCharacter("Aditya",27)

print(player1.name,player1.age)

player1.Shout()