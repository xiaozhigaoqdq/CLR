#include<iostream>
#include<string>
using namespace std;

bool Login(string& username, string& password) {
    cout << "���ڵ�¼��";
    for (int i=0; i<1000000000; i++){
        if(i % 400000000 == 0){
             cout << ".";
        }
    }
    cout << "" << endl;
    cout << "��¼�ɹ���" << endl;
    return true;
}

bool Register(string& username, string& password) {
    string againPassword;
    cout << "�������û���:";
    cin >> username;
    cout << "���������룺";
    cin >> password;
    cout << "���ٴ��������룺";
    cin >> againPassword;
    if (password == againPassword) {
        cout << "ע��ɹ���" << endl;
        return true;
    } else {
        cout << "ע��ʧ�ܣ�" << endl;
        return false;
    }
}

int main() {
    string username, password;
    string choice;

    cout << "�������û�������δע��������reg����ע�ᣩ:";
    cin >> choice;

    if (choice == "reg") {
        if (Register(username, password)) {
            Login(username,password);
        }
    } else {
            cout << "���������룺";
            cin >> password;
        if (Login(username, password)) {
        } else {
            cout << "��¼ʧ�ܣ�" << endl;
        }
    }

    return 0;
}
