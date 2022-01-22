/*
;author : Nishant Sanjay Kumbhar
;goal : user input 1 -> 26
        user input 2 -> 6
            then ->   26          print  ->-> 26
                      26*26                 -> 676
                      26*26*26               -> 17576
                      .
                      .
                      .
                      26*26*26*26*26*26         -> 6156119580207157310796674288400203776
*/
#include<iostream>

int main(){
    int num, it;
    std::cout<<"Enter the Number i.e model : ";
    std::cin>>num;
    std::cout<<"Enter the count till iterate : ";
    std::cin>>it;

    for(int i = 1; i <= it; i++){
        long long int ans = 1;
        for(int j = 1; j<=i; j++){
            ans *= num;
        }
        std::cout<<ans<<std::endl;
    }


    return 0;
}
