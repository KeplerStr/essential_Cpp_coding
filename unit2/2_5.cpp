#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <algorithm>
#include <functional>
using namespace std;

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

string max(string str1,string str2)
{
    if(str1.size()>str2.size())
    {
        return str1;
    }
    return str2;
}

int max(vector<int> vect)
{
    sort(vect.begin(),vect.end(),greater<int>());
    return vect[0];
}

double max(vector<double> vect)
{
    sort(vect.begin(),vect.end(),greater<double>());
    return vect[0];
}

string max(vector<string> vect)
{
    sort(vect.begin(),vect.end(),greater<string>());
    return vect[0];
}

int max(int num[],int n)
{
    vector<int> vect(num,num+n);
    sort(vect.begin(),vect.end(),greater<int>());
    return vect[0];
}

double max(double num[],int n)
{
    vector<double> vect(num,num+n);
    sort(vect.begin(),vect.end(),greater<double>());
    return vect[0];
}

string max(string num[],int n)
{
    vector<string> vect(num,num+n);
    sort(vect.begin(),vect.end(),greater<string>());
    return vect[0];
}

int main()
{
    int num[3] = {1,3,4};
    double f_num[3] = {1.2,3.4,2.3};
    
    string str[3] = {"hello","apple","book"};
    cout<<max(num,3)<<endl;
    cout<<max(f_num,3)<<endl;
    
    cout<<max(str,3)<<endl;
    system("Pause");   
}