#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int c[100]={};

    //Assign value from 0-99
    for(int num=0;num<100;num++){
        c[num]=num+1;
    }

    //Print the result in 10 element per line
    for(int i=1;i<=100;i++){
        cout<<setw(3)<<c[i-1]<<" ";
        if(i%10==0 && i!=0){
            cout<<endl;
        }
        
    }
    return 0;}