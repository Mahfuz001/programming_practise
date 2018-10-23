#include<iostream>
//this is the function to get GCD
int getGCD(int num1,int num2){
    int n1,n2,rem;
    //n1 = std::max(num1,num2);
    //n2 = std::min(num1,num2);
    n1 = num1;
    n2 = num2;

    rem = n1 % n2;
    n1 = n2;
    n2 = rem;

    if(n2 != 0){
        getGCD(n1,n2);
    }

    return n1;
}

int main(int argc, char const *argv[]){
    #if 0
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int num1,num2;
    std::cin >> num1 >> num2;
    //print GCD    
    int gcd = getGCD(num1,num2);
    std::cout <<"GCD : "<< gcd << std::endl;
    
    //print LCM
    //LCM = n1*n2/GCD
    int lcm = num1*num2/getGCD(num1,num2);
    std::cout << "LCM : " << lcm << std::endl;
    

    return 0;
}
