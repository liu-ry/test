#include<iostream>
using namespace std;

/*  File name:  Test1
**  Author:  刘仁雨
**  Time:  2021/8/2
**  Description:  找出小于输入数n的所有质数
*/

bool is_prime(int n) {
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

int main() {
    cout << "请输入一个整数:" << endl;
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        if (is_prime(i)) {
            cout << i << " 是质数！" << endl;
        }
    }
    system("pause");
    return 0;
}