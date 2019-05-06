#include<iostream>
using namespace std;

struct Rectangle{
	int length;
	int breath;	
};

void init(struct Rectangle *r, int l, int b){
	r->length = l;
	r->breath = b;	
}

int area(struct Rectangle r){
	return r.length * r.breath;	
}

void changeLenght(struct Rectangle *r, int l){
	r->length = l;
}

int main(){
	
	struct Rectangle r;
	
	init(&r, 10, 5);
	
	cout << area(r) << "\n";
	
	changeLenght(&r, 20);
	
	cout << area(r) << "\n";
	
	return 0;	
}
