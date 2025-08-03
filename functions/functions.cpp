#include<bits/stdc++.h>
using namespace std;
//functions are set of code which performs something for you
//functions are used to modularise code
//functions are used to increase readability
//functions are used to use same code multiple times

//void-->which does not return anything--it will do something but it will not give me something

//return
//parameterised
//no parameterised

void printName(){
    cout<<"Hello, Farhad"; 
}

//pass by value
//what if I want to make changes in the original value
//&--get it from the address--get the original value
void doSomething(int &num){
    cout<< num << endl;//10
    num += 5;
    cout<< num << endl;//15
    num += 5;
    cout<< num << endl;//20
}

//arrays are generically pass by reference
//not works with &


int main(){
    //printName();

    int num = 10;
    doSomething(num);//it goes by value a copy goes
    //the original number did not go
    //the original memory did not go
    //you are 10 let me create a copy
    //modified the copy
    cout<< num << endl;//10--not 20
    //why??
    return 0;
}