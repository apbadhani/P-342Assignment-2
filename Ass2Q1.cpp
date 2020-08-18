#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{float avg=0,count=0;
  for(int i=1; i<=6; i++)
  {for (int j=1; j<=6; j++)
     {avg+=abs(i-j);
      ++count;
     }

  }  
cout<<"the average distance between any two points :"<<avg/count<<'\n';
return 0;
}
// Answer is 1.9444
