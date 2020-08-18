A=[-1,5,8]
B=[7,3,9]
sum=[]
dot=0
for i in range(3):
    sum.append(A[i]+B[i])
    dot+=A[i]*B[i]

print("A+B=",sum)
print("A.B=",dot)

#A=(-1,5,8) B=(7,3,9) => sum=(6,8,17) and dprod=80