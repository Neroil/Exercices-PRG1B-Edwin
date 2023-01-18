#include <iostream>

using namespace std;

class Point {
public:
    Point(float x,float y);
    void deplacer(float x, float y);
    void afficher() const;
private:
    float coordX;
    float coordY;
};

Point::Point(float x,float y){
    coordX = x;
    coordY = y;
}
void Point::deplacer(float x, float y){
    coordX += x;
    coordY += y;
}
void Point::afficher() const{
    cout << "(" << coordX << "," << coordY << ")";
}

int main() {


    Point test(3.2f,4.5f);
    test.afficher();
    test.deplacer(5.6f,7.12f);
    test.afficher();



    return 0;
}

