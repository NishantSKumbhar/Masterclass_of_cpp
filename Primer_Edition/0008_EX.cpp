/*
;author: Nishant Sanjay Kumbhar
;goal: using while loop find range between two numbers.
*/
#include<iostream>

int main(){

    ///two numbers entered by user, print the all numbers between those two integers.
    std::cout<<"Enter the two Numbers :"<<std::endl;
    int n1, n2;
    std::cin>>n1>>n2;
    if(n1>n2){
        while(n1>=n2){
        std::cout<<n1<<" ";
        n1--;
        }
    }else if(n2>n1){
        while(n2>=n1){
        std::cout<<n2<<" ";
        n2--;
        }
    }else{
        std::cout<<n1<<" & "<<n2<<" are equal"<<std::endl;
    }




    return 0;
}
