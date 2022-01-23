/*
;author: Nishant Sanjay Kumbhar
;goal: Print sum of set of integers read from console input.
*/
#include<iostream>

int main(){
    int sum = 0, num;
    std::cout<<"Enter the Numbers : ";
    while(std::cin>>num){             /// here to stop at some point we use end-f-file i.e control + z -> ^z
        sum += num;
    }
    std::cout<<"sum : "<<sum<<std::endl;

    return 0;
}
