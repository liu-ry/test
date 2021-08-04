#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/*  File name:  Test3
**  Author:  刘仁雨
**  Time:  2021/8/2
**  Description:  使用递归和非递归方法实现快速排序。
*/

//递归写法
void sort_rec(vector<int>& vec,int l,int r) {
    if (l >= r) return;
    int pri = vec[l];
    int i = l, j = r;
    while (i < j) {
        while (i < j && vec[j]>=pri) {
            j--;
        }
        if(i<j) vec[i++] = vec[j];
        while (i<j && vec[i]<pri) {
            i++;
        }
        if (i<j) vec[j--] = vec[i];
    }
    vec[i] = pri;
    sort_rec(vec, l, j-1);
    sort_rec(vec, j+1, r);
}


//非递归方法
int help(vector<int>& vec, int l, int r) {
    int pri = vec[l];
    int i = l, j = r;
    while (i < j) {
        while (i < j && vec[j] >= pri) {
            j--;
        }
        if (i < j) vec[i++] = vec[j];
        while (i < j && vec[i] < pri) {
            i++;
        }
        if (i < j) vec[j--] = vec[i];
    }
    vec[i] = pri;
    return i;
}

void sort_nrec(vector<int>& vec,int l,int r) {
    queue<int> que;
    int place = help(vec, l, r);
    if (place - 1 > l) {
        que.push(l);
        que.push(place - 1);
    }
    if (place + 1 < r) {
        que.push(place + 1);
        que.push(r);
    }
    while (!que.empty()) {
        int n = que.size();
        while (n > 0) {
            l = que.front();
            que.pop();
            n--;
            r = que.front();
            que.pop();
            n--;
            place = help(vec, l, r);
            if (place - 1 > l) {
                que.push(l);
                que.push(place - 1);
            }
            if (place + 1 < r) {
                que.push(place + 1);
                que.push(r);
            }
        }
    }
}

int main() {
    int n, num;
    cout << "请输入待排序的个数：" << endl;
    cin >> n;
    vector<int> vec;
    cout << "请输入 " << n << " 个数：" << endl;
    while (n-- > 0) {
        cin >> num;
        vec.push_back(num);
    }
    //递归与非递归方法的调用一致
    void(*p)(vector<int>& vec, int l, int r);
    //p = sort_rec;//调用递归写法
    p = sort_nrec;//调用非递归写法
    p(vec,0,vec.size()-1);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << ' ';
    }
    cout << endl;
    system("pause");
    return 0;
}