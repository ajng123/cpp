#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream testFile("integer.txt");

    for(int i=0; i<1000; i++)
    {
        int random_integer=rand();
        if (random_integer%2==0)
        {
            random_integer+=1;
        }
        testFile<<random_integer<<endl;
    }
    testFile<<0;
    testFile.close();
}