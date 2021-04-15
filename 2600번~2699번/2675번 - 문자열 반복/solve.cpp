//
// Created By 변경민 on 2021-04-15
//
// 2675번 : 문자열 반복
// https://www.acmicpc.net/problem/2675
//
// * 문제
//
// 문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다.
// 
// QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%!(BADWIDTH)%!+(MISSING)-./: 이다.
//
// * 입력
//
// 2
// 3 ABC
// 5 /HTP
//
// * 출력
//
// AAABBBCCC
// /////HHHHHTTTTTPPPPP
//

#include <iostream>
#include <vector>
using namespace std;

void printNewString(int r, string s);

int main() {
    int n;
    cin >> n;
    vector<string> str;
    vector<int> cnt;
    for(int i = 0; i < n; i++) {
        int r;        
        string s;
        cin >> r >> s;
        str.push_back(s);
        cnt.push_back(r);
    }
    for(int i = 0; i < n ; i++) {
        printNewString(cnt[i], str[i]);
    }
}

void printNewString(int r, string s) {
    for(int i = 0; i < s.size(); i ++) {
        for(int j = 0; j < r; j++) {
            cout << s[i];
        }
    }
    cout << endl;
}