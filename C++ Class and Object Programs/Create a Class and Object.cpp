#include<iostream>
using namespace std;

class Outer{

    public:
    void outer_func(){
        cout<<"I am outer function from the outer class."<<endl;
    };


    class Inner{
        public:
        void inner_func(){
            cout<<"I am inner funciton from the inner class."<<endl;
        };
    };
};


int main(){

    Outer outerobj;
    outerobj.outer_func();

    Outer::Inner innerobj;
    innerobj.inner_func();

    return 0;
}