#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    // 두 분수를 더합니다.
    int numerator = numer1 * denom2 + numer2 * denom1;
    int denominator = denom1 * denom2;

    // 최대공약수를 구합니다.
    int common_divisor = gcd(numerator, denominator);

    // 분자와 분모를 최대공약수로 나누어 기약 분수로 만듭니다.
    numerator /= common_divisor;
    denominator /= common_divisor;

    vector<int> answer = { numerator, denominator };
    return answer;
}

int main() {
    int numer1_1 = 1;
    int denom1_1 = 2;
    int numer2_1 = 3;
    int denom2_1 = 4;
    vector<int> result1 = solution(numer1_1, denom1_1, numer2_1, denom2_1);
    cout << "[" << result1[0] << ", " << result1[1] << "]" << endl; // 출력: [5, 4]

    int numer1_2 = 9;
    int denom1_2 = 2;
    int numer2_2 = 1;
    int denom2_2 = 3;
    vector<int> result2 = solution(numer1_2, denom1_2, numer2_2, denom2_2);
    cout << "[" << result2[0] << ", " << result2[1] << "]" << endl; // 출력: [29, 6]

    return 0; // 프로그램이 정상적으로 종료되었음을 알림
}