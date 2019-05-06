#include<iostream>
using namespace std;

void fun(int n){
	
	if(n > 0){
		cout << n << "\n";
		fun(n-1);
	}

}


int main(){
	
	fun(3);
	
	
	return 0;
}

//tracing of this fun function
//the above function will print before calling next function
/*
 * 						fun(3)
 * 						 / \    
 *                      /   \
 *                     /     3
 * 					fun(2) 	 
 * 					 / \
 *                  /   \
 * 				   /     2
 * 			    fun(1)  
 * 				 /  \
 * 				/    \
 *             /      1
 * 		    fun(0)    
 * 			 /
 *          /
 * 		 exit(0)
 * 
 * 
 */
