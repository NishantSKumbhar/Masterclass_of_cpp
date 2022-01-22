/*
;author : Nishant Sanjay Kumbhar
;goal : user input two numbers, we have to print range between two numbers in increasing order.
*/
#include<iostream>

int main(){
    int num1, num2, flag;
    std::cout<<"Hi User, Enter Two Numbers : ";
    std::cin>>num1>>num2;
    if(num1>num2){
        flag = num2;
        num2 = num1;
        num1 = flag;

    }else if(num1 == num2){
        std::cout<<"Numbers entered are Equal, so range is 0"<<std::endl;
        return 0;
    }else{
        num1 = num1;
        num2 = num2;
    }

    for(num1; num1<=num2; num1++){
        std::cout<<num1<<" ";
    }


    return 0;
}
