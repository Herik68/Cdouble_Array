#include<iostream>
using namespace std;
int binarySearch(int [], const int, int);
void bubbleSort(int [], const int);
 
int main(){
    const int xsize = 13;
    int x[xsize] = {45, 7, 9, 0, 33, 21, 11, 14, 20, 12, 28, 3, 1};
    int key, result;
    bubbleSort(x, xsize);
    cout << "Sorted array\n";
    for(int i=0; i<xsize; i++){
        cout << x[i] << " ";
    }cout<<endl;
    
    cout << "Enter a number from 0 to 100: ";
    cin >> key;
    cout<<endl;
    result = binarySearch(x, xsize, key);
    if(result!=-1){
        cout << "\n" << key << " is found at index " << result << endl;
    }else{
        cout << "\n" << key << " is not found\n";
    }
    return 0;
}
 
int binarySearch(int a[], const int asize, int key){
    int middle, low=0, high=asize-1;
    while(low<=high){
        middle = (high+low)/2;
        cout<<"Middlenum= "<< a[middle] <<" and its index = "<< middle <<endl;
        if(key==a[middle]){
            return middle;
        }else if(key<a[middle]){
            high = middle - 1;
            cout<<"Key("<<key<<")<Middle("<<a[middle]<<")\nSearch the Left Side\nThe array was reduced to index "<< low << " - " << high << endl;
            for(int i=low;i<=high;i++){
                cout<< a[i]<< " ";
            }cout<<endl<<endl;
        }else{
            low = middle + 1;
            cout<<"Key("<<key<<")>Middle("<<a[middle]<<")\nThe array was reduced to index "<< low << " - " << high << endl;
            for(int i=low;i<=high;i++){
                cout<< a[i]<< " ";
            }cout<<endl<<endl;
        }
    }
    cout<<"Low greater than High and go outside the loop founding nothing.";
    return -1;
}
 
void bubbleSort(int b[], const int bsize){
    int swap, hold;
    do{
        swap = 0;
        for(int i=0; i<bsize-1; i++){
            if(b[i]>b[i+1]){
                hold = b[i];
                b[i] = b[i+1];
                b[i+1] = hold;
                swap = 1;
            }
        }
    }while(swap==1);
}