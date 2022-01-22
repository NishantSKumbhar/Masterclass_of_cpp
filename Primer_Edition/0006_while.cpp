/*
;author: Nishant Sanjay Kumbhar
;goal: using while loop execute addition and Multiplication of 10 numbers.
*/
#include<iostream>

int main(){

    int num = 1, sum = 0, mul = 1;
    /// from 1 to 10 inclusive addition and multiplication
    while(num<=10){
        sum += num;
        mul *= num;
        ++num;  /// num++ also correct in this condition
    }
    std::cout<<"From 1 to "<<num<<" addition is : "<<sum<<" and multiplication "
    <<"is "<<mul<<std::endl;


    return 0;
}
