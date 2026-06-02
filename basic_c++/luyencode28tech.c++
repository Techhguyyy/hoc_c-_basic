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
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int r;
//     cout << "Nhap ban kinh: ";
//     cin >> r;
//     float chuvi = 2.0 * 3.14 * r;
//     float dientich = r * r * 3.14;
//     cout << fixed << setprecision(2) << dientich << " " << fixed << setprecision(2) << chuvi << endl;
//     return 0;
// }




//Bai 6
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
// int main() {
//     long long x1,x2,y1,y2;
//     cin >> x1 >> x2 >> y1 >> y2;
//     long long dx = x2 - x1;
//     long long dy = y2 - y1;
//     double d = sqrt(dx * dx + dy * dy);
//     cout << fixed << setprecision(2) << d << endl;
//     return 0;
    
// }





//Bai 7
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int do_c;
//     cin >> do_c;
//     double do_f = (do_c * 9.0 / 5.0) + 32;
//     cout << fixed << setprecision(2) << do_f << endl;
//     return 0;
// }





//Bai 8
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     long long n;
//     cin >> n;
//     long long Sn = 0;
//     for (int i = 1;i <= n;i++) {
//         Sn += i;
//     }
//     cout << Sn << endl;
//     return 0;
// }






//Bai 9
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     long long Sn = 0;
//     for (int i = 1;i <= n;i++) {
//         Sn += pow(i,2);
//     }
//     cout << Sn << endl;
//     return 0;
// }





//Bai 10
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// using namespace std;
// int main() {
//     long long n;
//     cin >> n;
//     double Sn = 0;
//     for (int i = 1.0;i <= n;i++) {
//         Sn += 1.0/(i * (i + 1.0));
//     }
//     cout << fixed << setprecision(2) << Sn << endl;
//     return 0;
// }



//Bai 11
// #include <iostream>
// using namespace std;
// int main() {
//     long long n;
//     cin >> n;
//     long long Sn = 0;
//     for (int i = 2;i <= n;i+=2) {
//         Sn = Sn + 2 * i;
//     }
//     cout << Sn << endl;
//     return 0;
// }





//Bai 12
// #include <iostream>
// using namespace std;
// int main() {
//     long long n;
//     cin >> n;
//     if ( n % 2 == 0) {
//         cout << n / 2  << endl;
//     }
//     else {
//         cout << -(n + 1) / 2 << endl;
//     }
//     return 0;
// }





//Bai 13
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cin >> a >> b;
//     int so = a - (a % b);
//     cout << so << endl;
//     return 0;

// }





//Bai 14




//Bai 15
// #include <iostream>
// using namespace std;
// int main() {
//     long long n;
//     cin >> n;
//     if ( n % 3 == 0 && n % 5 == 0) {
//         cout << 1 << endl;
//     }
//     else {
//         cout << 0 << endl;
//     }
//     return 0;
// }



//Bai 16
// #include <iostream>
// using namespace std;
// int main() {
//     int namnhapvao;
//     cin >> namnhapvao;
//     if (namnhapvao <= 0) {
//         cout << "Invalid" << endl;
//     }
//     else if ( namnhapvao % 4 == 0 && namnhapvao % 100 != 0) {
//         cout << "Yes" << endl;
//     }
//     else {
//         cout << "No" << endl;
//     }
//     return 0;

// }




/*
#include <iostream>
using namespace std;
int main() {
    int t,n;
    cin >> t >> n;
    if (t < 1 || t > 12 || n <= 0) {
        cout << "Invalid" << endl;
    }
    else if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {
        cout << 31 << endl;
    }
    else if (t == 4 || t == 6 || t == 9 || t == 11) {
        cout << 30 << endl;
    }
    else if (t == 2) {
        if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
            cout << 29 << endl;
        } else {
            cout << 28 << endl;
        }
    }
    
    return 0;
}
*/



//Bai 18
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (islower(n)) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}
*/





//Bai 19
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (isupper(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
*/







//Bai 20
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (isalpha(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
*/






//Bai 21
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (isdigit(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;

}
*/




//Bai 22
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (isupper(n)) {
        cout << (char)tolower(n) << endl;
    }
    else {
        cout << n << endl;
    }
    return 0;
}
*/




//Bai 23
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (islower(n)) {
        cout << (char)toupper(n) << endl;
    }
    else {
        cout << n << endl;
    }
    return 0;
    
}
*/





//Bai 24
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char n;
    cin >> n;
    if (!isalpha(n)) {
        cout << "INVALID" << endl;
    }
    else {
        char lowerN = tolower(n);
        if (lowerN == 'z') {
            cout << "a" << endl;
        }
        else {
            cout << (char)(lowerN + 1) << endl;
        }
      }
      return 0;
}

*/



//Bai 25
/*
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
*/




//Bai 26
/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if ( a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << "INVALID" << endl;
    }
    else {
        if (a == b && b == c) {
            cout << "1" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "2" << endl;
        }
        else if (pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(b,2) + pow(a,2) ) {
            cout << "3" << endl;
        }
        else {
            cout << "4" << endl;
        }
    }
    return 0;
}
*/




//Bai 27
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int nam = n / 365;
//     int ngay_con_lai = n % 365;
//     int tuan = ngay_con_lai / 7;
//     int ngay = ngay_con_lai % 7;
//     cout << nam << " " << tuan << " " << ngay << endl;
//      return 0;
// }







//Bai 28
/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    float a,b,c,x1,x2;
    cin >> a >> b >> c;
    float delta = b * b - (4.0 * a * c);
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        cout << fixed << setprecision(2) << x1 << " " << fixed << setprecision(2) << x2 << endl;
    }
    else if (delta == 0) {
         x1 == -b / (2.0 * a);
        cout << fixed << setprecision(2) << x1 << endl;
    }
    else if (delta < 0) {
        cout << "NO" << endl;
    }
    return 0;

}
*/




//Bai 29
/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b;
    cin >> a >> b;
    int dem = 0;
    for ( int i = ceil(a);i <= floor(b);i++) {
        dem++;
    }
    cout << dem << endl;
    return 0;
}
*/





//Bai 30
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if ((a / b) == c || (b / c) == a || (c / a) == b) {
        cout << "/" << endl;
    }
    else {
        cout << "NOSOL" << endl;
    }
    return 0;
}



















































































