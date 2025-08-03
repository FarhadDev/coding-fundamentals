#include <bits/stdc++.h>
using namespace std;

int my_stack[4];//0,0,0,0
//definig topIdex index
int topIdex = -1; //initially set to -1; as the top-locator

//push operation--need data, topIdex index and the stack here
//instead of passing from main we define stack and topIdex index globally for easier accessibility
//for the first time while pushing the first vlaue into the stack
//before pushing topIdex need to be ++ or updated to pushing in the valid range otherwise we are pushing in invalid range
int push(int data){
    //pushing for valid range
    if(topIdex <=2){
        topIdex++;
        my_stack[topIdex] = data;
        return data;
    }else{
        cout<<"Can not insert at this position" <<endl;
        return -1;
    }
}

//pop operation
int pop(){
    // topIdex--;//problem--top value changes before returning--classic value assignment re-assignment problem
    // return my_stack[topIdex];
    if(topIdex > -1 && topIdex < 4){
        int topValue = my_stack[topIdex];
        topIdex--;
        cout<<topValue<<endl;
        return topValue;
    }else{
        cout<<"The stack is empty, can not pop anymore" << endl;
        return -1;
    }
   
}

//peek operation
int peek(){
    //for peek valid range curr < len() && curr > 1
    //becaue initially without pushing I went to peek
    if(topIdex < 4 && topIdex > -1){
        return my_stack[topIdex];
    }else{
        cout<<"Invalid range" << endl;
        return -1;
    }
    
}

int main(){
    // push(20);//topIdex--> 0
    // push(25);//topIdex--> 1
    // push(30);//topIdex--> 2
    // push(50);//topIdex--> 3
    // push(80);//topIdex--> 4 //should return invalid because we're pushing over more than stack size--in invalid range
    // //topIdex value will be valid at the following location--> 0, 1, 2, 3
    // //topIdex started from -1 so valid range should be arr.len() - 2 = 2
    //cout<< peek() << endl;
    cout<<push(20)<<endl;
    pop();
    pop();
    return 0;
}