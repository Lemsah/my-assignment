print("pleas enter a sentence to re-arrange")
sentence=input()
sentence=sentence.split()
sentence.sort()
y=0-1
x=len(sentence)

while y < x:
    y=y+1
    print(sentence[y],end=''+" ")
