#include "NumberList.h"
using namespace std;

int main()
{
   NumberList v;
	int a[10], n;
    cin >> n;
    v.Init();
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.Add(a[i]);
    }
    v.Sort();
    v.Print();

}
