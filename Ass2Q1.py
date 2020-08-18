avg=0
count=0
for i in range(1,7):
    for j in range(1,7):
        avg+=abs(i-j)
        count+=1
print("\n the average distance between any two points :",avg/count)