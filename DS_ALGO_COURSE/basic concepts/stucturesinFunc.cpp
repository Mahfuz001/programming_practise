#include <iostream>
using namespace std;

struct Rectangle{
	
	int length;
	int breath;	
	
};

// pass by referance

int area(struct Rectangle &n){
	return n.length * n.breath;
}

void changeLenght(struct Rectangle *r, int n){
	
	r -> length = n;
		
}

int main(int argc, char **argv){
	
	
	struct Rectangle r = {10, 5};
	
	cout << area(r) << "\n";

	changeLenght(&r, 20);
	
	cout << r.length << "\n"; 
	cout << area(r) << "\n";
	
	return 0;
}
