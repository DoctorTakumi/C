## Unit test C with Python?
## https://docs.python.org/3/library/ctypes.html

import subprocess
import unittest

class TestSquareArea(unittest.TestCase):

    def test_square_area_output(self):
        # Compile the C program
        subprocess.run(["gcc", "-o", "square_area", "area.c"])

        # Run the compiled program and capture output
        process = subprocess.Popen(["./square_area"], stdout=subprocess.PIPE)
        output, _ = process.communicate()
        output = output.decode().strip()

        # Assert that printed output matches expected
        self.assertIn("Area of the square with side length 5 is: 25", output)

if __name__ == '__main__':
    unittest.main()