#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breath;	
	public:
	
		//this is a contructor
		Rectangle(){
			length = breath = 1;
		}
		Rectangle(int l, int b);
		
		int area();

		void changeLenght(int l){length = l;}
		~Rectangle();
};

Rectangle:~Rectangle(){}

Rectangle::Rectangle(int l, int b){
			length = l;
			breath = b;	
}

int Rectangle::area(){
			return length * breath;	
}


int main(){
	
	Rectangle r(10, 5);
	
	//init(&r, 10, 5);
	
	cout << r.area() << "\n";
	
	r.changeLenght(20);
	
	cout << r.area() << "\n";
	
	return 0;	
}
