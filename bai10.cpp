#include <iostream>

using namespace std;

int main()
{
    long i,s=0,j;
    for (i=2;i<5000;i++)
    {   s=0;
        for (j=1;j<i;j++)
        {
            if ((i%j)==0) s=s+j;
        }
        if (i==s) cout<<i<<endl;
    }

    return 0;
}
