#include <iostream>

using namespace std;



class Computer{
    public:
    int ram;
    int gpu;
    
    

};
class Student : public Computer {
    public:
    string name;
    float height;
    int age;
    void play(int gpu){
        if (gpu <=960) cout<< "720p więc "<<name << "jest smutny";
        else if (gpu >=970) cout<< "1080p więc "<<name<<"jest szczęśilwy";
    }
};


int main()
{
    Computer computer1;
    computer1.ram = 8;
    computer1.gpu = 980;
    
    Student student1;
    student1.name = "Karol";
    student1.height = 1.80;
    student1.age = 19;
     
    
    student1.play(computer1.gpu);

    return 0;
}
