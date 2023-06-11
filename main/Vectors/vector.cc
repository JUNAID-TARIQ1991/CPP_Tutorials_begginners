#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> g1;

    for (size_t i = 0; i < 5; i++)
    {
        g1.push_back(i);
        cout<<g1[i]<<endl;
        
    }
    cout<<"size "<<g1.size()<<endl;
    return 0;
}