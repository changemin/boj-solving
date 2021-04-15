//
// Created By 변경민 on 2021-04-14
//
// 10809번 : 알파벳 찾기
// https://www.acmicpc.net/problem/10809
//
// * 문제
//
// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
//
// * 입력
//
// baekjoon
//
// * 출력
//
// 1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
//

#include <iostream>
#include <vector>
using namespace std;

int getFirstIdx(string s, char c);

int main() {
    string s;
    cin >> s;
    for(int i = 1; i <= 'z'-'a'+1; i ++) {
        cout << getFirstIdx(s, static_cast<char>(i+48)) << " ";
        // getFirstIdx(s, i+48);
    }
}

int getFirstIdx(string s, char c) {
    for(int i = 0; i < s.size(); i++) {
        // cout << s[i] << c << endl;
        if(s[i] == c) {
            return i;
        }
    }
    return -1;
}