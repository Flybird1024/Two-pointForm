#include <iostream>

//  公式: y-y1 / x-x1 = y2-y1 / x2-x1
//	- > y(x2-x1) - y1(x2-x1) = x(y2-y1) - x1(y2-y1)

using namespace std;

int main()
{
	int x1, y1, x2, y2, Yxishu, integer1, Xxishu, integer2, integer3;
	cout << "輸入x1、y1、x2、y2\n";
	cin >> x1 >> y1 >> x2 >> y2;
	Yxishu = x2 - x1;
	integer1 = y1 * Yxishu;
	Xxishu = y2 - y1;
	integer2 = x1 * Xxishu;
	integer3 = integer1 - integer2;
	if (Xxishu >=0 && Yxishu >= 0)
		cout << Yxishu << "y - " << Xxishu << "x = " << integer3;
	else if(Xxishu < 0 && Yxishu >=0) {
		Xxishu = -1 * Xxishu;
		cout << Xxishu << "x + " << Yxishu << "y = " << integer3;
	}
	else if (Xxishu >= 0 && Yxishu < 0) {
		Yxishu = -1 * Yxishu;
		integer3 = -1 * integer3;
		cout << Xxishu << "x + " << Yxishu << "y = " << integer3;
	}
	else if (Xxishu < 0 && Yxishu < 0) {
		Xxishu = -1 * Xxishu;
		Yxishu = -1 * Yxishu;
		cout << Xxishu << "x - " << Yxishu << "y = " << integer3;
	}
}