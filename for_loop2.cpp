#include <iostream>
using namespace std;

int main(){
    int num;
    int product = 1;

    cout<<"Enter numbers (enter 0 to stop):"<<endl;
    cin>> num;

    for (; num!=0; cin >> num){
        product *= num;

    }
    cout<<"Product: "<<product<<endl;
    
    return 0;
}
