/*
In this exercise I create a header file Counter. There I realize a basic counter. Please visit Counter.h to see the logic.


*/




#include <iostream>
#include "Counter.h"
#define MAX 5
using namespace std;

int main()
{
    int startCount;
    int endCount;
    cout<<"Start position : ";
    cin>>startCount;
    cout<<"End position: ";
    cin>>endCount;
    Counter c(startCount, endCount);




    //Example with array:
    int arr[MAX]={1,2,3,4,5};
    if(endCount<=MAX){
    for(int i=c.accessStart(); i<c.accessEnd();i=c.increment()){
        cout<<"Position =  "<<c.showValue()<<endl;
        cout<<"Array value  = "<<arr[c.showValue()]<<endl;
        cout<<"==========================================="<<endl;
    }
    }else{
    cout<<"Next time try with value less or than or equal to  MAX";
    }

    // Now you will see the first 3 numbers:



    return 0;
}
