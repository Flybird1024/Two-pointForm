#include <iostream>

//  公式: y-y1 / x-x1 = y2-y1 / x2-x1
//	- > y(x2-x1) - y1(x2-x1) = x(y2-y1) - x1(y2-y1)

using namespace std;

int main()
{
	int x1, y1, x2, y2, Yxishu, integer1, Xxishu, integer2;
	cin >> x1 >> y1 >> x2 >> y2;
	Yxishu = x2 - x1;
	integer1 = y1 * Yxishu;
	Xxishu = y2 - y1;
	integer2 = x1 * Xxishu;
	cout << Yxishu << "y - " << integer1 << " = " << Xxishu << "x - " << integer2;
}