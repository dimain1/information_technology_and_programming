//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//struct Owner {
//    std::string lastName;
//    std::string firstName;
//    std::string middleName;
//    std::string address;
//    std::string phoneNumber;
//};
//
//std::vector<Owner> getOwners(const std::string& filePath) {
//    std::vector<Owner> owners;
//    std::ifstream file(filePath);
//
//    if (!file.is_open()) {
//        std::cerr << "Unable to open file." << std::endl;
//        return owners;
//    }
//
//    std::string line;
//    while (std::getline(file, line)) {
//        std::istringstream iss(line);
//        Owner owner;
//        std::getline(iss, owner.lastName, ';');
//        std::getline(iss, owner.firstName, ';');
//        std::getline(iss, owner.middleName, ';');
//        std::getline(iss, owner.address, ';');
//        std::getline(iss, owner.phoneNumber, ';');
//        owners.push_back(owner);
//    }
//
//    file.close();
//    return owners;
//}
//
//void writeOwners(const std::vector<Owner>& owners, const std::string& outputPath) {
//    std::ofstream outFile(outputPath);
//
//    if (outFile.is_open()) {
//
//        for (const auto& owner : owners) {
//            if (owner.phoneNumber.find("720") == 0) {
//                outFile << owner.lastName << ';' << owner.firstName << ';' << owner.middleName << ';'
//                    << owner.address << ';' << owner.phoneNumber << '\n';
//            }
//        }
//
//        outFile.close();
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    std::string input;
//    cout << "¬ведите путь до исходнго файла ";
//    cin >> input;
//    std::string output;
//    cout << "¬ведите путь до результирующего файла ";
//    cin >> output;
//
//
//    std::vector<Owner> allOwners = getOwners(input);
//
//    if (!allOwners.empty()) {
//        writeOwners(allOwners, output);
//    }
//
//    return 0;
//}