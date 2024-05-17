#include <iostream>
#include <string>
#include <vector>
 #include <algorithm>
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

class by_name
{ // 名前の比較関数オブジェクト
public:
    bool operator()(const Entry &e1, const Entry &e2) const
    {
        return e1.name < e2.name;
    }
};

class by_phone
{ // 番号の比較関数オブジェクト
public:
    bool operator()(const Entry &e1, const Entry &e2) const
    {
        return e1.phone < e2.phone;
    }
};

std::ostream &operator<<(std::ostream &os, const Entry &e)
{
    os << e.name << ": " << e.phone;
    return os;
}
int main(void)
{
    std::vector<Entry> e;
    e.push_back(Entry("Kwansei Gakuin University (PR)", "0798-54-6017"));
    e.push_back(Entry("Kwansei Gakuin University (KSC)", "079-565-7600"));
    e.push_back(Entry("Kobe University", "078-881-1212"));
    e.push_back(Entry("Sanda Woodytown SATY", "079-564-8800"));
    e.push_back(Entry("Sanda Hotel", "079-564-1101"));

    for (int i = 0; i < e.size(); i++)
    {
        // ------------------------------------------------
        // 電話番号 "079-xxx-xxxx" を "xxx-xxxx" にせよ
        // ------------------------------------------------
        if (i == 0)
        {
            e[i].phone = e[i].phone.substr(5, 8);
        }
        else
        {
            e[i].phone = e[i].phone.substr(4, 8);
        }
    }

    std::cout << "名前でソート\n";
    sort(e.begin(),e.end(), by_name()); // 名前でソート
    
    for (int i = 0; i < e.size(); i++)
    {
        std::cout << e[i] << std::endl;     
    }

    std::cout << "\n";
    std::cout << "番号でソート\n";

    sort(e.begin(),e.end(), by_phone()); // 番号でソート

    for (int i = 0; i < e.size(); i++)
    {
        std::cout << e[i] << std::endl;     
    }


    return 0;
}