class Demo:
    # its not method overloading but we can feel it is like method overloading
    def Add(self, no1=None, no2=None, no3=None):

        if no1 != None and no2 != None and no3 != None:
            return no1 + no2 + no3

        elif no1 != None and no2 != None:
            return no1 + no2

        elif no1 != None:
            return no1

        else:
            return 0


def main():
    obj = Demo()

    ret = obj.Add(11, 21, 51)
    print("3 Parameter addition is:", ret)

    ret = obj.Add(11, 21)
    print("2 Parameter addition is:", ret)

    ret = obj.Add(11)
    print("1 Parameter addition is:", ret)

    ret = obj.Add()
    print("0 Parameter addition is:", ret)


if __name__ == "__main__":
    main()
