#include<iostream>
#include<string>


struct Person{
    std::string name;
    int age;    
};

int main(){
    Person mahfuz={
        "mahfuz",
        15
    };

    std::cout << mahfuz.name<<std::endl;

    return 0;
}