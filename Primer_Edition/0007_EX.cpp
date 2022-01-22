/*
;author: Nishant Sanjay Kumbhar
;goal: using while loop implement 50-100 addition and multiplication
*/
#include<iostream>

int main(){

    int num = 50, sum = 0;
    long long int mul = 1;
    ///;goal : from 50 to 100 inclusive addition and multiplication
    while(num<=100){
        sum += num;
        mul *= num;
        ++num;  /// num++ also correct in this condition
    }
    std::cout<<"From 50 to "<<num-1<<" addition is : "<<sum<<" and multiplication "
    <<"is "<<mul<<std::endl;


    return 0;
}
