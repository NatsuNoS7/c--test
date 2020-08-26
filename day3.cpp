#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "10 < 20 = " << (10 < 20) << endl;
    cout << "10 <= 20 = " << (10 <= 20) << endl;
    cout << "10 > 20 = " << (10 > 20) << endl;
    cout << "10 >= 20 = " << (10 >= 20) << endl;
    cout << "10 =! 20 = " << (10 == !20) << endl;
    cout << "10 != 20 = " << (10 != 20) << endl;

    cout << "숫자를 입력하세요 : ";
    cin >> number;

    cout << " 10 ~ 20 = " << (10 <= number && number <= 20) << endl;

    return 0;
}