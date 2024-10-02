//#include <iostream>
//
//using namespace std;
//
//bool isLeapYear(int year) {
//    if (year % 4 == 0) {
//        if (year % 100 == 0) {
//            return (year % 400 == 0);
//        }
//        return true;
//    }
//    return false;
//}
//
//
//int daysInMonth(int month, int year) {
//    if (month == 2) {
//        return isLeapYear(year) ? 29 : 28;
//    }
//    else if (month == 4 || month == 6 || month == 9 || month == 11) {
//        return 30;
//    }
//    else {
//        return 31;
//    }
//}
//
//int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
//    int totalDays1 = 0;
//    for (int y = 0; y < year1; y++) {
//        totalDays1 += isLeapYear(y) ? 366 : 365;
//    }
//
//    for (int m = 1; m < month1; m++) {
//        totalDays1 += daysInMonth(m, year1);
//    }
//
//    totalDays1 += day1;
//
//    int totalDays2 = 0;
//    for (int y = 0; y < year2; y++) {
//        totalDays2 += isLeapYear(y) ? 366 : 365;
//    }
//
//    for (int m = 1; m < month2; m++) {
//        totalDays2 += daysInMonth(m, year2);
//    }
//
//    totalDays2 += day2;
//
//    return abs(totalDays1 - totalDays2);
//}
//
//int main() {
//    int day1, month1, year1;
//    int day2, month2, year2;
//
//    cout << "������ ����� ���� ����� ����� 1: (����, �����, ��): ";
//    cin >> day1 >> month1 >> year1;
//
//    cout << "������ ����� ���� ����� ����� 2: (����, �����, ��): ";
//    cin >> day2 >> month2 >> year2;
//
//    int difference = dateDifference(day1, month1, year1, day2, month2, year2);
//    cout << "г����� � ���� �� ������: " << difference << " ���." << endl;
//
//    return 0;
//}
//
//
//
//
//#include <iostream>
//
//using namespace std;
//
//double cc(int arr[], int size) {
//    if (size == 0) return 0;
//
//    int sum = 0;
//
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//
//    return static_cast<double>(sum) / size;
//}
//
//int main() {
//    const int SIZE = 5;
//    int arr[SIZE];
//
//    cout << "������ " << SIZE << " �������� ������:" << endl;
//    for (int i = 0; i < SIZE; i++) {
//        cout << "������� " << i + 1 << ": ";
//        cin >> arr[i];
//    }
//
//    double average = cc(arr, SIZE);
//    cout << "������ �����������: " << average << endl;
//
//    return 0;
//}
//
//
//
//
//
//#include <iostream>
//
//using namespace std;
//
//void countElements(int arr[], int size, int& p, int& n, int& z) {
//    p = 0;
//    n = 0;
//    z = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (arr[i] > 0) {
//            p++;
//        }
//        else if (arr[i] < 0) {
//            n++;
//        }
//        else {
//            z++;
//        }
//    }
//}
//
//int main() {
//    const int SIZE = 15; /
//        int arr[SIZE];
//
//    cout << "������ " << SIZE << " �������� ������:" << endl;
//    for (int i = 0; i < SIZE; i++) {
//        cout << "������� " << i + 1 << ": ";
//        cin >> arr[i];
//    }
//
//    int p, n, z;
//    countElements(arr, SIZE, p, n, z);
//
//    cout << "ʳ������ �������� ��������: " << p << endl;
//    cout << "ʳ������ ��'����� ��������: " << n << endl;
//    cout << "ʳ������ �������� ��������: " << z << endl;
//
//    return 0;
//}