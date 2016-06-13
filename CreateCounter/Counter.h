#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED
class Counter{
//Private members of the class:
int start;
int fin;
int counter;

public:
   //Constructor with start and and values;
   Counter(int s, int f);
   // Functions for increment, show current value(index or part of array) and access start and end point;
    int increment();

    int showValue();
    int accessStart();
    int accessEnd();
};
//Realisation of the functions from class counter
Counter::Counter(int s, int f){
    start=s;
    fin=f;
    counter=0;
    }

int Counter::accessStart(){
    return start;

}

int Counter::accessEnd(){
    return fin;
}

int Counter::increment(){
   return counter++;

}
int Counter::showValue(){

return counter;
}

#endif // COUNTER_H_INCLUDED
