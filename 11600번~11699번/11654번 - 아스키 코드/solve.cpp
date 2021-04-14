//
// Created By 변경민 on 2021-04-14
//
// 11654번 : 아스키 코드
// https://www.acmicpc.net/problem/11654
//
// * 문제
//
// 알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.
//
// * 입력
//
// A
//
// * 출력
//
// 65
//

#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    
    cout << static_cast<int>(a) << endl;
}