#include<iostream>
#include <iomanip>
using namespace std;

/*  File name:  Test2
**  Author:  刘仁雨
**  Time:  2021/8/2
**  Description:  实现小数的指定位数取舍
*/

double MyRound(double dvalue, int nplace) {
    long long temp = dvalue * (double)pow(10, nplace);
    double res = (double)temp / (double)pow(10, nplace);
    return res;
}

int main() {
    double dvalue;
    int nplace;
    cout << "请输入一个双精度数：" << endl;
    cin >> dvalue;
    cout << "请输入一个整数：" << endl;
    cin >> nplace;
    double res = MyRound(dvalue, nplace);
    cout << "精度小调整后的数为： " << setprecision(nplace) << fixed << res << endl;
    system("pause");
    return 0;
}