#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    // نام فایل ورودی
    std::string filename = "D:\\GitHub\\Cplusplus-Tutorial\\Lecture\\entry_file.txt";

    // باز کردن فایل ورودی
    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cerr << "Unable to open file: " << filename << std::endl;
        return 1;
    }

    // خواندن اولین خط فایل که بایت مورد نظر را مشخص می‌کند
    int byteIndex;
    infile >> byteIndex;
    infile.ignore(); // نادیده گرفتن کاراکتر newline پس از عدد در خط اول

    // خواندن باقی‌مانده فایل خط به خط
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(infile, line)) {
        lines.push_back(line);
    }
    infile.close();

    // تبدیل خطوط به یک رشته کامل برای پیدا کردن و تغییر بایت
    std::string content;
    for (const auto& l : lines) {
        content += l + "\n";
    }

    // تغییر بایت مورد نظر به #
    if (byteIndex > 0 && byteIndex <= content.size()) {
        content[byteIndex - 1] = '#'; // byteIndex از 1 شروع می‌شود ولی index آرایه از 0
    } else {
        std::cerr << "Byte index is out of range." << std::endl;
        return 1;
    }

    // باز کردن فایل برای نوشتن تغییرات
    std::ofstream outfile(filename);
    if (!outfile.is_open()) {
        std::cerr << "Unable to open file for writing: " << filename << std::endl;
        return 1;
    }

    // نوشتن خط اول با بایت مشخص
    outfile << byteIndex << std::endl;

    // نوشتن محتویات تغییر یافته به فایل، با حفظ خطوط جدید
    size_t pos = 0;
    for (const auto& l : lines) {
        size_t next_pos = content.find("\n", pos);
        if (next_pos != std::string::npos) {
            outfile << content.substr(pos, next_pos - pos) << std::endl;
            pos = next_pos + 1;
        }
    }

    outfile.close();
    return 0;
}
