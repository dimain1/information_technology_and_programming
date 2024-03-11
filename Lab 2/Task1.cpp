//#include<iostream>
//#include<string>
//#include<fstream>
//#include<vector>
//using namespace std;
//
//vector<float> split(const string& str, const char& ch);
//
//int main() 
//{
//	string line;
//    int zero = 0;
//    float sumNegative = 0;
//	ifstream in("a.txt");
//	if (in.is_open()) 
//    {
//		while (getline(in, line)) 
//        {
//            for (auto c : split(line, ' '))
//            {
//                if (c == 0)
//                {
//                    zero++;
//                }
//                else if (c < 0) {
//                    sumNegative+= c;
//                }
//                else {
//                    continue;
//                }
//            }
//            
//		}
//        in.close();
//	}
//    cout << "Zero numbers = " << zero << endl;
//    cout << "Sum negative numbers = " << sumNegative << endl;
//}
//vector<float> split(const string& str, const char& ch)
//{
//    string next;
//    vector<float> result;
//
//    for (string::const_iterator it = str.begin(); it != str.end(); it++) {
//        if (*it == ch) {
//            if (!next.empty()) {
//                result.push_back(stof(next));
//                next.clear();
//            }
//        }
//        else {
//            next += *it;
//        }
//    }
//    if (!next.empty())
//        result.push_back(stof(next));
//    return result;
//}