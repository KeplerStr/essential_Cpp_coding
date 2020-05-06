#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(void)
{
    string first_name,last_name;
    cout<<"please entern your name\n";
    cin>>last_name;
    cin>>first_name;
    cout<<"Hello,"<<last_name<<" "<<first_name<<"...,and goodbye\n";
    
    system("Pause");
    return 0;
}