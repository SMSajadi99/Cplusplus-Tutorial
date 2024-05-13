#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // باز کردن فایل
    ifstream file(R"(D:\GitHub\Cplusplus-Tutorial\Lecture\my_belladi_code.txt)");
    
    if (!file.is_open()) {
        cerr << "Unable to open file." << endl;
        return 1;
    }

    // خواندن تعداد اعداد در کد بلادی بهروز
    int n;
    file >> n;
    
    // متغیر برای ذخیره جمع اعداد
    int total = 0;
    
    // خواندن اعداد و جمع آن‌ها
    for (int i = 0; i < n; ++i) {
        int num;
        file >> num;
        total += num;
    }
    
    // بستن فایل
    file.close();
    
    // چاپ جمع به عنوان کد بلادی بهروز
    cout << total << endl;

    return 0;
}
