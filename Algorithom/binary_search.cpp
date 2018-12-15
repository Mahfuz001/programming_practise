//
//  binary_search.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/15/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << std::endl;

int binary_search(int arr[],int find){
    int size = sizeof(arr)/sizeof(arr[0]);
    int left = 0,
        right = size-1;
    while (left<=right) {
        int mid = (left+right)/2;
        if(arr[mid] == find){
            return find;
        }else{
            if(arr[mid] > find){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
    }
    return 0;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	#if 0
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout)
	#endif
    
    int  array[] =  {1,20,25,28,32,48,52,64,70,90,95,100};

    int ans = binary_search(array,20);
    if(ans){
        printf("found\n");
    }else{
        printf("value does not exist\n");
    }
    
	return 0;
}
