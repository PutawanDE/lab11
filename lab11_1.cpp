#include<iostream>
using namespace std;

long long int fibonacci(int);

int main(){
    cout << fibonacci(50);
    return 0; 
}

long long int fibonacci(int n){
    if(n == 0) 
        return 0;
    else if(n == 1) {
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
