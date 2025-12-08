#include<iostream>
using namespace std;
void DecToBin(int a){
    int pow = 1;
    int binNum = 0;
    while (a)
    {
        int rem = a%2;
        a = a/2;
        binNum += rem*pow;
        pow = pow*10;

    }
    cout<<binNum<<endl;
}
int main(){
    DecToBin(21);
}