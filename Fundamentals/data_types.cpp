#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    // Type Inference
    auto x = 30;                         // int
    auto y = 30;                         // int
    auto name = "Abhinav";               // const char* (Non mutable)

    string my_name = "Abhinav";          // std::string ( Mutable)

    const char* name_is = "Abhinav";           // Non mutable

    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "name (auto) = " << name << "\n";
    cout << "my_name (std::string) = " << my_name << "\n";
    cout << "name_is (char*) = " << name_is << "\n";

    return 0;
}