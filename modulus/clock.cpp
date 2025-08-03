#include<bits/stdc++.h>
using namespace std;

//mod N -- result -- N - 1 -- (3)--0,1,2
//12 % 3

int main(){
    int hours = 12;
    int counter = 1;

    while(true){
        if(counter % hours == 0){
            cout<< hours <<" ";
        }else{
            cout<< counter % hours<< " ";
        }

        if(counter == 24) break;
        counter++;
    }
    return 0;
}