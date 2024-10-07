#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int asize=10;
    int a[asize]={2,6,4,8,10,12,89,68,45,37};
    int hold,swap;

    cout<< "\n Data in original order\n";
    for(int i=0;i<asize;i++){
        cout<<setw(4)<<a[i];
    }cout<< endl<< endl;
    do{
        swap=0;
        for(int i=0;i<asize-1;i++){
            if(a[i]>a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
                swap=1;//there is a swap
            }
        }
         // Print the array after each pass
        cout<< "Sorting ...."<<endl;
        for (int i = 0; i < asize; i++) {
            cout << setw(4)<< a[i] << " ";
        }
        cout << endl;
    }while(swap==1);//Keep sorting until no swap

    cout<< "\n\n Data in ascending order\n";
    for(int i=0;i<asize;i++){
        cout<<setw(4)<<a[i];
    }
    return 0;
}