#include<iostream>
using namespace std;

/*  File name:  Test1
**  Author:  ������
**  Time:  2021/8/2
**  Description:  �ҳ�С��������n����������
*/

bool is_prime(int n) {
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

int main() {
    cout << "������һ������:" << endl;
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        if (is_prime(i)) {
            cout << i << " ��������" << endl;
        }
    }
    system("pause");
    return 0;
}