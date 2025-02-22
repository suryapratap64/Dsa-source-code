print("hello world")
mynumber=98
print(mynumber)
mynumber="surya"
print(mynumber)
#creating empty list
num=[]
num.append(99)
num.append(8)
num.append("surya bhai is king")
print(num)
#getting input from user
name=input("enter your name :")
print("hello",name)
#multiple input from user
num1=int(input("num1:"))
num2=int(input("num2:"))
mul=num1*num2
add=num1+num2
sub=num1-num2
div=num1/num2
print("value of num3 :",add)
print("value of num3 :",sub)
print("value of num3 :",div)
print("value of num3 :",mul)
# #selection satement(if else )
# key=67
# if(key>15):
#     print("key is wrong")
# elif(key>45):
# print("key is correct")
# else:
# print("invlaid key")
# function
def hello():
    print("jai shree ram")
    print("har har mahadev")
    hello()
    # calling function
    hello()