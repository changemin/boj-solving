//
// 2021-04-13
//
// Created By 변경민
//
// 3052번 : 나머지
// https://www.acmicpc.net/problem/3052
//
// * 문제
//
// 두 자연수 A와 B가 있을 때, A%!B(MISSING)는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
// 
// 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
//
// * 입력
//
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
//
// * 출력
//
// 10
//

#include <iostream>
#include <vector>
using namespace std;

bool contains(vector<int>v, int n);

int main() {
    vector<int>v;
    int cnt;

    for(int i = 0; i < 10; i ++) {
        int n; 
        cin >> n;
        n %= 42;
        if(!contains(v, n)) {
            v.push_back(n);
        }
    }
    cout << v.size() << endl;
}

bool contains(vector<int>v, int n) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == n) {
            return true;
        }
    }
    return false;
}