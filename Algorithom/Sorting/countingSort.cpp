//
//  countingSort.cpp
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

ifstream in("input.in");

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n;
    in>>n;
    vector<int> nums(n);
    //memset(nums, 0, nums.size());
    for(int i=1;i<=n;i++){
        int x;
        in>>x;
        nums[x]++;
    }
    
    for(int i=0;i<=n;i++){
        if(nums[i] > 0){
            for(int j=1;j<=nums[i];j++){
                cout<<i << " ";
            }
        }
    }
    br;
    
    
    return 0;
}
