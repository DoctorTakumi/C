import unittest
from calc import volume, area
radius = 5
height = 5

class CalcTest(unittest.TestCase):
    
    def test_volume_value(self):
        self.assertEqual (volume(area(radius), height), 392.75) ## + output test 
        
    def test_volume_type(self):
        self.assertEqual (type(volume(area(radius), height)), float)
        
if __name__ == '__main__':
    unittest.main()