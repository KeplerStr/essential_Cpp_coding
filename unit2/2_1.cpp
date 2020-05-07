#include <iostream>
#include <windows.h>
using namespace std;

bool fibon_elem(int pos,int &elem)
{
    if (pos <= 0||pos>1024)
    {
        elem = 0;
        return false;
    }
    else
    {
        elem = 1;
        int n_1=1,n_2=1;

        for (int i = 2; i < pos; i++)
        {
            /* code */
            elem = n_1+n_2;
            n_2 = n_1;
            n_1 = elem;
        }
    }

    return true;
}


int main(void)
{
    int pos,res,elem;
    cout<<"please enter your pos\n";
    while(cin>>pos)
    {
        res = fibon_elem(pos,elem);
        if (res == false)
        {
            cout<<"err\n";
            /* code */
        }
        else
        {
            cout<<"fibon res is "<<elem<<endl;
            /* code */
        }
        
    }
    system("Pause");
    return 0;
}
