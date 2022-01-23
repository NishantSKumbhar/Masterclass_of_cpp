/*
;author: Nishant Sanjay Kumbhar
;goal: using the if statement find the count of number appear .
*/
#include<iostream>

int main(){
    int cur_val, val;
    std::cout<<"Enter the Values : ";
    if(std::cin>>cur_val){

        int cnt = 1;
        while(std::cin>>val){
            if(val == cur_val){
                ++cnt;
            }else{
                std::cout<<cur_val<<" Occurs "<<cnt<<
                " times"<<std::endl;
                cur_val = val;
                cnt = 1;
            }
        }
    std::cout<<cur_val<<" Occurs "<<cnt<<" times"<<std::endl;

    }

    return 0;
}
