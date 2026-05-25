// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Xin chao!";
//     return 0;
// }


//Bai 2
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int x;
//     cout << "Nhap x tu ban phim: ";
//     cin >> x;
//     long long A;
//     A = pow(x,3) + 3 * pow(x,2) + x + 1;
//     cout << A;
//     return 0;
// }



//Bai 3
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cin >> a >> b >> c;
//     int S;
//     S = a*(b + c) + b*(a + c);
//     cout << S;
//     return 0;
// }




//Bai 4
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long a,b;
    cin >> a >> b;
    long long tong;
    long long hieu;
    long long tich;
    double thuong;
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = (double) a / b;
    cout << tong << " " << hieu << " " << tich << " "
    << fixed << setprecision(2) << thuong << endl;
    return 0; 
}

*/





//Bai 5
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int r;
    cout << "Nhap ban kinh: ";
    cin >> r;
    float chuvi = 2.0 * 3.14 * r;
    float dientich = r * r * 3.14;
    cout << fixed << setprecision(2) << dientich << " " << fixed << setprecision(2) << chuvi << endl;
    return 0;
}