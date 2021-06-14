#Serial Programming on 1 core

import os
import time

def Square(no):
    return no*no

def SerialProcessing():
    start=time.time()
    print("Serial Processing")

    arr=range(100000)
    print(arr)
    brr=[]

    for i in arr:
        brr.append(Square(i))

    #print("The result of serial processing is:",brr)
    end=time.time()
    print("The time taken by serial processing is:",end-start)

def main():

    SerialProcessing()

if __name__=="__main__":
    main()