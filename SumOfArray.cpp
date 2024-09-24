#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int arraySize=12;
    int i,sum=0,array[arraySize];

    //Promput the input from user
    cout<<"Enter "<< arraySize << " integers: ";
    for(i=0;i<arraySize;i++){
        cin>>array[i];
    }

    //Print out the input we get
    cout<<setw(8)<<"Element"<<setw(13)<<"Value"<<endl;
    for(i=0;i<arraySize;i++){
        cout<< setw(8)<< i << setw(13) << array[i]<<endl;
    }

    //Calculate sum and print result
    for(i=0;i<arraySize;i++){
        sum += array[i];
    }
    cout<< "Sum of array Element values is "<< sum << endl;
    return 0;
}