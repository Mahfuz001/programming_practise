#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int main(int argc, char const *argv[]){

    int arr[] = {5,7,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,size);

    for(auto a:arr){
        cout << a << " ";
    }
    cout << endl;
    //int a=5,b=3;
    //int* p = &a;
    //cout << *p << " "<<b<<endl;

    return 0;
}
