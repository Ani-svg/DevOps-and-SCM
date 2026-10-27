import unittestfrom app 
import hello_worldclass TestHelloWorld(unittest.TestCase):   
def test_hello_world_message(self):       
  self.assertEqual(            hello_world(),            "Hello, World!"        )
  if __name__ == "__main__":    unittest.main()
