//
//  stacks2.cpp
//
//
//  Created by Mahfuz Ahmed on 27/2/19.
//  Problem of Parenthesis
//  Check paranthesis expression

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define push push_back

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

char input[100];
int stacks[100];
int ind;

void push(int x){
    stacks[++ind] = x;
}
bool isEmpty(){
    if(ind > 0){
        return false;
    }else{
        return true;
    }
}

bool verify(char input[]){
    ind = 0;
    int n = strlen(input);
    
    for(int i=0;i<n;i++){
        if(input[i] == '(') push(1);
        if(input[i] == '{') push(2);
        if(input[i] == '[') push(3);
        
        if(input[i] == ')'){
            if(isEmpty() || stacks[ind] != 1) return false;
            else{
                stacks[ind] = 0;
                --ind;
            }
        }
        if(input[i] == '}'){
            if(isEmpty() || stacks[ind] != 2) return false;
            else{
                stacks[ind] = 0;
                --ind;
            }
        }
        if(input[i] == ']'){
            if(isEmpty() || stacks[ind] != 3) return false;
            else{
                stacks[ind] = 0;
                --ind;
            }
        }
    }
    if(ind == 0) return true;
    else return false;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    cin>>input;
    
    if(verify(input)) {
        cout<<"Correct";
    }else{
        cout<<"Oops Wrong";
    }
    br;
    
    return 0;
}
