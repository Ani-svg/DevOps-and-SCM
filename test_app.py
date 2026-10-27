import unittest
from app import app

class TestApp(unittest.TestCase):
    def test_hello_world_message(self):
        # your assertions here
        self.assertEqual(..., ...)

if __name__ == "__main__":
    unittest.main()
