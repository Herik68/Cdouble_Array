#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Histogram.cpp for the note comments
int main(){
    srand(time(0));
    const int responseSize=40,frequencySize=11;
    int response[responseSize]={};
    
    int frequency[frequencySize]={};

    for(int answer=0;answer<responseSize;answer++){
        response[answer]=rand()%10+1;
         frequency[response[answer]]++;
         
    }

    cout<< "Rating"<<setw(17)<<"Frequency"<<endl;
    for(int rating=1;rating<frequencySize;rating++){
        cout<<setw(6)<<rating<<setw(17)<<frequency[rating]<<endl;
    }

    
    return 0;
}