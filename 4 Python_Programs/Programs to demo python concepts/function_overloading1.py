class Demo:

    def Add(self, no1, no2, no3):  # This method gets wrapped by the below method
        return no1 + no2 + no3

    def Add(self, no1, no2):
        return no1 + no2


obj = Demo()

ret = obj.Add(11, 21)
print("The addition is:", ret)
