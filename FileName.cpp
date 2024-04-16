#include <iostream>
using namespace std;
class Test {
public:
    int x;
    Test() {
        this->x = 1;
    }   ​
    void change(Test& t) const {
        t.x = 0;
    }
    ​
};​
int main() {
    Test t1;
    Test t2;
    t1.change(t2);
    return 0;
}
​

//class String {
//public:
//    String() : n(0), capacity(16), str(new char[16]) {
//        str[0] = '\0';
//    }
//    String(const char* s) : n(strlen(s)), capacity(n * 2), str(new char[capacity]) {
//        strcpy(str, s);
//    }
//    String(const String& other) : n(other.n), capacity(other.capacity), str(new char[capacity]) {
//        strcpy(str, other.str);
//    }
//    ~String() {
//        delete[] str;
//    }
//
//    const char* c_str() const {
//        return str;
//    }
//
//    void clear() {
//        if (str != NULL) {
//            delete[] str;
//        }
//        n = 0;
//        capacity = 16;
//        str = new char[capacity];
//        str[0] = '\0';
//    }
//
//    String& operator+=(char c) {
//        if (n + 1 >= capacity) {
//            int size = capacity * 2;
//            if (size < 0) { // Too many elements
//                size = 1 << 30;  // Good luck allocating 2 ^ 30 elements
//            }
//            capacity = size;
//            char* newStr = new char[capacity];
//            strcpy(newStr, str);
//            delete[] str;
//            str = newStr;
//        }
//        str[n++] = c;  // Append c to the end of str
//        str[n] = '\0'; // Null terminate the string
//        return *this;
//    }
//
//    int getSize() const { return n; }
//    int getcapacity() const { return capacity; }
//
//    //// Your Implementation.
//    const char& operator[](int index) const;
//    friend ostream& operator<<(ostream& os, const String& s);
//    friend istream& operator>>(istream& is, String& s);
//
//private:
//    int n; // Length of the string
//    int capacity; // Capacity of the buffer
//    char* str; // Buffer to store the string
//};
//
//class StringJoiner {
//public:
//    StringJoiner(char c = ' ') : c(c) {}
//
//    String operator()(const String& a, const String& b) const;
//
//private:
//    char c;
//};
//using namespace std;
//const char& String::operator[](int index) const
//{
//    return str[index];
//}
//ostream& operator<<(ostream& os, const String& s)
//{
//    os << "s.size = " << s.n << endl;
//    os << "s.capacity = " << s.capacity << endl;
//    os << "s.str = ";
//    for (int i = 0; i < s.n; i++)
//    {
//        os << s.str[i];
//    }
//    cout << endl;
//    return os;
//}
//istream& operator>>(istream& is, String& s)
//{
//    s.clear();
//    int i = 0;
//    char c;
//    is.get(s.str[s.n++]);
//    while (!isspace(s.str[s.n - 1]))
//    {
//        is.get(s.str[s.n++]);
//    }
//    s.n--;
//    return is;
//}
//String StringJoiner::operator()(const String& a, const String& b) const
//{
//    String s;
//    for (int i = 0; i < a.getSize(); i++)
//        s += *(a.c_str() + i);
//    // s+=",";
//    for (int i = 0; i < b.getSize(); i++)
//        s += *(b.c_str() + i);
//    return s;
//}
//int main() {
//    String s1, s2;
//    cin >> s1;
//    cin >> s2;
//    cout << s1;
//    cout << s2;
//    StringJoiner join(',');
//    cout << join(s1, s2);
//
//    cin >> s1;
//    int size = s1.getSize();
//    for (int i = 0; i < size; i++) {
//        cout << s1[i];
//    }
//    return 0;
//}