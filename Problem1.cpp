#include <iostream>

using namespace std;

int Multiple(const int);

int main(){
    //cout << Multiple(10) << endl;
    cout << Multiple(1000) << endl;
    return 0;
}

int Multiple(const int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(i % 3 == 0 | i % 5 == 0){
            sum += i;
        }
    }
    return sum;
}