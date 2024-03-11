//#include<iostream>
//#include<fstream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	string line;
//	int count = 0;
//	ifstream in("T3.txt");
//	ofstream in1("T3Lower.txt");
//	ofstream in2("T3Upper.txt");
//	if (in.is_open()) {
//		while (getline(in, line)) {
//			for (auto c : line) {
//				int code = static_cast<int>(c);
//				if (code >= static_cast<int>('a') && code <= static_cast<int>('z')) {
//					if (in1.is_open()) {
//						in1 << c;
//					}
//				}
//				else if (code >= static_cast<int>('A') && code <= static_cast<int>('Z')) {
//					if (in2.is_open()) {
//						in2 << c;
//					}
//				}
//				else if (code >= static_cast<int>('0') && code <= static_cast<int>('9')) {
//					count++;
//				}
//				else {
//					continue;
//				}
//			}
//		}
//	}
//	cout << "Количество цифр в файле = " << count;
//}