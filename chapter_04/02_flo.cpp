#include <iostream>
using namespace std;

int main(){
    // ************ float , double and long double literals *********

    float a = 34.5f; // 34.5f  --> f lga h to float hai or 34.5 hia only to ye double hia by defalut
    long double w = 34.5l; // 34.5l --> ye long double hai 
    cout <<"the value of a is "<<a<<endl<<"the value of w is "<<w<<endl;
    cout<<"the size of 34.5 is "<<sizeof(34.5)<<endl;  
    cout<<"the size of 34.5f is "<<sizeof(34.5f)<<endl;
    cout<<"the size of 34.5F is "<<sizeof(34.5F)<<endl;
    cout<<"the size of 34.5l is "<<sizeof(34.5l)<<endl;
    cout<<"the size of 34.5L is "<<sizeof(34.5L)<<endl;
    return 0;

}