#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int array[10]={32,27,64,18,95,14,90,70,60,37};
    cout<<setw(7)<<"Element"<<setw(13)<<"Value"<<endl;
    for(int i=0;i<10;i++){
        cout<<setw(7)<<i<<setw(13)<<array[i]<<endl;
    }
}