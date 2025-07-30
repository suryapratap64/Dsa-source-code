# Python Program to print Hello World
print("Hello World! I Don't Give a Bug")
#o/p-Hello World! I Don't Give a Bug
import keyword

# printing all keywords at once using "kwlist()"
print("The list of keywords is : ")
print(keyword.kwlist)
# o/p=The list of keywords are: ['False', 'None', 'True', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']

# False is 0, and True is 1.
# True + True + True is 3.
# True + False + False is 1.
# None isn’t equal to 0 or an empty list ([]).
print(False == 0)
print(True == 1)
 
print(True + True + True)
print(True + False + False)
 
print(None == 0)
print(None == [])
#o/p=
# True
# True
# 3
# 1
# False
# False
#  and:This a logical operator in Python. “and” Return the first false value. If not found return last. The truth table for “and” is depicted below. 
# or:This a logical operator in Python. “or” Return the first True value. if not found return last. The truth table for “or” is depicted below. 
# not: This logical operator inverts the truth value. The truth table for “not” is depicted below. 
# in: This keyword is used to check if a container contains a value. This keyword is also used to loop through the container.
# is: This keyword is used to test object identity, i.e to check if both the objects take the same memory location or not. 
# Logical Operations:
# 'or' returns ‘True' when at least one operand is ‘True'.
# 'and' returns ‘True' only when both operands are ‘True'.
# 'not' negates the operand.
# Python “in” Keyword:
# It checks if ‘s’ is in the string ‘geeksforgeeks’ and prints accordingly.
# It loops through the string’s characters.
# Python “is” Keyword:
# It checks if two empty strings (‘ ‘) are identical (returns ‘True').
# It checks if two empty dictionaries ({}) are identical (returns ‘False').
print(True or False)
print(False and True)
print(not True)
if 's' in 'geeksforgeeks':
	print("s is part of geeksforgeeks")
else:
	print("s is not part of geeksforgeeks")
for i in 'geeksforgeeks':
	print(i, end=" ")

print("\r")
print(' ' is ' ')
print({} is {})
#o/p=
# True
# False
# False
# s is part of geeksforgeeks
# g e e k s f o r g e e k s 
# True
# False


# for: This keyword is used to control flow and for looping.
# while: Has a similar working like “for”, used to control flow and for looping.
# break: “break” is used to control the flow of the loop. The statement is used to break out of the loop and passes the control to the statement following immediately after loop.
# continue: “continue” is also used to control the flow of code. The keyword skips the current iteration of the loop but does not end the loop.
for i in range(10):

	print(i, end=" ")
	if i == 6:
		break

print()
i = 0
while i < 10:
	if i == 6:
		i += 1
		continue
	else:
		print(i, end=" ")

	i += 1
#o/p=
# 0 1 2 3 4 5 6 
# 0 1 2 3 4 5 7 8 9 

# if : It is a control statement for decision making. Truth expression forces control to go in “if” statement block.
# else : It is a control statement for decision making. False expression forces control to go in “else” statement block.
# elif : It is a control statement for decision making. It is short for “else if“
i = 20
if (i == 10):
	print("i is 10")
elif (i == 20):
	print("i is 20")
else:
	print("i is not present")
#o/p=
# i is 20

# Python Data Types
# Python offers, enabling you to manipulate and manage data with precision and flexibility. Additionally, we’ll delve into the dynamic world of data conversion with casting, and then move on to explore the versatile collections Python provides, including lists, tuples, sets, dictionaries, and arrays.
# Strings
# Numbers
# Booleans
# Python List
# Python Tuples
# Python Sets
# Python Dictionary
# Python Arrays
# Type Casting


#A String is a data structure in Python Programming that represents a sequence of characters

string_0 = "A Computer Science portal for geeks"
print(string_0)
print(type(string_0))

#o/p=A Computer Science portal for geeks 
#<class 'str'>
# Creating a String
# with single Quotes
String1 = 'Welcome to the Geeks World'
print("String with the use of Single Quotes: ")
print(String1)

# Creating a String
# with double Quotes
String1 = "I'm a Geek"
print("\nString with the use of Double Quotes: ")
print(String1)

# Creating a String
# with triple Quotes
String1 = '''I'm a Geek and I live in a world of "Geeks"'''
print("\nString with the use of Triple Quotes: ")
print(String1)

# Creating String with triple
# Quotes allows multiple lines
String1 = '''Geeks
            For
            Life'''
print("\nCreating a multiline String: ")
print(String1)
#op=String with the use of Single Quotes: 
# Welcome to the Geeks World
# String with the use of Double Quotes: 
# I'm a Geek
# String with the use of Triple Quotes: 
# I'm a Geek and I live in a world of "Geeks"
# Creating a multiline String: 
# Geeks
#             For
#             Life
# Python Program to Access
# characters of String

String1 = "GeeksForGeeks"
print("Initial String: ")
print(String1)

# Printing First character
print("\nFirst character of String is: ")
print(String1[0])

# Printing Last character
print("\nLast character of String is: ")
print(String1[-1])
#op=
# Initial String: 
# GeeksForGeeks
# First character of String is: 
# G
# Last cha racter of String is: 
# s
# Python Program to
# demonstrate String slicing

# Creating a String
String1 = "GeeksForGeeks"
print("Initial String: ")
print(String1)

# Printing 3rd to 12th character
print("\nSlicing characters from 3-12: ")
print(String1[3:12])

# Printing characters between
# 3rd and 2nd last character
print("\nSlicing characters between " +
      "3rd and 2nd last character: ")
print(String1[3:-2])
#op=Initial String: 
# GeeksForGeeks
# Slicing characters from 3-12: 
# ksForGeek
# Slicing characters between 3rd and 2nd last character: 
# ksForGee

#Program to reverse a string
gfg = "geeksforgeeks"
print(gfg[::-1])
#op=skeegrofskeeg