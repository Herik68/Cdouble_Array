#include <iostream>
#include <iomanip>
using namespace std;

void modifyArray(int [],int );//Pass by Reference
void modifyElement(int );//Pass by Value

int main(){
    const int asize=5;
    int i,a[asize]={0,1,2,3,4};

    cout<<"Effects of passing entire array call-by-reference:\n\n";
    cout<< "The value of the original array are: \n";
    //Original
    for(i=0;i<asize;i++){
        cout<<setw(3)<<a[i];
    }cout<<endl;

    //Modified
    modifyArray(a,asize);
    cout<< "The values of the modified array are:\n";

    for(i=0;i<asize;i++){
        cout<<setw(3)<<a[i];
    }cout<<endl;

    //Modified but no change if only array elements are passed
   
    cout<<"\n\nEffects of passing array by value:\n\n"
        <<"The value of a[3] is "<< a[3]<<endl;
         modifyElement(a[3]);
    return 0;
}

//Passing Array
void modifyArray(int a[],int asize){
    for(int i=0;i<asize;i++){
        a[i]*=2;
    }
}
//Passing Element
void modifyElement(int a){
    a*=2;
    cout<< "Value in ModifyElement is "<< a <<endl;
}