#include<iostream>
#include <iomanip>
using namespace std;

/*  File name:  Test2
**  Author:  ������
**  Time:  2021/8/2
**  Description:  ʵ��С����ָ��λ��ȡ��
*/

double MyRound(double dvalue, int nplace) {
    long long temp = dvalue * (double)pow(10, nplace);
    double res = (double)temp / (double)pow(10, nplace);
    return res;
}

int main() {
    double dvalue;
    int nplace;
    cout << "������һ��˫��������" << endl;
    cin >> dvalue;
    cout << "������һ��������" << endl;
    cin >> nplace;
    double res = MyRound(dvalue, nplace);
    cout << "����С���������Ϊ�� " << setprecision(nplace) << fixed << res << endl;
    system("pause");
    return 0;
}