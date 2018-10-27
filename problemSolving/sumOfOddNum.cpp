//problem link: https://vjudge.net/contest/265657#problem/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k = 1;k<=t;k++){
        int a,b,sum=0;
        cin >> a >> b;
        for(int i=a;i<=b;i++){
            if(i%2 != 0){
                sum += i;
            }
        }
        cout << "Case " << k <<  ": "<< sum << endl;
    }

    return 0;
}