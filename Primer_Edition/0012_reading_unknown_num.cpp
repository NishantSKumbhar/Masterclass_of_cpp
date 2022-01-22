/*
;author: Nishant Sanjay Kumbhar
;goal: reading the unknown count of numbers and perform sum and multiplication.
*/
#include<iostream>

int main(){
    int num, sum = 0;
    long long int mul = 1;
    std::cout<<"if want to quit Press 'q' and Enter->";
    std::cout<<"Enter the Numbers : ";
    while(std::cin>>num){
        sum += num;
        mul *= num;
    }
    std::cout<<"Addition of Entered numbers : "<<sum<<" & Multiplication is : "<<
    mul<<std::endl;

    return 0;
}
