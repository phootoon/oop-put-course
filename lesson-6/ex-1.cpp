//
// Created by mrozb on 28.11.2022.
//
#include <iostream>
using namespace std;
class NumberUtils{
private:
    int a;
    int b;
public:
    NumberUtils(int x, int y){
        this->a = x;
        this->b = y;
    }
     int max_value(){
        return a > b ? a : b;

    }
    int min_value(){
        return a<b ? a:b;
    }
    float avg(){
        return (a+b)/2;
    }
};
int main(){
    NumberUtils num1(4,8);
    cout << "max value = " << num1.max_value() << endl;
    cout << "min value = " << num1.min_value() << endl;
    cout << "average value = " << num1.avg() << endl;


}