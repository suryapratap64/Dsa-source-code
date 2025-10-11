# Option 1: using raw string

#Use double backslashes \\ or raw string r"..." for Windows paths, because single backslashes \ can be interpreted as escape sequences (like \c, \d etc.).
o_file = open(r"d:\codingfolder\dsafullcourse\.03_PYTHON\pyWebDevelopment\hon.txt", "w")
o_file.write('this is code write file in python')
o_file.close()
