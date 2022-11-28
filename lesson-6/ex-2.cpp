//
// Created by mrozb on 28.11.2022.
//
#include <cmath>
#include <iostream>
using namespace std;

class Number{
    double doubleValue();
};



class Logarithm : public Number {
private:
    double base, argument;
public:
    double doubleValue() { return log(this->argument) / log(this->base); }

    Logarithm(double inputBase, double inputArgument) {
        this->base = inputBase;
        this->argument = inputArgument;
    }

private:
    void checkBase(double base) {
        if (this->base <= 0) {
            throw new SIG_ERR ("base cannot me <=0");
        }
        if (this->base == 1) {
            throw ("base cannot me = 0");
        }
    }
private:
    void checkArgument(double argument){
        if (this->argument <=0)
            throw ("argument cannot be <=0");
    }
};


    int main() {
        try {
            Logarithm log1(-1, 4);


        }
        catch(){

        }
    }
