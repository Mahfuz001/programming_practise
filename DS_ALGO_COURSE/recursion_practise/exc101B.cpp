#include<iostream>
using namespace std;

void fun(int n){
	
	if(n > 0){
		fun(n-1);
		cout << n << "\n";
	}

}


int main(){
	
	fun(3);
	
	
	return 0;
}

//tracing of this fun function
//the above function will print after calling next function
/*
 * 						fun(3)
 * 						 / \    
 *                      /   \
 * 					fun(2) 	 \
 * 					  / \     3
 * 					 /   \ 
 * 			      fun(1)  \
 * 				   /  \    2
 * 				  /    \
 * 		       fun(0)   \
 * 		        /        1
 *             /
 * 		   exit(0)
 * 
 * 
 */
