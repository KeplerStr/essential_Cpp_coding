#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;
#define PENT_SIZE 20

const vector<int>* pentagonal_vector(int num);
bool get_value(const vector<int>* ip,int pit);

int main(void)
{
    const vector<int>* ip;
    int pit;
    ip = pentagonal_vector(PENT_SIZE);
    cout<<"please enter your pit:"<<endl;
    while (cin>>pit)
    {
        get_value(ip,pit-1);
    }
    system("Pause");
}

bool get_value(const vector<int>* ip,int pit)
{
    if (ip&&pit>=0&&pit<PENT_SIZE)
    {
        cout<<"Pit "<<pit+1<<" value:"<<ip->at(pit)<<endl;
    }
    else
    {
        cout<<"err"<<endl;
        return false;
    }
    return true;
}

const vector<int>* pentagonal_vector(int num)
{
    static vector<int> vect;
    int fx_i;
    for (int i = 1; i <= num; i++)
    {
        fx_i = i*(i*3-1)/2;
        vect.push_back(fx_i);
    }    
    return &vect;    
}
