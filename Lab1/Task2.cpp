#include<string>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    struct Mountain {
        std::string name;
        int height;
    };

    int count = 0;
    std::stack<Mountain> mountainStack;
    cout << "Введите количество гор ";
    cin >> count;
    string moutainName = "";
    int mountainHeight = 0;
    for (int i = 0; i < count; i++) {
        cout << "Введите название горы ";
        cin >> moutainName;
        cout << "Введите высоту горы ";
        cin >> mountainHeight;
        mountainStack.push({ moutainName, mountainHeight });
    }


    int totalHeight = 0;

    while (!mountainStack.empty()) {
        Mountain curMountain = mountainStack.top();
        totalHeight += curMountain.height;

        std::cout << "Гора: " << curMountain.name << ", Высота: " << curMountain.height << std::endl;

        mountainStack.pop();
    }

    if (count > 0) {
        float averHeight = static_cast<float>(totalHeight) / count;
        std::cout << "Средняя Высота: " << averHeight << std::endl;
    }
    
}
