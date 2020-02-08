import random

l = []
for i in range(0, 30000):
    l.append(random.randint(0, 500000))

l.sort()
rep = ""
for i in set(l):
    val = random.randint(0, 2 ** 31)
    rep += "\n        case " + str(i) + ": n = " + str(val) + "; break;"

# Read in the file
with open('too_much_case_old.cc', 'r') as f :
  code = f.read()

# Replace the target string
code = code.replace("##CASE##", rep)

# Write the file out again
with open('too_much_case_new.cc', 'w') as f:
  f.write(code)
