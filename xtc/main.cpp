#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // 打开hosts文件(需要管理员权限)
    ofstream hostsFile;
    hostsFile.open("C:\\Windows\\System32\\drivers\\etc\\hosts", ios::app);
    
    if (!hostsFile.is_open()) {
        cout << "无法打开hosts文件，请以管理员身份运行程序" << endl;
        return 1;
    }
    
    // 要添加的内容
    string newEntry = "\n127.0.0.1 xxx.com";
    
    // 写入内容
    hostsFile << newEntry;
    
    // 关闭文件
    hostsFile.close();
    
    cout << "已成功添加内容到hosts文件" << endl;
    
    return 0;
}