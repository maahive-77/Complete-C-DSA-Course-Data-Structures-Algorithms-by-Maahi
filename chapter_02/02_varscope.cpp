#include<iostream>
using namespace std;
int global = 44; // global variable

 void gol(){
    
    cout<<global;
 }
int main(){
    int local = 33; // local variable
    global = 45; // iska mtlb h ki local ko jda precedence  as compare to global..
    gol();
    cout<< "global = "<<global;
    cout<< "\nlocal = "<<local;
} 