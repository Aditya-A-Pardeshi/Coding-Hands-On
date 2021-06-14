class My_Range:

    current=0

    def __init__(self,first,last):
        self.first=first
        self.last=last

    def __iter__(self):
        return self

    def __next__(self):
        if My_Range.current<self.last:
            num=My_Range.current
            My_Range.current +=1
            return num
        raise StopIteration

rangeee=My_Range(0,100)

for i in rangeee:
    print(i)