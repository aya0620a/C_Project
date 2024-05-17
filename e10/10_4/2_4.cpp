#include <iostream>
#include <string>
#include <map>

class Entry
{
public:
    std::string name;
    std::string phone;
    Entry(const std::string &nm = "", const std::string &ph = "")
    {
        name = nm;
        phone = ph;
    }
};
std::ostream &operator<<(std::ostream &os, const Entry &e)
{
    os << e.name << ": " << e.phone;
    return os;
}
int main(void)
{

    std::map<std::string, std::string> phone_book;

    phone_book["Kwansei Gakuin University (PR)"] = "0798-54-6017";
    phone_book["Kwansei Gakuin University (KSC)"] = "079-565-7600";
    phone_book["Kobe University"] = "078-881-1212";
    phone_book["Sanda Woodytown SATY"] = "079-564-8800";
    phone_book["Sanda Hotel"] = "079-564-1101";

    for (auto &num : phone_book)
    {
        size_t hyphen_pos = num.second.find('-');
        if (hyphen_pos != std::string::npos)
        {
            num.second = num.second.substr(hyphen_pos + 1);
        }
    }
    std::cout << std::endl;
    std::cout << "検索用文字列を入力して下さい: ";
    std::string s;
    std::cin >> s;
    // ------------------------------------------------
    // name に s を含むデータを全て表示せよ
    // ------------------------------------------------

    for (const auto &num : phone_book)
    {
        if (num.first.find(s) != std::string::npos)
        {
            std::cout << num.first << ": " << num.second << std::endl;
        }
    }
    return 0;
}