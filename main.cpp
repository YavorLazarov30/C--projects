#include <iostream>
#define MAX 3
/*Implementation of queue from students. We have one class Student with fields name, sirname, number.
1.I try to collect the names and sirnames with two dynamic arrays and the numbers with array from integers.
2.Control the size of the queue with macros and variable que, which take cares about the border. MAX=3;
3.I implement the main logic in the void function push();
4.Print the result with print() function.
5.Realization in main();



*/
using namespace std;
class Student{
char *name;
char *sirname;
int number;
int que;
//Arrays for contain the values
char *n[80];
char *s[80];
int  num[3];
//Declare que and push() and print function:
public:
    Student();
    void push(char *n, char *s, int num);
    void print();


};
//Initialize:
Student::Student(){
que=0;

}
// The main logic. Take care about the border and add new members;
void Student::push(char *name, char *sir, int number){
if(que==MAX){
    return;

}
n[que]=name;
s[que]=sir;
num[que]=number;
que++;
}
// Print function:
void Student::print(){
for(int i=0; i<que; i++){
    cout<<"Name: "<<n[i]<<endl;
    cout<<"Sirname: "<<s[i]<<endl;
    cout<<"Number: "<<num[i]<<endl;
    cout<<"======================"<<endl;
}

}
int main()
{

    Student s;
    s.push("Iono", "Kolev", 3);
    s.push("Kolio", "Monev", 2);
    s.push("Peko", "Staikov", 1);

    s.print();
    return 0;
}
