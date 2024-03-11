#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct ClientInfo {
    char name[50];
    float monthlyPayment;
    int paidMonths;
    int monthsAhead;
};

void createBinaryFile(const string& fileName, const ClientInfo clients[], int numClients) {
    ofstream fileOut(fileName, ios::binary);

    fileOut.write((char*)&numClients, sizeof(int));

    for (int i = 0; i < numClients; ++i) {
        fileOut.write((char*)&clients[i], sizeof(ClientInfo));
    }

    fileOut.close();
}

void modifyFile(const string& fileName) {
    ifstream fileIn(fileName, ios::binary);

    int numClients;
    fileIn.read((char*)&numClients, sizeof(int));

    ofstream fileOut("modified_" + fileName, ios::binary);

    fileOut.write((char*)&numClients, sizeof(int));

    for (int i = 0; i < numClients; ++i) {
        ClientInfo client;
        fileIn.read((char*)&client, sizeof(ClientInfo));

        if (client.monthsAhead == 5) {
            client.monthlyPayment *= 0.93;
        }

        fileOut.write((char*)&client, sizeof(ClientInfo));
    }

    fileIn.close();
    fileOut.close();
}

int main() {
    ClientInfo clients[] = {
        {"Иванов И.И.", 50.0, 3, 2},
        {"Петров П.П.", 60.0, 6, 0},
    };

    int numClients = sizeof(clients) / sizeof(ClientInfo);

    createBinaryFile("T10.bin", clients, numClients);

    modifyFile("T10.bin");

    return 0;
}
