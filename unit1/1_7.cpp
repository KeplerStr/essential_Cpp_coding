#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ifstream infile("./unit1/test.txt");
    ofstream outfile("./unit1/out_test.txt");
    string temp_word;
    //vector<char> words;
    vector<string> wordstring;
    if (!infile)
    {
        cout<<"file can't open";/* code */
    }
    else
    {
        while (infile>>temp_word)
        {   
            wordstring.push_back(temp_word);           
        }
        infile.close();
    }
    for (size_t i = 0; i < wordstring.size(); i++)
    {
        cout<<wordstring[i]<<" ";/* code */
    }
    cout<<endl;
    sort(wordstring.begin(),wordstring.end());
    
    if(!outfile)
    {
        cout<<"无法打开文件";
    }
    else
    {
        for (size_t i = 0; i < wordstring.size(); i++)
        {
            outfile<<wordstring[i]<<" ";
        }
        outfile.close();
    }
    
    system("Pause");
    return 0;    
}
