// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Xin chao,the gioi nay!" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến lưu điểm số các môn học
    double diem_python = 8.5;
    double diem_cpp = 9.0;
    double diem_csdl = 7.5; // Môn Cơ sở dữ liệu vừa thi xong

    // Tính điểm trung bình học kỳ 
    double diem_trung_binh = (diem_python + diem_cpp + diem_csdl) / 3.0;

    cout << "=====================================" << endl;
    cout << "   KET QUA HOC TAP SINH VIEN IT" << endl;
    cout << "=====================================" << endl;
    cout << "Diem Python: " << diem_python << endl;
    cout << "Diem C++: " << diem_cpp << endl;
    cout << "Diem Co so du lieu: " << diem_csdl << endl;
    cout << "-------------------------------------" << endl;
    cout << "=> Diem trung binh hoc ky: " << diem_trung_binh << endl;
    cout << "=====================================" << endl;

    return 0;
}

