#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int breath;	
	public:
	
		//this is a contructor
		Rectangle(int l, int b){
			length = l;
			breath = b;	
		}
		
		// no need for this
		
		//~ void init(int l, int b){
			//~ length = l;
			//~ breath = b;
		//~ }

		int area(){
			return length * breath;	
		}

		void changeLenght(int l){
			length = l;
		}
};

int main(){
	
	Rectangle r(10, 5);
	
	//init(&r, 10, 5);
	
	cout << r.area() << "\n";
	
	r.changeLenght(20);
	
	cout << r.area() << "\n";
	
	return 0;	
}
