//
// 2021-04-13
//
// Created By 변경민
//
// 10818번 : 최소, 최대
// https://www.acmicpc.net/problem/10818
//
// * 문제
//
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
//
// * 입력
//
// 5
// 20 10 35 30 7
//
// * 출력
//
// 7 35
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    max = v[0];
    for (int i = 0; i < n ; i ++) {
        if(max <= v[i]) {
            max = v[i];
        }
    }
    cout << max << endl;
}
