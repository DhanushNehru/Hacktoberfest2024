import time
string_char = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

def animation(p,c):
    for i in string_char:
        time.sleep(0.01)
        print(p+i)
        if (i == c):
            break;

test = "WELCOME GHOST AGENT"

n=0
while n<len(test):
    animation(test[0:n],test[n])
    n+=1

time.sleep(1)
print("Welcome to the airport!")