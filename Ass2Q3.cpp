#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
vector<vector<float>> store(string am){
    vector<vector<float>> Q;
    vector<float> L;
    float K[3];
    ifstream file(am);
    if (file.is_open()){
       for(int i=0;i<3;i++){ 
            for(int i=0;i<3;i++){
                file>>K[i];
            }
            for(int i=0;i<3;i++){
                L.push_back(K[i]);
            }
            Q.push_back(L);
            L={};
       }
    }
    return Q;

}
int main()
{  vector<vector<float>> M=store("a.txt");//This is where you enter the name of the text file
    vector<vector<float>> N=store("b.txt");
  vector<vector<float>> p={{},{},{}};
    float t=0;
    for (int i=0;i<3;i++){
     for (int j=0;j<3;j++){
      for (int k=0;k<3;k++){
              t+=M[i][k]*N[k][j];
            }
            p[i].push_back(t);
            t=0;
        }  
    }
    cout<<endl;
       cout<<"The product of the two Matrices is MxN: ";
    for(int i=0; i<3;i++){
        if(i>0) {
            cout<<endl;
            cout<<"                                        ";
        }
        for(int j=0; j<3;j++){
            cout<<p[i][j]<<"   ";
        }
    }
    vector<float> A={-1,5,8};
    vector<float> p2;
    float s=0;
    for (int a=0;a<3;a++){
        for (int b=0;b<3;b++){
            s+= M[a][b]*A[b];
        }
        p2.push_back(s);
        s=0;
    }
    
    cout<<"\nThe product of M and vector A={-1,5,8} is:";
    for (int i=0;i<4;i++){
        if (i==0) cout<<"(";
        else {
            if (i!=3) cout<<p2[i-1]<<",";
            else cout<<p2[i-1]<<")";
        }
    }
cout<<'\n';
return 0;}
/* M=1 1 0   N=1 0 1
     1 0 1     0 1 1
     0 1 1     0 1 1  
MXN=1   1   2   MXA=(4,7,13)
    1   1   2   
    0   2   2  */
   
   
