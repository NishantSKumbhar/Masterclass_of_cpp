/*
;author: Nishant Sanjay Kumbhar
;goal: comments variation
*/
/// Don't Run the Program
#include<iostream>

/*
 comments are good for programming practice.
 commnt pair cannot nest , after the nesting part will be considered as code part.
*/

int main(){
    /// std::cout<<;  ----> error
    std::cout<<"/*";     ///   ----> /*
    std::cout<<"\n";
    std::cout<<"\*";     ///   ----> *
    std::cout<<"\n";
    std::cout<<"\\*";     ///   ----> \*

    std::cout << "*/"<<std::endl;
    std::cout << /* "*/" */;     /// ----> error
    std::cout << /* "*/" /* "/*" */<<std::endl;



    return 0;
}
