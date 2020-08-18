#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{float avg=0,count=0;
 for(int i=1;i<=6;i++)
 { for(int j=1;j<=6;j++)
    { for(int k=1;k<=6;k++)
       { for(int l=1;l<=6;l++)
         {avg=avg+abs(i-k)+abs(j-l);
          ++count;
         }
       }
    }
 }    
cout<<"the average distance for a 6*6 is"<<avg/count<<'\n';
return 0;
}
// Answer is 3.88889
