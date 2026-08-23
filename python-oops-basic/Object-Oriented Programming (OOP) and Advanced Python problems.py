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

"""class User:
    def info(self):
        print(self.__dict__)
        print(f"User {self.username} has email {self.email}")
first_user=User()
first_user.username="bogdon123"
first_user.email="bogdan@bogdan.com"
first_user.info()"""

"""class Post:
    def __init__(self,title,content,author):
        self.title=title
        self.content=content
        self.author=author
        self.likes_qty=0
    def like(self):
        self.likes_qty+=1
    @staticmethod
    def formate_post(title,content):
        return(f"Posttitle: {title}\n"
               f"Post content:{content}\n")

formatted_post=Post.format_post("Some post title ","Post contents")
print(formatted_post)"""

"""class Calculator:
    @staticmethod
    def add(a,b):
        return a+b
    @staticmethod
    def sub(a,b):
        return a-b
    @staticmethod
    def mul(a,b):
        return a*b
    @staticmethod
    def div(a,b):
        if b!=0:
          return a//b
        raise ValueError("Can't divide by zero")
print(Calculator.add(20,10))  """



"""class User:
    user_qty = 0
    def __init__(self, username, email):
        self.username = username
        self.email = email
        #User.user_qty += 1


class Post:
    def __init__(self,title,content,author):
        self.title=title
        self.content=content
        self.author=author
class Forum:
    def __init__(self):
        self.users=[]
        self.posts=[]
    def register_user(self,username,email):
        user=User(username,email)
        self.users.append(user)
        return user
    def create_post(self,title,content,author):
        post=Post(title,content,author)
        self.posts.append(post)
        return post
forum= Forum()
bob=forum.register_user("bob", "bob@bob.com")
alice=forum.register_user("alice", "alice@bob.com")
print(forum.users)
forum.create_post("My first post","Post content",bob)
print(forum.posts)
print(forum.posts[0].title)"""
"""class AdminUser(User):
    def __init__(self,username,email,role):
        super().__init__(username,email)
        self.role= role
        self.is_admin = True
my_admin = AdminUser("bob", "bob@bob.com","Administrator")
print(my_admin.__dict__)
print(my_admin)
print(type(my_admin))
print(isinstance(my_admin,AdminUser))
print(isinstance(my_admin,User))
print(isinstance(my_admin,object))
my_User=User("alice", "alice@bob.com")
print(my_User.__dict__)"""


"""first_user = User("bob", "bob@bob.com")
second_user = User("alice", "alice@bob.com")
third_user = User("john", "john@bob.com")"""


"""print(second_user.__dict__)
print(User.__dict__)
print(User.user_qty)
print(third_user.user_qty)

third_user.user_qty = 10
print(User.user_qty)
print(third_user.user_qty)
print(third_user.__dict__)"""






