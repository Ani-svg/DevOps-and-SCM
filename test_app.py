import unittest
from app import hello_world


class TestHelloWorld(unittest.TestCase):

    # Test 1: Verify the returned message
    def test_hello_world_message(self):
        self.assertEqual(
            hello_world(),
            "Hello, DevOps!"
        )

    # Test 2: Verify the return type
    def test_hello_world_type(self):
        self.assertIsInstance(
            hello_world(),
            str
        )


if __name__ == "__main__":
    unittest.main()
