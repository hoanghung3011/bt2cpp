#include <iostream>

using namespace std;

int main()
{
    int s=0,m,n;
    cin>>n;
    while(n>0)
    {
        m=n%10;
        s=s+m;
        n=n/10;
    }
   cout<<s;

    return 0;
}
