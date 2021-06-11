#include <iostream>

using namespace std;

int Fibonacci(int);
int EvenSumFibonacci(const int);

int main(){
    //cout << EvenSumFibonacci(90) << endl;
    cout << EvenSumFibonacci(4000000) << endl;
    return 0;
}

int Fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int EvenSumFibonacci(const int max_val){
    int val = 0, even_sum = 0;
    int i = 0;
    while(1){
        val = Fibonacci(i);
        if(val > max_val){
            break;
        }else if(val % 2 == 0){
            even_sum += val;
        }
        i++;
    }
    return even_sum;
}