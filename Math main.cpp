#include "Math.h"
using namespace std;

int main()
{
	Math m;
	cout << m.Add(3, 5)<<endl;
  
	cout << m.Mul(3, 5)<<endl;
  
	cout << m.Mul(3, 5, 7)<endl;
  
	cout <<  m.Mul(3.5 , 5.3) <<endl;

	cout << m.Add(5, 4, 5, 6,7,8) <<endl;
	cout << m.Add("a", "b") <<endl;
}
