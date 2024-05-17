#include <iostream>
#include <vector>
#include <algorithm>
typedef std::vector<int> int_vector;
typedef int_vector::iterator int_vector_iter;
int main(void)
{
    // 整数リスト li = (3 5 2 3 2 3) を作る
    int_vector vect;
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(2);
    vect.push_back(3);
    std::cout << ">";
    int i;
    std::cin >> i;
    // リスト中の i を検索
    int_vector_iter p = find(vect.begin(), vect.end(), i);
    if (p == vect.end())
    {
        // 見つからない場合
        std::cout << "not found\n";
    }
    else
    {
        // 見つかった場合
        std::cout << *p << " found\n";
        // 見つかったところの直後から更に検索を継続
        p = find(++p, vect.end(), i);
        if (p == vect.end())
        {
            std::cout << "not found\n";
        }
        else
        {
            std::cout << *p << " found again\n";
        }
    }
    return 0;
}