#include <iostream>
using namespace std;

//simple sum function

//this is pass by value
int sum(int a, int b){
	int c;
	c = a+b;
	
	return c;	
}

//this is pass by adress
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

//pass by reference
void swap2(int &a, int &b){
	
	int temp = a;
	a = b;
	b = temp;

}


int main(int argc, char **argv){
	
	int x, y, z;
	x = 5;
	y = 6;

	swap(&x, &y);
	
	cout << x << " " << y << "\n";
	

	swap2(x, y);
	
	cout << x << " " << y << "\n";
	

	
	return 0;
}

