//#include <iostream>
//
//
//struct Element {
//    int data;
//    Element* prev;
//    Element* next;
//
//    Element(int value) : data(value), prev(nullptr), next(nullptr) {}
//};
//
//Element* removeOddNodes(Element* head) {
//    Element* current = head;
//    Element* newHead = nullptr; 
//    Element* tail = nullptr;    
//
//    while (current != nullptr) {
//        Element* nextNode = current->next; 
//
//        if (current->data % 2 == 0) {
//            Element* newNode = new Element(current->data);
//
//            if (newHead == nullptr) {
//                newHead = newNode;
//                tail = newNode;
//            }
//            else {
//                tail->next = newNode;
//                newNode->prev = tail;
//                tail = newNode;
//            }
//        }
//
//        delete current;
//
//        current = nextNode; 
//    }
//
//    return newHead;
//}
//
//void printList(Element* head) {
//    while (head != nullptr) {
//        std::cout << head->data << " ";
//        head = head->next;
//    }
//    std::cout << std::endl;
//}
//
//void deleteList(Element*& head) {
//    while (head != nullptr) {
//        Element* temp = head;
//        head = head->next;
//        delete temp;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    Element* head = new Element(1);
//    head->next = new Element(2);
//    head->next->prev = head;
//    head->next->next = new Element(3);
//    head->next->next->prev = head->next;
//    head->next->next->next = new Element(4);
//    head->next->next->next->prev = head->next->next;
//    head->next->next->next->next = new Element(5);
//    head->next->next->next->next->prev = head->next->next->next;
//
//    std::cout << "Исходный список: ";
//    printList(head);
//
//    head = removeOddNodes(head);
//
//    if (head != nullptr) {
//        std::cout << "Преобразованный список: ";
//        printList(head);
//    }
//    else {
//        std::cout << "nil" << std::endl;
//    }
//
//    deleteList(head);
//
//    return 0;
//}
