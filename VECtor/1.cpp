#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> names;
    vector<int> temp;
    temp.push_back(3);
    temp.push_back(4);
    temp.push_back(6);

    names.push_back(temp);
    for (int i = 0; i < names.size(); i++)
    {
        cout<<names[i];
    }
    
    return 0;
}