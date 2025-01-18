#include <iostream>
using namespace std;

int main(){
    //******* Typecasting ************ 
    int a = 4;
    float b = 4.55;


    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<(int)a<<endl;
    cout<<"the value of b is "<<float(b)<< endl;
    cout<<"the value of b is "<<int(b)<< endl;
    
    int c = int(b);
    cout<<"the value of c is "<<c<< endl;

    cout<<"the value of a+b is "<<a+b<< endl;
    cout<<"the value of a + int(b) is "<<a+int(b)<< endl;
    cout<<"the value of a + (int)b is "<<a + (int)b<< endl;


}