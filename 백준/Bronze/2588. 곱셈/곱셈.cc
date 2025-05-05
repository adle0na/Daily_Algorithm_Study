#define _CRT_SECURE_NO_WARNINGS
 #include <iostream>
 #include <stdio.h>
 #include <vector>
 #include <algorithm>
 #include <numeric>
 #include <climits>
 #include <string>
 #include <ctime>
 #include <cstdio>
 #include <cmath>
 using namespace std;
 
 int main(void)
 {
 	// 이거쓰면 C++만의 독립적인 버퍼형성으로 속도 향상
 	// 단점으로는 멀티 쓰레드 환경에서는 출력 순서 보장 X C의 scanf, gets, getchar와 사용 불가
 	ios_base::sync_with_stdio(0);
 
 	// 이거 쓰면 cin과 cout의 묶음을 풀어 순서가 사라진다
 	// 화면에 보이는 순서가 중요하지 않은 알고리즘 풀때만 써야한다
 	cin.tie(0);
 
 	int A, B;
 
 	cin >> A >> B;
 
    int ones = B % 10; //1의 자리수
    int tens = (B/10) % 10; // 10의 자리
    int hund = B/100; // 100의 자리

    cout << A * ones << '\n';
    cout << A * tens << '\n';
    cout << A * hund << '\n';
    cout << A * B    << '\n';
     
    return 0;
 }