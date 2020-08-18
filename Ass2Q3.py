def store(am):
    Q=[]
    L=[]
    with open(am,'r+') as file:
        i=0
        while i<3:
            s=file.readline()
            p=s.split()
            j=0
            while j<3:
                L.append(float(p[j]))
                j=j+1
            Q.append(L)
            L=[]
            i=i+1

        return Q
M=store("a.txt")
N=store("b.txt")
p=[[],[],[]]
t=0
for i in range(3):
    for j in range(3):
        for k in range(3):
            t+=M[i][k]*N[k][j]
        p[i].append(t)
        t=0
    j=0
print('\n')
print("The product of the two Matrices is MxN: ")
for i in range(3):
    if(i>0):
        print('\n')
    for j in range(3):
        print(p[i][j],end="   ")
print('\n')
A=[-1,5,8]
p2=[]
s=0
for a in range(3):
    for b in range(3):
        s+= M[a][b]*A[b]
    p2.append(s)
    s=0
print("The product of M and vector {0} is :\n{1}".format(A,p2))
'''The product of the two Matrices is MxN:
1.0   1.0   2.0

1.0   1.0   2.0

0.0   2.0   2.0

The product of M and vector [-1, 5, 8] is :
[4.0, 7.0, 13.0]'''