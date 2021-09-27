w=0
tab='                                            '
tab1='         '
star='* '
message= "  I Love Security"
print(star *25)

for w in range(0, 7):
    w=w+1
    print (star,tab,star,'\n' , end='')

print(star,tab1,message,tab1 *2,star)

for w in range(0, 6):
    w=w+1
    print (star,tab,star,'\n' , end='')
print(star *25)