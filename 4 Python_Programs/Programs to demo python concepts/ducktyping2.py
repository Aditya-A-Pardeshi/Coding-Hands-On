class Sparrow:
    def Fly(self):
        print("Sparrow Fly")


class Aeroplane:
    def Fly(self):
        print("Aeroplane Fly")


class Whale:
    def Swim(self):
        print("Whale Swims")


# The type of entity is not specified
# We expect entity to have a callable named fly at run time
def Fun(entity):
    entity.Fly()


def main():
    sparrow = Sparrow()
    aeroplane = Aeroplane()
    whale = Whale()

    Fun(sparrow)
    Fun(aeroplane)
    Fun(whale)  # AttributeError


if __name__ == "__main__":
    main()
