#include <iostream>
using namespace std;

int main() {
    // logical operator
    // AND (&&) , OR (||) , NOT  (!)
    cout << ((3>6) && (3>2)) <<endl; // false - 0  kyu ki  AND operator khta h ki dono shi hoga to hum ture  return krenge nhi to false return krenge 
    cout << ((3<5) && (4<5)) << endl;// true - 1 kyu ki dono statement shi hai,.
    cout << ((3<5) || (2>5)) << endl; //  true - 1 return krega kyu ki ye OR operator pe km kr rha hia or OR operator me koi ek bhi ture rha to ture return krta hai  ye ...
    cout << (3<6)<<endl;  // true - 1 ;
    // in NOT operator ye true  pe false return krta hai or false pe true reutrn krta hai 
    cout << !(3<6)<< endl; // false - 0;
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}