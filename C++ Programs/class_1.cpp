#include<iostream>

using namespace std;


class Demo{

    public:
        /// characteristics
        int n1;
        int n2;


        /// Behaviour
        Demo(){
            cout<<"Inside the Constructor"<<endl;
            n1 = 999;
        }

        ~Demo(){
            cout<<"Inside the Destructor"<<endl;
        }

        void fun(){
            cout<<"Inside the fun method"<<endl;
        }

        void gun(){
            cout<<"Inside the gun method"<<endl;
        }

};


int main(){

    cout<<"Inside Main"<<endl;

    Demo obj1;
    cout<<obj1.n1<<endl;
    Demo obj2;

    obj1.fun();
    cout<<sizeof(obj1)<<endl;
    return 0;
}
