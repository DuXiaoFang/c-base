#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> value{ 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
    cout << "value 容量是:" << value.capacity() << endl;
    cout << "value 大小是:" << value.size() << endl;
    printf("value首地址:%p\n", value.data());
    value.push_back(53);
    cout << "value 容量是(2):" << value.capacity() << endl;
    cout << "value 大小是(2):" << value.size() << endl;
    printf("value首地址: %p", value.data());
    return 0;
}