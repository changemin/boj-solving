//
// 2021-04-13
//
// Created By 변경민
//
// 10951번 : A+B - 4
// https://www.acmicpc.net/problem/10951
//
// * 문제
//
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//
// * 입력
//
// 1 1
// 2 3
// 3 4
// 9 8
// 5 2
//
// * 출력
//
// 2
// 5
// 7
// 17
// 7
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    while(true) {
       cin >> a >> b;
       if(cin.eof() == true) {
           break;
       }
       cout << a + b << endl;
   }
}
