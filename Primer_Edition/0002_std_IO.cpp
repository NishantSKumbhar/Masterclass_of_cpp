/*
;author: Nishant Sanjay Kumbhar
;goal: find the greater number.
*/
#include<iostream>

int main(){

	std::cout<<"Enter the Two Numbers :"<<std::endl;
	int n1 = 0, n2 = 0;
	std::cin>>n1>>n2;
	if(n1>n2){
		std::cout<<n1<<" is greater than "<<n2<<std::endl;
	}else if(n2>n1){
		std::cout<<n2<<" is greater than "<<n1<<std::endl;
	}else{
		std::cout<<n1<<" & "<<n2<<" are Equal."<<std::endl;
	}

	return 0;
}
