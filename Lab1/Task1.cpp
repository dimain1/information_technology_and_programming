#include<string>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int positiveNums = 0;
    int n;
    cout << "������� ����� ������� ";
    cin >> n;
    queue<int> queueOfIntegers;
    string next;

    for (int i = 0; i < n; i++) {
        cin >> next;
        if (stoi(next) >= 0) {
            positiveNums++;
        }
        queueOfIntegers.push(stoi(next));
    }

    while (queueOfIntegers.empty() != true) {
        cout << queueOfIntegers.front() << " ";
        queueOfIntegers.pop();
    }
    cout << "\n" << "���������� ������������� ����� = " << positiveNums;
}