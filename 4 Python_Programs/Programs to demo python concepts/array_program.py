from array import *

def main():

    arr=array("i",[11,21,51,101,111,121])
    print(arr)
    print(len(arr))
    print(type(arr))
    print(arr[0])

    for i in range(len(arr)):
        print(i)
        print(arr[i])

    for no in arr:
        print(no)

    iCnt=0

    while iCnt<len(arr):
        print(arr[iCnt])
        iCnt +=1

if __name__=="__main__":
    main()