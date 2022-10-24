//
// Created by mrozb on 24.10.2022.
//
#include <iostream>

using namespace std;
class Pool_stick
        //it's a class of poolsticks from a mobile game " 8 ball pool "
{
public:
    int force;
    int aim;
    int spin;

    int time;
    Pool_stick(int x, int y, int z, int a)
    {
        force = x;
        aim = y;
        spin = z;
        time = a;

    }
    void print_all_traits()
    {
        cout <<"force of the cue: "<< force<<endl;
        cout <<"aim of the cue: "<< aim<<endl;
        cout <<"spin performed by cue: "<< spin<<endl;
        cout <<"time added by a cue: "<< time<<endl;
    }


};


int main()
{
    Pool_stick portugal_cue(5,5,5,4);
    Pool_stick supreme_cue(9,10,9,8);
    portugal_cue.print_all_traits();
