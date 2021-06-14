import unittest
import testing1


class TestTesting1(unittest.TestCase):
    def setUp(self):                #using """comment""" can also be used but for only displaying once
        print("\nTesting Start of a method")

    def tearDown(self):
        print("Testing End of a method")

    def test_do_stuff1(self):
        print("Inside Stuff1")
        test_param = 10
        result = testing1.do_stuff(test_param)
        self.assertEqual(result, 10)

    def test_do_stuff2(self):
        print("Inside Stuff2")
        test_param = 10
        result = testing1.do_stuff(test_param)
        self.assertEqual(result, 15)

if __name__=="__main__":
    unittest.main()
