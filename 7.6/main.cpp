#include <iostream>

using namespace std;

class Point {
public:
    Point(float x,float y);
    void deplacer(float x, float y);
    float abscisse() const;
    float ordonnee() const;
    void rotation();
    void rho();
    void theta();

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

float Point::abscisse() const {
    return coordX;
}

float Point::ordonnee() const {
    return coordY;
}

ostream& operator<<(ostream& os, const Point& point){
    os << "(" << point.abscisse() << "," << point.ordonnee() << ")" << endl;
    return os;
}

int main() {


    Point test(3.2f,4.5f);
    cout << test;
    test.deplacer(5.6f,7.12f);
    cout << test;



    return 0;
}
