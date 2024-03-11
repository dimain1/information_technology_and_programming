#include <iostream>
#include <forward_list>

using namespace std;

void removeElementBeforeMinus2(forward_list<double>& myList) {
    auto prevIt = myList.before_begin();
    auto it = myList.begin();

    while (it != myList.end()) {
        if (*it == -2) {
            if (it != myList.begin()) {
                it = myList.erase_after(prevIt);
            }
        }
        else {
            ++prevIt;
            ++it;
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    forward_list<double> myList = { 1.5, -2, 3.7, -2, 4.2, -2, 6.1 };

    cout << "Исходный список: ";
    for (const auto& element : myList) {
        cout << element << " ";
    }
    cout << endl;

    removeElementBeforeMinus2(myList);

    myList.push_front(33);

    cout << "Список после удаления и вставки: ";
    for (const auto& element : myList) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
