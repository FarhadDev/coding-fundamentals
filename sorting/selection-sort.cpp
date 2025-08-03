#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& container){
    for(int i = 0; i<container.size()-1; i++){
        int minIndex = i;
        for(int j = i+1; j<container.size(); j++){
            if(container[j]<container[minIndex]){
                minIndex = j;
            }
        }
        swap(container[minIndex], container[i]);
    }

}

int main(){
    vector<int>container = {30, 45, 12, 8, 3};
    selection_sort(container);
    for(auto it = container.begin(); it != container.end(); it++){
        cout<< *(it) <<" ";
    }
    return 0;
}