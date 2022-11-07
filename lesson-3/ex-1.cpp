//
// Created by mrozb on 07.11.2022.
//
#include <iostream>
using namespace std;


class Name{
public:
    string _name;
    string _brand;
//    Name(string x, string y)
//    {
//        _name = x;
//        _brand = y;
//    }

};

class Engine{
public:
    string _kind;
//    Engine(string x, int y)
//    {
//        _kind = x;
//        _topspeed = y;
//
//    }
};


class Vehicle
{
public:
    Name name;
    Name brand;
    int production_date;
    Engine kind;
    

    Vehicle(Name name_of_car,Name brand_name, int production_day, Engine kind_of_engine)
    {
        name = name_of_car;
        brand = brand_name;
        production_date = production_day;
        kind = kind_of_engine;
    }




};

int main(){
        Vehicle  vehicle("Clio","Renault", 2009,"gasoline",160);
};