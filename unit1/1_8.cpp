#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main(void)
{
    string err_sta[4] = {"err 1 times","err 2 times","err 3 times","err 4 times"};
    string cmd;
    int times = 0;
    while (cin>>cmd)
    {
        if (cmd == "kepler")
        {
            cout<<"ÊäÈëÕýÈ·\n";
            times = 0;   
        }
        else
        {
            times++;
            if (times>4)
            {
                times = 1;
            }
        }

        switch (times)
        {
            case 0:
                break;
            case 1:
                cout<<err_sta[0]<<endl;
                break;
            case 2:
                cout<<err_sta[1]<<endl;
                break;
            case 3:
                cout<<err_sta[2]<<endl;
                break;
            case 4:
                cout<<err_sta[3]<<endl;
                break;
            default:
                break;
        }
    }
    system("Pause");
    
}