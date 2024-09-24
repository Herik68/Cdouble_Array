
#include <iostream>
using namespace std;


int main(){
    const int asize=10;
    int a[asize]={8,5,0,3,-7,-2,6,9,2,4};
    int swap,hold;
    do{
        swap=0;
        for(int i=0;i<asize-1;i++){
            if(a[i]>a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
                swap=1;
            }
        }
    }while(swap==1);
    cout<<"Sorted array : ";
    for(int i=0;i<asize-1;i++){
        cout<< a[i]<< " ";
    }cout<<endl;
    
    return 0;}