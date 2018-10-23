#include<iostream>
#include<vector>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[],int n){
    int index_min=0;
    for(int i=0;i<n;i++){
        index_min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[index_min]){
                index_min = j;
            }
        }
        swap(arr[i],arr[index_min]);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}