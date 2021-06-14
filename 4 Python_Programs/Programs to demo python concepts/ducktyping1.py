class CLanguage:
    def LearnAndCode(self):
        print("Learning C Language")


class CppLanguage:
    def LearnAndCode(self):
        print("Learning Cpp Language")


class PythonLanguage:
    def LearnAndCode(self):
        print("Learning Python Language")


# the type of language is not specified
# we expect language to have a callable named LearnAndCode at run time
class Programmer:
    def Coding(self, language):
        language.LearnAndCode()


# If the class contains LearnAndCode method than it is a programming language class->(Duck Typing(LearnAndCode))

class Demo:
    pass


# We are not checking type of object instead we are checking for presense of the given method or attribute.

def main():
    cobj = CLanguage()
    cpobj = CppLanguage()
    pobj = PythonLanguage()

    dobj = Demo()

    obj = Programmer()

    obj.Coding(cobj)
    obj.Coding(cpobj)
    obj.Coding(pobj)

    obj.Coding(dobj)  # AttributError->No LearnAndCode Method present in Demo class


# Passing the object of which class doesnt matters but class should contain that method in it.

if __name__ == "__main__":
    main()
