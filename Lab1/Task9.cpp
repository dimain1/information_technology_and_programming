//#include <iostream>
//#include <list>
//
//void insert25BeforePositive(std::list<int>& myList) {
//    auto it = myList.begin();
//
//    while (it != myList.end()) {
//        if (*it > 0) {
//            it = myList.insert(it, 25);
//            ++it;  
//        }
//        ++it;
//    }
//}
//
//void removeNegatives(std::list<int>& myList) {
//    myList.remove_if([](int value) { return value < 0;});
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    std::list<int> myList = { 3, -2, 8, -5, 10 };
//
//    std::cout << "Исходный список: ";
//    for (const auto& element : myList) {
//        std::cout << element << " ";
//    }
//    std::cout << std::endl;
//
//    insert25BeforePositive(myList);
//
//    removeNegatives(myList);
//
//    std::cout << "Список после вставки и удаления: ";
//    for (const auto& element : myList) {
//        std::cout << element << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
