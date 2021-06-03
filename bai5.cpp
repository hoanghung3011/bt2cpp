
#include <iostream>

using namespace std;

int
main ()
{
  int i, s = 1, t = 0, n, j;
  cout << "Nhap n" << endl;
  cin >> n;
  for (i = 1; i < n+1; i++)
    { s=1;
      for (j = 1; j <i+1; j++)
	s = s * j;
      t = t + s;
    }
  cout << "Tong = " << t;
  return 0;
}
