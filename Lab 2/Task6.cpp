//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    std::ifstream inputFile("f.txt", std::ios::binary);
//    std::ofstream outputFile("g.txt", std::ios::binary);
//    if (inputFile.is_open() && outputFile.is_open()) {
//        
//        string line;
//        while (getline(inputFile, line)) {
//            outputFile << line;
//        }
//
//        inputFile.close();
//        outputFile.close();
//    }
//
//    return 0;
//}