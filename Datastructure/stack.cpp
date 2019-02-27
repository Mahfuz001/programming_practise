//
//  stack.cpp
//  
//
//  Created by Mahfuz Ahmed on 27/2/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define push push_back

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int stacks[100], ind;

void push(int x){
    ++ind;
    stacks[ind] = x;
}
int isEmpty(){
    return ind;
}
void pop(){
    --ind;
}
int top(){
    return stacks[ind];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    push(5);
    cout<<top();br;
    
    return 0;
}
