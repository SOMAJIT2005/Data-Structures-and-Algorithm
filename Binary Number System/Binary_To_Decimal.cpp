#include<iostream>
#include<cmath>
using namespace std;
/*void binary_to_decimal(int a){//most general way
    int power = 0;
    int decimal = 0;
    while (a)
    {
        int x = a%10;
        a = a/10;
        if (x)
        {
            decimal += pow(2,power);
        }
        power++;
    }
    cout<<decimal<<endl;
    
}*/

void binary_to_decimal(int a){
    int decnum = 0;
    int pow = 1;
    while (a)
    {
        int lastdigit = a%10;
        a= a/10;
        decnum += lastdigit*pow;
        pow = pow*2;
    }
    
    cout<<decnum<<endl;

}
int main(){
    binary_to_decimal(1011);
}