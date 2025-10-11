o_file=open("d:\codingfolder\dsafullcourse\.03_PYTHON\pyWebDevelopment\python.txt")
print(o_file.readline())
print(o_file.readline()[0])

for lines in o_file.readlines():
    # print(files)
    print(lines)
o_file.close()

