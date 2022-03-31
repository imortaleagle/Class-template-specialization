#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
template <>
struct Traits<Fruit>
{
public: static string name(int index)
{
    switch (index) {
    case 0: return "apple";
        break;
    case 1: return "orange";
        break;
    case 2: return "pear";
        break;
    default:
        break;
    }
    return "unknown";
}
};
template <>
struct Traits<Color>
{
public: static string name(int index)
{
    switch (index) {
    case 0: return "red";
        break;
    case 1: return "green";
        break;
    case 2: return "orange";
        break;
    default:
        break;
    }
    return "unknown";
}
};
int main()
{
    int t, index1, index2;
    cout << "Type t: ";
    cin >> t;
    while (t--)
    {
        cout << endl << "Type index1: ";
        cin >> index1;
        cout << endl << "Type index2: ";
        cin >> index2;
        cout << Traits<Fruit>::name(index1) << " ";
        cout << Traits<Color>::name(index2) << " ";
    }
   return 0;
}
