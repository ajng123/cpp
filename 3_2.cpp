#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream openFile("integer.txt");
    int num_odd=0, num_even=0;
    while(!openFile.eof())
    {
        int integer;
        openFile>>integer;
        if(integer%2==1)
        {
            num_odd+=1;
        } else{
            num_even+=1;
        }
    }
    cout<<"Odd:"<<num_even<<" Even:"<<num_odd;
    openFile.close();
    return 0;
}