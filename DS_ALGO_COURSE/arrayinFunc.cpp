#include <iostream>
using namespace std;

void func(int *a){
	*a = 111;
	a++;
	*a = 10;
}

int main(int argc, char **argv){
	
	int arr[] = {-1,5,8,9};
	
	func(arr);
	
	cout << arr[1] << "\n";
	
	return 0;
}
