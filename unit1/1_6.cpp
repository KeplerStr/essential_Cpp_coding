#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

#define num_size 10

int main()
{
    int num[num_size];
    int sum_num=0;
    int v_sum = 0;
    cout<<"please enter num\n";
    for (size_t i = 0; i < 10; i++)
    {
        cin>>num[i];
        sum_num = sum_num + num[i];
    }
    cout<<"over\n";
    cout<<"sum_num is "<<sum_num<<".\n";
    cout<<"avg_num is "<<sum_num/num_size<<".\n";

    vector<int> v_num(num,num+num_size);

    for (size_t i = 0; i < 10; i++)
    {
        v_sum = v_sum + v_num[i];
    }
    cout<<"v_sum is "<<v_sum<<".\n";
    cout<<"v_avg is "<<v_sum/num_size<<".\n";
    system("Pause");
    return 0;
}
