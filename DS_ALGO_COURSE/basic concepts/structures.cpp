#include<iostream>
using namespace std;

struct Cards{
	int face;
	int value;
	int suit;	
};


int main(){
	
	struct Cards c;
	struct Cards *p = &c;
 	
	c.face = 1;
	c.value = 2;
	
	p -> face = 5;
	
	cout << c.face << "\n";
	
	return 0;	
}
