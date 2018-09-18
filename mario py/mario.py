import cs50

print("Please enter desired height: ", end="")
n = cs50.get_int()

i = 0
while i < n:
    s = 0
    h = 0
    m = 0
    while s < n - i - 1:
        print(" ", end="")
        s += 1
    while h < i + 2:
        print("#", end="")
        h += 1
    
    print("  ", end="")
    
    while m < i + 1:
        print("#", end="")
        m += 1
    
    print("#")
    i += 1