#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    const int arraysize=10;
    int array[arraysize];
    
    //Assign Value
    for(int i=0;i<arraysize;i++){
        array[i]=2+2*i;
    }

    //Print result
    cout<<setw(7)<<"Element"<<setw(13)<<"Value"<<endl;
    for(int j=0;j<arraysize;j++){
    cout<<setw(7)<<j<<setw(13)<<array[j]<<endl;
    }
    return 0;
}