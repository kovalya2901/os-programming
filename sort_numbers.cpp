#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

struct PhoneRecord {
std::string phone_number;
std::string full_name;
std::string address;
};

bool comparePhoneRecords(const PhoneRecord& a, const PhoneRecord& b) {
return a.phone_number < b.phone_number;
}

std::vector readPhoneRecordsFromFile(const std::string& filename) {
std::vector phone_records;

std::ifstream file(filename);
if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string phone_number, full_name, address;
        if (iss >> phone_number >> full_name >> address) {
            PhoneRecord phone_record{phone_number, full_name, address};
            phone_records.push_back(phone_record);
        }
    }
    file.close();
}

return phone_records;
}

void writePhoneRecordsToFile(const std::string& filename, const std::vector& phone_records) {
std::ofstream file(filename);
if (file.is_open()) {
for (const auto& phone_record : phone_records) {
file << phone_record.phone_number << " " << phone_record.full_name << " " << phone_record.address << std::endl;
}
file.close();
}
}

int main() {
std::string filename = "phone_records.txt";
std::vector phone_records = readPhoneRecordsFromFile(filename);
std::sort(phone_records.begin(), phone_records.end(), comparePhoneRecords);
writePhoneRecordsToFile(filename, phone_records);

return 0;
}
