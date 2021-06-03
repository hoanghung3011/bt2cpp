#include <iostream>

using namespace std;

int
main ()
{
  int n, i;
  bool d = true;
  cin >> n;
  if (n <= 1)
    cout << "Khong phai so nguyen to";
  else
    {
      for (i = 2; i < n; i++)
	if ((n % i) == 0)
	  d = false;

      if (d)
	cout << "La so nguyen to";
      else
	cout << "Khong phai so nguyen to";
    }

}
