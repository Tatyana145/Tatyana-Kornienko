#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;
    std::vector<std::string> v;
    std::string tmp = "";

    for (auto c : s) {
        if (c == ' ') {
            if (tmp != "") {
                v.push_back(tmp);
                tmp = "";
            }
        } else {
            tmp += c;
        }
    }

    if (tmp != "") {
        v.push_back(tmp);
    }

    for (int i = 0; i < (int)v.size(); ++i) {
        std::cout << v[i] << '\n';
    }

    return 0;
}
