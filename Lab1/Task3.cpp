//#include<string>
//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//
//struct Element {
//    string value;
//    Element* next;
//    Element(string data) : value(data), next(nullptr){}
//};
//void enqueue(Element* &start, Element* &end, string value) {
//    Element* newElement = new Element(value);
//    if (start == nullptr) {
//        start = newElement;
//        end = newElement;
//    }
//    else {
//        end->next = newElement;
//        end = newElement;
//    }
//}
//void printQueue(Element* start) {
//    Element now = *start;
//    if (start == nullptr) {
//        cout << "Очередь пуста";
//    }
//    else {
//        while(now.next != nullptr) {
//            cout << now.value << " ";
//            now = *now.next;
//        }
//        cout << now.value << endl;
//
//    }
//}
//void dequeue(Element* &start, Element* &end) {
//    if (start == nullptr) {
//        cout << "Очередь пуста";
//    }
//    else {
//        Element* temp = start;
//        start = start->next;
//        delete temp;
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "ru");
//
//    Element* start = nullptr;
//    Element* end = nullptr;
//    
//    enqueue(start, end, "one");
//    enqueue(start, end, "two");
//    enqueue(start, end, "three");
//    enqueue(start, end, "four");
//
//    printQueue(start);
//
//    dequeue(start,end);
//
//    enqueue(start, end, "five");
//
//    printQueue(start);
//
// }