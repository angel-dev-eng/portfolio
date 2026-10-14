#include <iostream>
using namespace std;
int main(){
    int points;
    int totalPoints =0;
    int bonus=10;

    int i=1;
    do{
    int j=1;

    do{
        points=1+j;
        totalPoints +=points;

        cout<<"Level:"<<i<<",Step:"<<j<<",Points:"<<points<<endl;
        j++;
    }while(j<=4);
    i++;
    }while(i<=3);

    cout<<"Total points:"<<totalPoints<<endl;
    cout<<"Final score:"<<totalPoints+bonus<<endl;

    return 0;
}