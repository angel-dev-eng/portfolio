#include <iostream>
using namespace std;
int main(){

    int count=0;

    for(int i= 1; i<=3; i++){
    for(int j= 1; j<=2; j++){
    for(int k= 1; k<=2; k++){
        count++;
        cout<<"Block:"<<i<<",Row: "<<j<<", Seat:"<<k<<endl;

    }}}
    
        cout<<"Total passes:"<<count<<endl;

    return 0;

}