#include<bits/stdc++.h>
using namespace std;

int addDigitsItarative(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        num = sum;
    }

    return num;
}

int addDigitsModulus(int num){
    if(num == 0) return 0;
    if(num % 9 == 0) return 9;
    return num % 9;
}

int main(){
    int result = addDigitsModulus(25);
    cout << result << endl;
    return 0;
}