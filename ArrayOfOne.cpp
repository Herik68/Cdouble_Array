#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i,n[10];

    //Assign all value to 0
    for(i=0;i<10;i++){
        n[i]=1;
    }

    //Print result
    cout<<setw(8)<<"Element"<<setw(8)<<"Value"<<endl;
    for(i=0;i<10;i++){
        cout<<setw(8)<<i<<setw(8)<<n[i]<<endl;
    }
    return 0;
}