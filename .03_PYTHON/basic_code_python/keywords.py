import keyword

print("the list key word is")
print(keyword.kwlist)


print(False==0)
print(True==1)
print(True==0)
print(True+True+True)
print(None==0)
# and or operator in python

print(True or False)
print(False or False)
print(True and True)
print(False and False)
print(not True)


if 's' in 'geeksforgeeks':
    print("part of string ")
else :
    print("string is not part of strng")
for i in "geeksforgee":print(i,end="")

for i in range (20):
   
    print(i, end="")
    if i==6:
        break  
    print(i,end="") 

print() 
i=0
while i<10:
    if i==6:
        i+=1
#print("..." , end=" ") is very important.....................
        continue
    else:
        print(i,end="")
    i+=1 


i=20
if i==20:
    print("i is 20")
elif i==10:
    print("i is 10")
else:
    print("i is not present")

#Structure Keywords in Python : def, class, with, as, pass, lambda    
def suryafun():
        print("surya")
suryafun()

class Dog:
    at1="cat"
    at2="dog"
    def fun(self):
        print("i am a",self.at1)
        print("i am a",self.at2)

Rodger=Dog()
print(Rodger.at1)
Rodger.fun()

with open ('file_path','w')as file:
    file.write('hello world')
    
import math as gfg
print(gfg.factorial(5))

n=10
for  i in range (10):
    #pass can be used as placeholder
    pass

#Lambda keyword is used to make inline returning functions with no statements allowed internally.
 
g=lambda x: x*x
print(g(7))

#‘yield' keyword is used to create a generator, and it allows the function to yield multiple values without exiting

def fun():
    i=0
    for s in range(5):
        i+=s
    return i
print(fun())

def fun():
    s=0
    for i in range (8):
        s+=i
        yield s
    for i in fun():
      print (i)


from math import factorial
import math
print(math.factorial(20))

myvar1 =40
myvar2 ="surya"
print(myvar1)
print(myvar2)
del myvar1
del myvar2
print(myvar1)
print(myvar2)


var='surya'
print(var)

num=10
print(num)

a=b=fds=fsd=f=5
print(a)
print(b)

a,b,c=4,5,7

print(a)
print(c)
print(b)

a="surya"
b="pratap"
print(a+b)

c=5
print(c+a)

def f():
    print(s)
s=" i love india"
f()

a=5
print(type(a))
b=8.0
print(type(b))
c=5+4j
print(type(c))





