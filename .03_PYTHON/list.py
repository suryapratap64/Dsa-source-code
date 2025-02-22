#Python Lists are just like dynamically sized arrays
var=['surya','pratap','singh']
print(var)
# Unlike Sets, the list may contain mutable elements
print(var[1])
# list may contain duplicate values with their istinct positions
list=[1,2,3,3,2,2,4,5,6,6,6,6,7,7,7,76,'surya',3.53]
print(list)
print(list[8])

list1=[['surya','ram'],['sanam']]
print(list1[1][0])
#Python len() is used to get the length of the list.
print(len(list1))

lt1=[3,5,4,6,7]
string=input('enter element')
llt=string.split()
print(llt)
n=int (input("enter  the size:"))
ltinput2=list(map(int,input('enter the integer').strip().split()))[:n]
print(ltinput2)
n=int(input('size of the list'))

#element adding list
list=[]
print(list)
list.append(1)
list.append(2)
list.append(3)


print(list)
for i in range(1,7):
    list.append(i)
print(list)  
list.append((5,6)) 
print(list) 
# Addition of List to a List
list2=["surya",'pratap','singh']
list.append(list2)
print(list)

# Addition of Element at 
# specific Position
# (using Insert Method)
list=[1,2,3,4]
list.insert(3,12)
list.insert(0,'geeks')
print(list)
# (using Extend Method)
list.extend([4,77,'spsisngh'])
print (list)

# Reversing a list
mylist=[55,33,32,'surya','pratap']
mylist.reverse()
print(mylist)

# Removal of elements in a List
#Remove method in List will only remove the first occurrence of the searched element.
list=[4,2,5,34,25,5,53,4,53,42,]
list.remove(5)
list.remove(4)
print(list)

