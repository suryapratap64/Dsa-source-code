string1="surya is a priogrammer "
string2='surya is a coder'
string3='''surya is a king'''
print (string1)
print (type(string1))
print(string2)
 
string1='netflixforwebseries'
print('first ch of string: ',string1[0])
print(string1[-2])
print(string1[-3])

string1='netflixforwebseries'
print(string1[3:12])
print(string1[::-1])

sps='surya pratap singh'
sps=''.join(reversed(sps))
print(sps)
#In Python, the Updation or deletion of characters from a String is not allowed.
#A character of a string can be updated in Python by first converting the string into a Python List and then updating the element in the list.
str1='heyram i am a students'
#method-1
list1=list(str1)
list1[2]='r'
string2=''.join(list1)
print(string2)
#method-2
string3=str1[0:2]+'p'+str1[4:14]
print(string3)
#Python strings are immutable
#element delet by string slicing
string5='''hi i'am surya"and you'''
print(string5)
string1="i am \"surya\""
print(string1)
string2='hi\tsurya'
print('\ntab:')
print(string2)
string3='hi\nsurya'
print(string3)


# Formatting of Strings
str1='{} {} {}'.format('ram','sita','lakshaman')
print(str1)
str2='{0} {2} {1}'.format('ram','sita','lakshaman')
print(str2)
str3='{r} {l} {s}'.format(r='ramayan',l='laka',s='seeta')
print(str3)


st1='{0:b}'.format(16)
print(st1)
st2='{0:e}'.format(4)
print(st2)
st3='{0:2f}'.format(1/7)
print(st3)