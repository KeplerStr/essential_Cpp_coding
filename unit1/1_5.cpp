#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(void)
{
    char cname[2];
    string name;
    cout<<"please enter your name\n";
    cin>>name;
    cin>>cname;

    if(name.length()>2)
    {
        cout<<"My name is "<<name<<".\n";
    }

    if (strlen(cname)>2)
    {
        cout<<"My cname is "<<cname<<".\n";
    }
    
    system("Pause");
    return 0;
}

