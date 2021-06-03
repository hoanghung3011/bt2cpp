#include <iostream>

using namespace std;

int main()
{
    int i,n,j;
    bool d = true;
    cin>>n;
    for (i=2;i<n;i++)
    {   d=true;
        for (j = 2; j < i; j++)
            if ((i % j) == 0)
            d = false;
        if (d) cout<<i<<endl;
    }
    return 0;
}
