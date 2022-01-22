/*
;author: Nishant Sanjay Kumbhar
;goal: implement sum of 1 to 10 inclusive.
*/
#include<iostream>

int main(){
    int val;
    int sum = 0;
    for(int val = 1 ; val <= 10; val++){
        sum += val;
    }
    std::cout<<"The sum of 1 to 10 inclusive is : "<<sum<<
    " ."<<std::endl;

    return 0;
}
