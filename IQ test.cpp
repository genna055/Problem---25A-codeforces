#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    int index_x,index_y;
    int x=0,y=0;
    for(int i=0;i<n;i++) {
       cin>>num;
       if(num%2==0)
       {
           x++;
           index_x=i+1;
       }
       else
       {
           y++;
           index_y=x+1;
       }

    }
    if(x==1)
        cout<<index_x;
    else
        cout<<index_y;

    return 0;
}