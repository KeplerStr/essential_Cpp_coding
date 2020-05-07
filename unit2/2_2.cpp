#include <iostream>
#include <windows.h>
#include <vector>
#include <string>

using namespace std;

bool pentagonal_get(int num,vector<int> &vect)
{
    int fx_i;
    if (num<=0 || num>1024)
    {
        return false;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fx_i = i*(i*3-1)/2;
            vect.push_back(fx_i);
        }
    }
    return true;
}

bool vect_printf(vector<int> &vects,string type_str)
{
    cout<<"The type "<<type_str<<" and the pentagonal is:"<<endl;
    for (int i = 0; i < vects.size(); i++)
    {
        cout<<vects[i]<<" ";
    }
    cout<<endl<<endl;
    return true;
}

int main(void)
{
    vector<int> vect;

    bool res;
    int num;
    cout<<"please enter num"<<endl<<endl;
    
    while (cin>>num)
    {
        res = pentagonal_get(num,vect);

        if (res == false)
        {
            cout<<"overflow"<<endl;
        }
        else
        {
            vect_printf(vect,"int");
        }
        vector<int>().swap(vect);
    }

    return 0;
}

