#include<iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;
int main(){
    int n;
    vector<string> lines;
    cin >> n;
     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略当前行的剩余部分
    string line;
    for (int i = 0;i < n;++i){
        getline(cin,line);
        lines.push_back(line);
    }
    for (const auto& l : lines) {
        cout <<l<<endl;
    }
}