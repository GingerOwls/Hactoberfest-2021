#include <climits>
#include <iostream>

using namespace std;

int bitDivide(int dividend, int divisor){

    int result = 0;

    while(dividend >= divisor){
        int temp = divisor;
        int count(temp <= dividend);
        while(temp <= dividend){
            temp<<=1;
            count<<=1
        }
        result+=(count>>1);
        dividend-=(temp>>1);
    }

    int yingyang = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    
    return yingyang*result;
}


int main (){
    int _dividend = INT_MAX;
    int _divisor = INT_MIN;
    cout << "enter 2 numbers to divide. Starting with your \ndividend and then your divisor" << endl; 
    cin >> _dividend; cin >> _divisor;
    cout << "The answer is: " << bitDivide(_dividend, _divisor)
}