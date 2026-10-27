import unittest
from app import hello_world

class TestHelloWorld(unittest.TestCase):
def test_hello_world_message(self):
self.assertEqual(hello_world(), "Hello, World!")

if **name** == "**main**":
unittest.main()
