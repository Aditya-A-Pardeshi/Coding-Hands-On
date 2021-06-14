class PlayerCharacter:
    def __init__(self,name,age):
        print("Inside Constructor")
        self.name=name                      #Attributes
        self.age=age                        #Attributes

    def Run(self):                          #Methods
        print("Inside Run")
        print("Run..")


player1=PlayerCharacter("Aditya",27)

print(player1.name,player1.age)

player1.Run()