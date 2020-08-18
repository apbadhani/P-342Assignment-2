avg=0
count=0
for i in range(1,7):  #calculating the sum of distnaces between the points
    for j in range(1,7):
        for k in range(1,7):
            for l in range(1,7):
                avg+=abs(i-k)+abs(j-l)
                count+=1

print("\nThe average distance for a 6*6 is: ",avg/count)