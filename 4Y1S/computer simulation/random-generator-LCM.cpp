//Generating random numbers using LCG

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
   
    int x[10],n,a,c,m,i,j;
    float r[10];
    cout<<"Enter the number of random numbers to generate:";
    cin>>n;
    cout<<"Enter the value of seed X0:";
    cin>>x[0];
    cout<<"\nEnter the value of a:";
    cin>>a;
    cout<<"\nEnter the value of c:";
    cin>>c;
    cout<<"\nEnter the value of m:";
    cin>>m;
    i=0;
    r[0]=(float)x[0]/m;
    if(a==1){
        cout<<"\n  Additive LCG :";
    do{
   
        x[i+1]=(x[i]+c)% m;
        r[i+1]=(float)x[i+1]/m;
        i++;
        }while(i<=n);
    }
    else if(c==0)
    {
        cout<<"\nMultiplicative LCG:";
        do{
       
        x[i+1]=(a*x[i])% m;
        r[i+1]=(float)x[i+1]/m;
        i++;
        }while(i<=n);
    }
    else{
        cout<<"\n Mixed LCG:";
        do{
       
        x[i+1]=(a*x[i]+c)%m;
         r[i+1]=(float)x[i+1]/m;
        i++;
         }while(i<=n);
    }
   
    cout<<"Thus the obtained random numbers are:";
    for(j=0;j<i;j++){
        cout<<"\n"<<r[j]<<"\n";
    }
    return 0;
}