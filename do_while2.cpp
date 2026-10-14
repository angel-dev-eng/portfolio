#include <iostream>
using namespace std;

int main(){
    int num;
    int product =1;

    cout<<"Enter the numbers (enter 0 to stop):"<<endl;
    cin>> num;

    do{
        product *= num;
        cin>> num; 
    }while (num!=0);

    cout<<"Product: "<<product<<endl;

    return 0;

}