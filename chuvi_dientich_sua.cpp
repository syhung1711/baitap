#include <iostream>
using namespace std;

using std::cout;
using std::cin;

/* Ham tinh dien tích */
double calculateArea(double width, double height) {
    return width * height;
}

/* Ham tinh chu vi */
double calculatePerimeter(double width, double height) {
    return 2 * (width + height);
}

int main() {
    double width;                /* chieu rong */
    double height;               /* chieu cao */
    double area;                 /* dien tich */
    double perimeter;            /* chu vi */
    
    cout << "\t\t\t\t phan mem nhap chieu rong và chieu cao tinh chu vi va dien tich\n\n";
    cout << "chieu rong: ";
    cin >> width;
    cin.ignore();
    
    cout << "chieu cao: ";
    cin >> height;
    cin.ignore();
    
    /* tinh dien tich */
    area = calculateArea(width, height);
    /* tinh chu vi */
    perimeter = calculatePerimeter(width, height);
    
    /*in ket qua */
    cout << "\n\nDien tich: " << area << "\n";
    cout << "Chu vi: " << perimeter << "\n\n";
    
    cout << "Nhan Enter de thoat khoi chuong trinh.";
    cin.get();
    
    return 0;
}


