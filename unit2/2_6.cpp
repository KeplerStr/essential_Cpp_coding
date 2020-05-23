#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <windows.h>
using namespace std;

template <typename T1,typename T2>
T1 max(vector<T2> vect)
{
    sort(vect.begin(),vect.end(),greater<T2>());
    return static_cast<T1>(vect[0]);
}

template <typename T1,typename T2>
T1 max(const T2 xvect[],int n)
{
    vector<T2> vect(xvect,xvect+n);
    sort(vect.begin(),vect.end(),greater<T2>());
    return static_cast<T1>(vect[0]);
}

int main(void)
{
    int ivec[3] = {1,3,4};
    vector<int> wvec;
    wvec.push_back(1);
    wvec.push_back(3);
    wvec.push_back(0);
    cout<<max<int,int>(ivec,3)<<endl;
    cout<<max<int,int>(wvec)<<endl;
    system("Pause");
}
