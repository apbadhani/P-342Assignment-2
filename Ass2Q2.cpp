#include<iostream>
using namespace std;
int main()
{int A[]={-1,5,8},B[]={7,3,9},sum[3],dot=0;
for(int i=0;i<=2;i++)
  {sum[i]=A[i]+B[i];
   dot=dot+A[i]*B[i];
  }
cout<<"A+B="<<"{"<<sum[0]<<","<<sum[1]<<","<<sum[2]<<"}"<<'\n';
cout<<"A.B="<<dot<<'\n';
return 0;
}
// A=(-1,5,8) B=(7,3,9). Sum=(6,8,17), dot=80


