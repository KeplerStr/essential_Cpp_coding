#include <iostream>
#include <windows.h>

using namespace std;

int fibon_elem(int pos)
{
    int elem = 1;
    int n_1=1,n_2=1;
    
    if(pos==0)
    {
        elem = 0;
    }
    else
    {
        for (int i = 2; i < pos; i++)
        {
            /* code */
            elem = n_1+n_2;
            n_2 = n_1;
            n_1 = elem;
        }
    }
    return elem;
}

int main(void)
{
    int pos;
    int res;
    cout<<"please enter your pos\n";
    while(cin>>pos)
    {
        res = fibon_elem(pos);    
        cout<<"fibon res is "<<res<<endl;
    }

    system("Pause");
    return 0;
}
