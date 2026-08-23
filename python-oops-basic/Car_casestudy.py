"""class Car:
    def move(self):
        print("Car is moving")
    def stop(self):
        print("Car stopped")

my_car=Car()
print(type(my_car))
print(isinstance(my_car,Car))
print(isinstance(my_car,object))
print(dir(my_car))
my_car.move()
my_car.stop()"""

class User:
    def info(self):
        print(self.__dict__)
        print(f"User {self.username} has email {self.email}")
first_user=User()
first_user.username="bogdon123"
first_user.email="bogdan@bogdan.com"
first_user.info()


