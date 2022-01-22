/*
;author: Nishant Sanjay Kumbhar
;goal: how we can go on next line while writing c++ code.
*/
#include<iostream>

int main(){
    int n1 = 88, n2 = 55;
    std::cout<<"The Sum of "<<n1 /// if we put ; at this end of line then we got error.
    <<" and "<<n2<<" is "<<
    n1+n2<<std::endl;


    return 0;
}
