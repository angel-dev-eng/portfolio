#include <iostream>
using namespace std;
int main(){
    int product;
    int sumofproducts=0;

int i=1;
while(i<=4){
int j=1;
while(j<=3){
    product=i+j;
    sumofproducts +=product;
    cout<<"outer:"<<i<<",Inner:"<<j<<",Product:"<<product<<endl;
j++;
}
i++;
}
cout<<"Sum of product:"<<sumofproducts<<endl;

return 0;
}