#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    if ( marks>=90)
    {
        cout<<"grade A"<<endl;
    }
    else if(marks<90 && marks>=75){
        cout<<"grade B"<<endl;
    }
    else if(marks<75 && marks>=65){
        cout<<"grade c"<<endl;
    }
    else if(marks<65 && marks>=33){
        cout<<"grade d"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}