# __init__ is a special method in Python classes.
# It is called automatically when you create a new object (an instance of the class).

# Think of it as the "constructor" of the class:

# It initializes the newly created object.

# It sets up the initial values of the object’s attributes.


class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    x=5

p1=Person('jhon',87)
print(p1.name)
print(p1.age)

del p1.age
print(p1)


#inheritance in py
class Students():
    name="surya"
    age=22
    gender='Male'



