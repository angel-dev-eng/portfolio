#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> numbers = {2,4,6,8,10,12,14,16};
    int total=0;

    for(int&num: numbers){
        num+=5;
    }

    for(int&num: numbers){
        num*=2;
    }
    for(int&num: numbers){
        cout<<num<<"";
        total+=num;
    }

    cout<<endl;
    cout<<"Total:"<<total<<endl;

    return 0;
}