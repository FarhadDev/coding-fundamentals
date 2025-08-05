#include<bits/stdc++.h>
using namespace std;

int size = 4;
int queue_container[4];
int front_pointer = -1;
int back_pointer = -1;

bool isEmpty(){
    return front_pointer == -1;
}

bool isFull(){
    return back_pointer == size - 1;
}

int enqueue(int value){
    if(isFull()){
        return -1;
    }

    if(isEmpty()){
        front_pointer = front_pointer + 1;
    }

    back_pointer = back_pointer + 1;
    queue_container[back_pointer] = value;

    return value;
}

int dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty!"<<endl;
        return -1;
    }

    int result = queue_container[front_pointer];
    if(front_pointer >= back_pointer){
        front_pointer = back_pointer = -1;
    }else{
        front_pointer++;
    }

    return result;
}

void display(){
    if(isEmpty()){
        cout<<"Can not print any value."<<endl;
    }else{
        for(int i = front_pointer; i <= back_pointer; i++){
            cout<<queue_container[i]<<endl;
        }
    }
}

int main(){
    enqueue(12);
    enqueue(23);
    enqueue(56);
    enqueue(89);
    enqueue(90);
    cout<<dequeue()<<endl;
    display();
    return 0;
}