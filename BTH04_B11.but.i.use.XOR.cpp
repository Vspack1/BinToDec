#include <iostream>  
#include <string>  

using namespace std;

int binToDec(const string& binary) {
    int decimal = 0;
    int length = binary.length();

    // Su dung XOR
    for (int i = 0; i < length; i++) {
        decimal = (decimal << 1) ^ (binary[i] - '0'); // Dich chuyen trai va dich chuyen phai 
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Nh?p s? nh? phân: ";
    cin >> binary;

    // Check var  
    for (char bit : binary) {
        if (bit != '0' && bit != '1') {
            cout << "??u vào không h?p l?, vui lòng nh?p l?i." << endl;
            return 1;
        }
    }

    int decimal = binToDec(binary);
    cout << "S? th?p phân t??ng ?ng là: " << decimal << endl;

    return 0;
}