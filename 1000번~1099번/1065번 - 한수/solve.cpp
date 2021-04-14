//
// 2021-04-14
//
// Created By 변경민
//
// 1065번 : 한수
// https://www.acmicpc.net/problem/1065
//
// * 문제
//
// 어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
//
// * 입력
//
// 110
//
// * 출력
//
// 99
//

#include <iostream>
#include <vector>

using namespace std;

bool isVectorArithmetic(vector<int> v);

int main() {
    int n = 0, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        vector<int> v;
        int tmp = i;
        while( tmp != 0 ) {
            v.push_back(tmp%10);
            tmp /= 10;
            // cout << tmp%10 << endl;
        }
        if(isVectorArithmetic(v)) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

bool isVectorArithmetic(vector<int> v) {
    int d = v[1] - v[0];
    for(int i = 0; i < v.size()-1; i++) {
        if(v[i+1]-v[i]!=d) {
            return false;
        }
    }
    return true;
}
