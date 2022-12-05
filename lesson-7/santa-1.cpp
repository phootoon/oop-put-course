#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;

int main() {
    fstream newfile;
    string table[100];
    int x;
    for (int i = 0; i<100;i++){
        table[i] = "stop";
    }


    newfile.open("C:\\Users\\mrozb\\CLionProjects\\untitled\\obiektowe\\lab7\\san1.txt", ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()) {   //checking whether the file is open
        string tp;
        int i = 0;
        while (getline(newfile, tp)) { //read data from file object and put it into string.
            if (tp == "") {
                tp = "stop";
            }
            table[i] = tp; //print the data of the string
//            cout << i, "\n";
            i++;
//            cout << tp << ""; //print the data of the string
        }
        i = 0;
        newfile.close(); //close the file object.
    }

    int sumtable[20]{0};
    int i = 0;
    for (i=0;i<100;i++) {
    cout << table[i]<<endl;
    }
    i = 0;

        while (i < 100)
            if (table[i] == "stop") {
                cout << "przecinek" << endl;
                i++;
                x = x+1;
            }

            else {
                cout << table[i]<<endl;
                i++;
                int help;
                cout << table[i];
                help = stoi(table[i]);
                sumtable[x] = sumtable[x] + help;
                i++;

            }


        for (i = 0; i < 20; i++) {
            cout << sumtable[i]<<endl;
    }


}
