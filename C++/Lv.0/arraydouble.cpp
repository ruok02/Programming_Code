#include <string>
#include <vector>
#include <iostream> // cout을 사용하기 위해 추가

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for (int number : numbers) {
        answer.push_back(number * 2);
    }

    return answer;
}

int main() {
    vector<int> numbers1 = { 1, 2, 3, 4, 5 };
    vector<int> result1 = solution(numbers1);

    cout << "Input: [";
    for (int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i];
        if (i < numbers1.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\nOutput: [";
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i];
        if (i < result1.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n\n";

    vector<int> numbers2 = { 1, 2, 100, -99, 1, 2, 3 };
    vector<int> result2 = solution(numbers2);

    cout << "Input: [";
    for (int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i];
        if (i < numbers2.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\nOutput: [";
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i];
        if (i < result2.size() - 1) {
                cout << ", ";
            }
        }
    cout << "]\n";

    return 0;
}