#include <iostream>
using namespace std;
int main()
{
    int n,i,num,even=0,odd=0;
    cout<< "\n Enter many unmbers?";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n Enter number";
        cin>>num;
        if(num%2==0)
            even++;
        else
            odd++;
    }
    cout<<"even number="<<"\n";
    cout<<"odd number=";
    return 0;
}
