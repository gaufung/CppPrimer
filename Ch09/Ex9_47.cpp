#include <iostream>
#include <string>
using namespace std;
int main(){
	string numbers{"123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str{"ab2c3d7R4E6"};
    
    cout << "numeric characters: ";
    for (string::size_type pos = 0; (pos = str.find_first_of(numbers, pos)) != string::npos; ++pos)
        cout << str[pos] << " ";
    cout << "\nalphabetic characters: ";
    for (string::size_type pos = 0; (pos = str.find_first_of(alphabet, pos)) != string::npos; ++pos)
        cout << str[pos] << " ";
    cout << endl;
    
    return 0;
}