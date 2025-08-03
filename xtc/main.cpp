#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //打开hosts文件，需要管理员权限
    ofstream hostsFile;
    hostsFile.open("C:\\Windows\\System32\\drivers\\etc\\hosts", ios::app);
    
    if (!hostsFile.is_open())
    {
        cout << "无法打开hosts文件，请以管理员身份运行程序" << endl;
        return 1;
    }
    
    //添加的内容
    string newEntry = "\nelevenwsn.github.io static.watch.okii.com";
    
    //写入
    hostsFile << newEntry;
    
    //关闭
    hostsFile.close();
    
    cout << "已成功添加内容到hosts文件" << endl;
    
    return 0;
}