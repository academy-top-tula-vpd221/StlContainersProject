#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <forward_list>
#include<algorithm>

using namespace std;

/*class User
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
*/
void print_array(const array<float, 10> item )
{
    for(auto itet:item)
    cout << itet;
    cout << "\n";
}
void sort_length(array<float, 10> item, int begin, int end)
{
    if (begin < 0 || end >= item.size()) 
    {
        cout << "out of range!\n";
        return;
    }
  
        sort(item.begin() + begin, item.begin() + end);

    
 
}
template<typename T1,T2 >
class MyClass<T1,T2>:vector<T,int>
{

public:
   
    void SayHi()
    {
        cout << "Hi\n";
   }
};

int main()
{
    /*vector <int> v1{10,17,17,12,45};
    for (int a : v1)
        cout << a << " ";
    cout << endl;
    v1.resize(3);
    for (int a : v1)
        cout << a << " ";
    cout << endl;
    cout << v1.capacity() << " " << v1.size();
    v1.shrink_to_fit();
    cout << "\n";
    cout << v1.capacity() << " " << v1.size()<<endl;
    v1.push_back(1);
    v1.push_back(10);
    v1.push_back(13);
    cout << v1.capacity() << " " << v1.size()<<endl;
    v1.push_back(34);
    cout << v1.capacity() << " " << v1.size()<<endl;
    v1.shrink_to_fit();
    v1.resize(10);
    cout << v1.capacity() << " " << v1.size() << endl;
    for (int a : v1)
        cout << a << " ";
    cout << endl;
    */
    MyClass<int> m1;
    m1.SayHi();
    

    
    
    


 
}
