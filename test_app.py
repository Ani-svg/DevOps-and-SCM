import unittest
from app import hello_world, welcome_message


class TestHelloWorld(unittest.TestCase):

    # Test 1: Verify hello_world message
    def test_hello_world_message(self):
        self.assertEqual(
            hello_world(),
            "Hello, DevOps!"
        )

    # Test 2: Verify return type
    def test_hello_world_type(self):
        self.assertIsInstance(
            hello_world(),
            str
        )

    # Test 3: Test welcome message for Aniket
    def test_welcome_message_aniket(self):
        self.assertEqual(
            welcome_message("Aniket"),
            "Welcome to DevOps, Aniket!"
        )

    # Test 4: Test welcome message for Rahul
    def test_welcome_message_rahul(self):
        self.assertEqual(
            welcome_message("Rahul"),
            "Welcome to DevOps, Rahul!"
        )


if __name__ == "__main__":
    unittest.main()
