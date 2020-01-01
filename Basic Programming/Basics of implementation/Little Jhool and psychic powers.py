a=input()
count=0
c = 3
flag = 0
for char in a:
    if char == '0':
        if c == 0:
            count = count+1
        else:
            c=0
            count = 1
    else:
        if c == 1:
            count = count+1
        else:
            c = 1
            count = 1
    if count >= 6:
        flag=1
        
if flag == 0:
    print("Good luck!")
else:
    print("Sorry, sorry!")
#https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/