import cs50
import sys

if len(sys.argv) != 2:
    print("missing command-line argument (encryption key)")
    exit(1)

k = sys.argv[1]
if(k.isalpha() == False):
    print("need string input")
    exit(1)

print("enter plaintext: ", end="")
p = cs50.get_string()
print("ciphertext: ", end="")

j = 0
l = 0
while j < len(p):
    b = p[j]
    if b.isalpha() == True:
        m = l % len(k)
        c = k[m]
        if(b.isupper() and c.isupper() == True):
            w = ((ord(b) - 65 + ord(c) - 65) % 26) + 65
            print(chr(w), end="")
        elif(b.isupper() and c.islower() == True):
            x = ((ord(b) - 65 + ord(c) - 97) % 26) + 65
            print(chr(x), end="")
        elif(b.lower() and c.isupper() == True):
            y = ((ord(b) - 97 + ord(c) - 65) % 26) + 97
            print(chr(y), end="")
        elif(b.lower() and c.islower() == True):
            z = ((ord(b) - 97 + ord(c) - 97) % 26) + 97
            print(chr(z), end="")
        l += 1
    else:
        print(b, end="")
    j += 1

print("")
exit(0)