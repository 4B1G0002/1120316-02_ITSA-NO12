// 1120316-02_ITSA NO12.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// ITSA 題目12. 遞迴程式練習

#include <iostream>   
using namespace std;

int f(int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    }
    else if (n > 1) {
        return f(n - 1) + f(n / 2);
    }
}

int main() {
    //ios::sync_with_stdio(0);  
    //cin.tie(0);  
    int n;
    cin >> n;
    cout << f(n) << "\n";

    return 0;
}
