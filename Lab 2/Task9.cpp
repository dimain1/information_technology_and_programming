//#include <iostream>
//#include <fstream>
//#include <vector>
//
//using namespace std;
//
//void writeToFile(const string& fileName, const vector<int>& numbers) {
//    ofstream file(fileName, ios::binary);
//
//    for (int number : numbers) {
//        file.write((const char*)(&number), sizeof(int));
//    }
//
//    file.close();
//}
//
//void modifyFile(const string& fileName) {
//    ifstream fileIn(fileName, ios::binary);
//
//    ofstream fileOut("modified_" + fileName, ios::binary | ios::ate);
//
//    int number;
//    vector<int> modifiedNumbers;
//
//    cout << "Числа до изменения:" << endl;
//
//    while (fileIn.read((char*)(&number), sizeof(int))) {
//        cout << number << endl;
//        modifiedNumbers.push_back(number * 2);
//    }
//
//    cout << "Числа после изменения:" << endl;
//
//    for (int modifiedNumber : modifiedNumbers) {
//        cout << modifiedNumber << endl;
//        fileOut.write((const char*)(&modifiedNumber), sizeof(int));
//    }
//
//    fileIn.close();
//    fileOut.close();
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    vector<int> numbers;
//
//    int num;
//    cout << "Введите целые числа (для завершения введите 0):" << endl;
//    do {
//        cin >> num;
//        numbers.push_back(num);
//    } while (num != 0);
//
//    numbers.pop_back();
//
//    writeToFile("T9_1.bin", numbers);
//    modifyFile("T9_1.bin");
//
//    return 0;
//}
