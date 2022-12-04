#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <forward_list>

using namespace std;

class User
{
    string name;
    int age;
public:
    User(string name, int age) : name{ name }, age{ age } {};
    string ToString()
    {
        return name + " " + to_string(age);
    }
};

template <typename T>
ostream& operator<<(ostream& out, vector<T>& v)
{
    for (int i = 0; i < v.size(); i++)
        out << v.at(i) << " ";
    out << "\n";
    return out;
}

template <typename T>
ostream& operator<<(ostream& out, forward_list<T>& l)
{
    for (auto it = l.begin(); it != l.end(); it++)
        out << *it << " ";
    out << "\n";
    return out;
}

int main()
{
    srand(time(nullptr));

    /*
    string s = "ABCDEF";

    array<float, 10> array;
    array.fill(5.5);

    //vector<User> users;

    vector<int> vectInt2 = { 1, 2, 3, 4, 5 };

    vector<int> vectInt;
    
    for (int i = 0; i < 10; i++)
        vectInt.push_back(rand() % 100);

    cout << vectInt;
    cout << vectInt.size() << " " << vectInt.capacity() << "\n";
    vectInt.shrink_to_fit();
    cout << vectInt.size() << " " << vectInt.capacity() << "\n";
    vectInt.reserve(5);
    cout << vectInt.size() << " " << vectInt.capacity() << "\n";
    
    int value = 55;
    vectInt.insert(vectInt.begin() + 4, 55);
    vectInt.insert(vectInt.begin() + 2, vectInt2.begin() + 1, vectInt2.begin() + 4);
    cout << vectInt;
    vectInt.insert(vectInt.begin() + 6, array.begin() + 1, array.begin() + 4);
    cout << vectInt;
    vectInt.insert(vectInt.begin() + 6, s.begin() + 1, s.begin() + 4);
    cout << vectInt;
    cout << vectInt.size() << " " << vectInt.capacity() << "\n";
    vectInt.resize(9);
    cout << vectInt.size() << " " << vectInt.capacity() << "\n";
    cout << vectInt;
    vectInt.resize(20);
    cout << "----------\n";
    cout << vectInt;
    cout << vectInt2;
    vectInt.swap(vectInt2);
    cout << vectInt;
    cout << vectInt2;
    swap(vectInt, vectInt2);
    cout << vectInt;
    cout << vectInt2;
    cout << "----------\n";
    //erase(vectInt, 5);
    erase_if(vectInt, [](auto item) { return item < 50; });
    cout << vectInt;
    try
    {
        cout << vectInt.at(5) << "\n";
    }
    catch (...)
    {
        cout << "error\n";
    }
    
    deque<User> users;
    users.push_back(User("Bob", 45));
    users.emplace_back("Joe", 33);
    */


    forward_list<int> fl1 = { 5, 4, 1, 2, 9 };
    forward_list<int> fl2 = { 8, 5, 3, 10, 2, 6, 9 };

    auto it1 = fl1.begin();
    it1++;
    fl1.insert_after(it1, 11);
    cout << fl1;
    fl1.erase_after(++it1);
    cout << fl1;
    cout << fl2;
    fl1.sort();
    fl2.sort();
    cout << fl1;
    cout << fl2;
    //fl1.merge(fl2);
    cout << "----------\n";
    cout << fl1;
    cout << fl2;

    auto it2 = fl2.begin();
    it2++;
    auto it3 = fl2.begin();
    it3++; it3++; it3++; it3++; it3++;
    fl1.splice_after(++fl1.begin(), fl2, it2, it3);
    //fl1.splice_after(++fl1.begin(), fl2);
    cout << fl1;
    cout << fl2;
    fl1.sort();
    fl1.merge(fl2);

    forward_list<int> fl3{ 1, 1, 2, 2, 1, 3, 3, 3, 3, 6, 1 };
    fl3.sort();
    cout << fl3;
    fl3.unique();
    cout << fl3;
}
