#include <iostream>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class Point{
        int x;
        int y;
};

class Shape{
    Point position;
    virtual void draw()=0;
};

class Circle: public Shape{
    float radius;
public :
    Circle(float x){
    radius=x;
}
virtual  void draw(){
    ;
}
//drawing implemented soon
};

class Square: public Shape{

    float a_side;
public :
    Square(float x){
        a_side = x;
    }
    virtual  void draw(){
        ;
    }
//drawing implemented soon
};