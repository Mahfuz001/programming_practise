#include <iostream>
using namespace std;

int main(int argc, char **argv){
	
	int a = 5;
	int &r = a;
	
	a++;
	
	cout << r << "\n";
	
	
	return 0;
}
