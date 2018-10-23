#include<bits/stdc++.h>
using namespace std;

void printPrimeFactorOf(int n){
    while(n % 2 == 0){
        printf("%d ", 2);
        n = n/2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i == 0){
            printf("%d ",i);
        }
    }
    if(n > 2){
        printf("%d",n);
    }
}

int main(){
    printPrimeFactorOf(12);

    return 0;
}
