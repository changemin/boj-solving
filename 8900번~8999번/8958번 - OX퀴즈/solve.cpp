//
// 2021-04-13
//
// Created By 변경민
//
// 8958번 : OX퀴즈
// https://www.acmicpc.net/problem/8958
//
// * 문제
//
// "OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
// 
// "OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
// 
// OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
//
// * 입력
//
// 5
// OOXXOXXOOO
// OOXXOOXXOO
// OXOXOXOXOXOXOX
// OOOOOOOOOO
// OOOOXOOOOXOOOOX
//
// * 출력
//
// 10
// 9
// 7
// 55
// 30
//

#include <iostream>
#include <vector>
using namespace std;

int calScore(string str);

int main() {
    int n ;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        string str;
        cin >> str;
        cout << calScore(str) << endl;
    }
}

int calScore(string str) {
    int sum = 0;
    int bonus = 0;
    for (int i = 0; i < str.size(); i ++) {
        if(str[i] == 'O') {
            sum += 1 + bonus;
            bonus++;
        } else if(str[i] == 'X') {
            bonus = 0;
        }
    }
    return sum;
}
