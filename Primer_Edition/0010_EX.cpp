/*
;author : Nishant Sanjay Kumbhar
;goal : 50 to 100 inclusive addition and multiplication using for loop
*/
#include<iostream>

int main(){
    int sum = 0;
    long long int mul = 1;
    for(int i = 50; i <= 100; i++){
        sum += i;
        mul *= i;
    }
    std::cout<<"The Sum & Multiplication of 50 to 100 inclusive is : "<<
    sum<<" & "<<mul<<std::endl;

    return 0;
}
