//
// 2021-04-13
//
// Created By 변경민
//
// 2562번 : 최댓값
// https://www.acmicpc.net/problem/2562
//
// * 문제
//
// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
// 
// 예를 들어, 서로 다른 9개의 자연수
// 
// 3, 29, 38, 12, 57, 74, 40, 85, 61
// 
// 이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
//
// * 입력
//
// 3
// 29
// 38
// 12
// 57
// 74
// 40
// 85
// 61
//
// * 출력
//
// 85
// 8
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v;
    int input;
    int maxIdx = 0;
    for(int i = 0; i < 9; i ++) {
        cin >> input;
        v.push_back(input);
        if(input > v[maxIdx]) {
            maxIdx = i;
        }
    }
    cout << v[maxIdx] << endl << maxIdx+1 << endl;
}
