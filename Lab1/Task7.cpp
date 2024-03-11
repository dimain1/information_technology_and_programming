//#include <iostream>
//#include <forward_list>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    forward_list<int> myList = { 5, 12, 8, 15, 3 };
//
//    cout << "Исходный список: ";
//    for (const auto& element : myList) {
//        cout << element << " ";
//    }
//    cout << endl;
//
//    auto it = find_if(myList.begin(), myList.end(), [](int value) {
//        return value > 10;
//        });
//
//    if (it != myList.end()) {
//        myList.insert_after(it, 12);
//    }
//
//    cout << "Список после вставки числа 12: ";
//    for (const auto& element : myList) {
//        cout << element << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
