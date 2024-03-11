//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    std::string filePath;
//    cout << "¬ведите путь до файла ";
//    cin >> filePath;
//    std::ifstream file(filePath);
//
//    if (file.is_open()) {
//
//        int value;
//        int Count = 0;
//        int sum = 0;
//        bool even = false;
//
//        while (file >> value) {
//            if (even && value > 0) {
//                sum += value;
//                Count++;
//            }
//
//            even = !even; 
//        }
//
//        file.close();
//        double result = 0;
//        if (Count > 0) {
//            result = (sum) / Count;
//        }
//
//        std::cout << "—реднее значение положительных чисел на четных позици€х: " << result << std::endl;
//    }
//    return 0;
//}