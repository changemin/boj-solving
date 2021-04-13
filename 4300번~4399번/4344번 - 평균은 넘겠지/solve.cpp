//
// 2021-04-13
//
// Created By 변경민
//
// 4344번 : 평균은 넘겠지
// https://www.acmicpc.net/problem/4344
//
// * 문제
//
// 대학생 새내기들의 90%!는(MISSING) 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
//
// * 입력
//
// 5
// 5 50 50 70 80 100
// 7 100 95 90 80 70 60 50
// 3 70 90 80
// 3 70 90 81
// 9 100 99 98 97 96 95 94 93 91
//
// * 출력
//
// 40.000%!
// 57.143%!
// 33.333%!
// 66.667%!
// 55.556%!
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr[n];
    for (int i = 0; i < n ; i ++) {
        int n2;
        cin >> n2;
        for (int j = 0; j < n2; j++) {
            int tmp;
            cin >> tmp;
            arr[i].push_back(tmp);
        }
    }
    for(int i = 0; i < n ; i++) {
        float sum = 0.0;
        for(int j = 0 ; j < arr[i].size(); j++) {
            sum += arr[i][j];
        }
        float avg = sum/arr[i].size();
        float overAvgCnt = 0.0;
        for(int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] > avg) {
                overAvgCnt += 1.0;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << (overAvgCnt/arr[i].size())*100 << "%" << endl;
    }
}
