#include<iostream>
#include<string>
using namespace std;

bool Login(string& username, string& password) {
    cout << "ÕýÔÚµÇÂ¼ÖÐ";
    for (int i=0; i<1000000000; i++){
        if(i % 400000000 == 0){
             cout << ".";
        }
    }
    cout << "" << endl;
    cout << "µÇÂ¼³É¹¦£¡" << endl;
    return true;
}

bool Register(string& username, string& password) {
    string againPassword;
    cout << "ÇëÊäÈëÓÃ»§Ãû:";
    cin >> username;
    cout << "ÇëÊäÈëÃÜÂë£º";
    cin >> password;
    cout << "ÇëÔÙ´ÎÊäÈëÃÜÂë£º";
    cin >> againPassword;
    if (password == againPassword) {
        cout << "×¢²á³É¹¦£¡" << endl;
        return true;
    } else {
        cout << "×¢²áÊ§°Ü£¡" << endl;
        return false;
    }
}

int main() {
    string username, password;
    string choice;

    cout << "ÇëÊäÈëÓÃ»§Ãû£¨ÈçÎ´×¢²áÇëÊäÈëreg½øÐÐ×¢²á£©:";
    cin >> choice;

    if (choice == "reg") {
        if (Register(username, password)) {
            Login(username,password);
        }
    } else {
            cout << "ÇëÊäÈëÃÜÂë£º";
            cin >> password;
        if (Login(username, password)) {
        } else {
            cout << "µÇÂ¼Ê§°Ü£¡" << endl;
        }
    }

    return 0;
}
