//
// Created By 변경민 on 2021-04-14
//
// 11720번 : 숫자의 합
// https://www.acmicpc.net/problem/11720
//
// * 문제
//
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
//
// * 입력
//
// 1
// 1
//
// * 출력
//
// 1
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    string p;
    int sum = 0;
    cin >> n >> p;
    for(int i = 0; i < p.size(); i++) {
        sum += static_cast<int>(p[i]);
        cout << static_cast<int>(p[i])-48 << endl;
    }
    cout << sum << endl;
}
