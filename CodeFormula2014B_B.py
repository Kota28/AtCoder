n=input()
digit,even,odd=0,0,0
for i in range(len(n)):
    x=int(n[len(n)-1-i])
    if(digit%2==0):
        even+=x
    else:
        odd+=x
    digit+=1
print(odd,even)