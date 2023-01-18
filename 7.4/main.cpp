#include <iostream>
#include <string>
#include <vector>

class Robot{
public:
    explicit Robot(int coordX = 0, bool direction = true);
    void deplacer(int x);
private:
    int  coordX;
    bool direction;

};

Robot::Robot(int coordX, bool direction){
    this->coordX = coordX;
    this->direction = direction;
}

void Robot::deplacer(int x) {
    if (direction){
        this->coordX += x;
    } else {
        this->coordX -= x;
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
