#include<iostream>
#include<iomanip>
using namespace std;

template<class T>
T sum(T a, T b){
	return a+b;
}


int main(){
	
	cout << fixed << setprecision(3);
	cout << sum(5.00, 7.00) << "\n";
	
	return 0;
}
