#A Python dictionary is a data structure that stores the value in key:value pairs.
dict={
    1:'jai shree ram',
    2:'jai saraswati mata',
    3:'har har mahadev'
}
print (dict)
# As of Python version 3.7, dictionaries are ordered and can not contain duplicate keys.
dict={
    'name':'surya',
    'surname':'singh',
    'dob':[28,3,2005]
}
print(dict)
#Nested Dictionaries
dict={
    1:'surya',
    4:55,
    3:{
        5:'himesh',
        9:'biet jhansi'
    }
}
print(dict)
#Adding Elements to a Dictionary
dict={}
print(dict)
dict[0]='om namah shivay'
dict[1]='ram'
dict[4]='sita'
print(dict)
dict['value set']=[4,5,6]
print(dict)
#accesing
print(dict[0])
print(dict.get(4))
dict1={'dict1':{1:'surya'},
       'dict2':{'name':'surya'}}
print(dict1['dict2']['name'])
del(dict[dict1])
print(dict)


