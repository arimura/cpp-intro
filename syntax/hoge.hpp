#include <iostream>

class Hoge {
public:
    Hoge(const std::string& name) : name(name) {
        std::cout << "Hoge" << std::endl;
    }

    ~Hoge() {
        std::cout << "Hoge destructor" << std::endl;
    }
private:
    std:: string name;
};