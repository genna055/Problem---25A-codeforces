#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    long int n;
    long int t;
    long int l;
    long int resto;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        l=n/2020;
        resto=n%2020;
        if(resto==0||resto>=0&&resto<=l)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}//
// Created by Lorenzo Gennari on 23/04/24.
//
