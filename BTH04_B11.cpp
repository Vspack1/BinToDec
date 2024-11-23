#include <iostream>  
#include <string>  
#include <cmath>  

using namespace std;  

int binToDec(const string& binary) {
    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Nh?p s? nh? phân: ";
    cin >> binary;

    // Kiem tra dau vao  
    for (char bit : binary) {
        if (bit != '0' && bit != '1') {
            cout << "Nhap sai roi nhap lai di :3 ." << endl;
            return 1;
        }
    }

    int decimal = binToDec(binary);
    cout << "So thap phan tuong ung la : " << decimal << endl;

    return 0;
}