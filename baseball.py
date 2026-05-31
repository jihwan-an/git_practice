import random
number = [0,1,2,3,4,5,6,7,8,9]

a=number.pop(random.randint(0,9))
b=number.pop(random.randint(0,8))
c=number.pop(random.randint(0,7))
mynum=[a,b,c]
#변수 세팅
score=0
while True:
    user = list(map(int,list(input())))
    
    strike = 0
    ball = 0
    for i in range(0,3):
        for j in range(0,3):

            if mynum[i]=user[j]:
                if i==j:
                    strike+=1
                else:
                    ball+=1
    if strike==0 and ball==0:
        print("out")
    elif strike ==3:
        print(f"{strike}Strikes, {ball}Balls.")
    else:
        print("WIN!!!")
    score+=1

print(f"Game Clear, {score}HWi.")
    
