//#include <iostream>
//#include <forward_list>
//
//using namespace std;
//
//void insertTenAfterNegatives(forward_list<int>& mylist) {
//    auto itPrev = mylist.before_begin(); 
//    auto it = mylist.begin(); 
//
//    while (it != mylist.end()) {
//        if (*it < 0) {
//            it = mylist.insert_after(it, 10);
//            ++it; 
//        }
//        else {
//            itPrev = it;
//            ++it;
//        }
//    }
//}
//
//void printList(const forward_list<int>& mylist) {
//    for (const auto& element : mylist) {
//        cout << element << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    forward_list<int> mylist = { 1, -2, 3, -4, 5 };
//
//    cout << "Исходный список: ";
//    printList(mylist);
//
//    insertTenAfterNegatives(mylist);
//
//    cout << "Список после вставки числа 10: ";
//    printList(mylist);
//
//    return 0;
//}
