//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct Element {
//	int data;
//	Element* next;
//
//	Element(int value) : data(value), next(nullptr) {}
//};
//
//void enqueue(Element* &start, Element* &end, int value) {
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
//void mergeQueue(Element* &P1, Element*& P2, Element*& P3, Element*& P4) {
//	if (P3 == nullptr) {
//		P3 = P1;
//		P4 = P2;
//	}
//	else {
//		Element* newElemenet = P1;
//		while (newElemenet != nullptr) {
//			P4->next = newElemenet;
//			P4 = newElemenet;
//			newElemenet = newElemenet->next;
//		}
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
//void printAdress(Element*& P3, Element*& P4) {
//	if (P3 == nullptr) {
//		cout << "Адрес начала второй очереди " << "nil" << endl;
//		cout << "Адрес конца второй очереди " << "nil" << endl;
//	}
//	else {
//		cout << "Адрес начала второй очереди " << P3 << endl;
//		cout << "Адрес конца второй очереди " << P4 << endl;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	Element* P1 = nullptr;
//	Element* P2 = nullptr;
//	Element* P3 = nullptr;
//	Element* P4 = nullptr;
//	int n1;
//	cout << "Введите длину первой очереди = ";
//	cin >> n1;
//	cout << endl;
//	for (int i = 0; i < n1; i++) {
//		int now;
//		cin >> now;
//		enqueue(P1, P2,now);
//	}
//	int n2;
//	cout << "Введите длину второй очереди = ";
//	cin >> n2;
//	cout << endl;
//	for (int i = 0; i < n2; i++) {
//		int now;
//		cin >> now;
//		enqueue(P3, P4, now);
//	}
//
//	mergeQueue(P1, P2, P3, P4);
//	printQueue(P3);
//	printAdress(P3, P4);
//}