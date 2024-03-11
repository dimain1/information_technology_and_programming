//#include<iostream>
//
//using namespace std;
//
//struct Element {
//	double data;
//	Element* next;
//
//	Element(double value) : data(value), next(nullptr) {}
//};
//
//void enqueue(Element* &start, Element* &end, double value ) {
//	Element* newElement = new Element(value);
//	if (start == nullptr) {
//		start = end = newElement;
//	}
//	else {
//		end->next = newElement;
//		end = newElement;
//	}
//}
//
//void dequeue(Element* &start) {
//	if (start == nullptr) {
//		cout << "Очередь пуста ";
//	}
//	else {
//		Element* temp = start;
//		start = start->next;
//		delete temp;
//	}
//}
//
//void printQueue(Element*& start) {
//	Element* now = start;
//	while (now != nullptr) {
//		cout << now->data << " ";
//		now = now->next;
//	}
//	cout << endl;
//}
//
//void sumNegativeNumber(Element*& start) {
//	Element* now = start;
//	double sum = 0;
//	while (now != nullptr) {
//		if (now->data < 0) {
//			sum += now->data;
//		}
//		now = now->next;
//	}
//	cout << "Сумма отрицательных чисел = " << sum;
//}
//
//void main() {
//	setlocale(LC_ALL, "ru");
//
//	Element* start = nullptr;
//	Element* end = nullptr;
//
//	enqueue(start, end, -2.1);
//	enqueue(start, end, 1.3);
//	enqueue(start, end, -1.34);
//	enqueue(start, end, 3.3);
//	
//	printQueue(start);
//
//	dequeue(start);
//
//	enqueue(start, end, 2.9);
//
//	printQueue(start);
//
//	sumNegativeNumber(start);
//}
