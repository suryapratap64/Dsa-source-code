#Creation of Python tuple without the use of parentheses is known as Tuple Packing. 
 # Creating an empty Tuple
tuple1=()
print(tuple1)
# with the use of string
tuple1=('surya','pratap')
print(tuple1)
# the use of list
tuple1=[1,2,3,4,65,2]
print(tuple1)
# with the use of built-in function
tuple1 = tuple('geeka')
print(tuple1)
#Python Tuples can contain any number of elements and of any datatype (like strings, integers, list, etc.).
tuple2=('surya',55,'name',5.33,'king surya')
print(tuple2)
tuple3=(tuple1,tuple2)
print(tuple3)
tuple4=('jai shree ram')*4
print(tuple4)
tuple5=('ram')
n=5
for i in range (int(n)):
    tuple5=(tuple5,)
    print(tuple5)
# Accessing Tuple
tuple2=('surya',55,'name',5.33,'king surya')
print(tuple2[0])
# Tuple unpacking

a,b=tuple2
print(a)
print(b)


# Slicing of a Tuple
tup2=tuple('suryafordoeverything')
print(tup2[1:])
print(tup2[:8])
print(tup2[12:14])
print(tup2[::-1])
print(tup2[::2])





