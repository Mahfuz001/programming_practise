//problem link: https://vjudge.net/contest/265657#problem/B

#include <iostream>
#include<string.h>
using namespace std;
int main(){
    char s;
    while(cin>>s){
        if (!strchr("AEIOUYaeiouy",s)){
            cout << "."<<(char)tolower(s);
        }
    }

    return 0;
}

