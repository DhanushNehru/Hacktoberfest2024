import random


# Generate a random choice from the list [-1, 0, 1]
computer = random.choice([-1, 0, 1])


yourvalue= input("enter your choice:")
yourdic={"s":1,"w":-1,"g":0}
reversedict={1:"snake",-1:"water",0:"gun"}
yourchoice=yourdic[yourvalue]

print(f"you chose {reversedict[yourchoice]}\ncomputer chose {reversedict[computer]}")




if(computer==yourchoice):
    print("match is draw!")
else:
    if(computer ==-1 and yourchoice==0):
        print("you lost!")
    elif(computer== -1 and yourchoice==1):
         print("you won!")
    elif(computer ==1 and yourchoice==0):
         print("you won!")
    elif(computer== 1 and yourchoice==-1):
         print("you lost!")
    elif(computer ==0 and yourchoice==1):
         print("you lost!")
    elif(computer== 0 and yourchoice==-1):
        print("you won!")
    else:
        print("something went wrong.")

        
        