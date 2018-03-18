import unittest
import complex

class TestComplex(unittest.TestCase):

    def test_create(self):
        c = complex.Complex(15, 10)
        self.assertEqual(c.getRealPart(), 15)
        self.assertEqual(c.getImaginaryPart(), 10)

    def test_add(self):
        c1 = complex.Complex(15, 10)
        c2 = complex.Complex(15, 10)
        c3 = c1.add(c2)
        self.assertEqual(c3.getRealPart(), 30)
        self.assertEqual(c3.getImaginaryPart(), 20)

    def test_equals(self):
        c1 = complex.Complex(15, 10)
        c2 = complex.Complex(15, 10)
        self.assertTrue(c1.equals(c2))

if __name__ == '__main__':
    unittest.main()
