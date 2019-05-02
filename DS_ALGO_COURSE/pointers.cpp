#include <iostream>
using namespace std;

int main(int argc, char **argv){
	
	int a = 5;
	int *p = &a;
	a++;
	
	cout << *p << "\n";
	
	
	return 0;
}
