#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    const int responseSize=40,frequencySize=11;//set freqeuncy size to 11 so it will be 0 from 10, it is okay if we don't use the unwanted zero

    int response[responseSize]={};
    int frequency[frequencySize]={};

    //Generate Random Response(it wil be total 40 number between 1-10, zero is not included)
    for(int answer=0;answer<responseSize;answer++){
        response[answer]=rand()%10+1;
        //Add frequency to the response we get
        frequency[response[answer]]++;
    }

    //Print Result
    cout<< "Rating"<<setw(17)<<"Frequency"<< setw(20)<< "Histogram" << endl;
    for(int rating=1;rating<frequencySize;rating++){
        cout<<setw(6)<<rating<<setw(17)<<frequency[rating]<<setw(12);

        //Print stars according to frequency
        for(int star=0;star<frequency[rating];star++){
            cout<< "*";
        }cout<<endl;
    }

    
    return 0;
}