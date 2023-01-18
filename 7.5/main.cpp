#include <iostream>

using namespace std;

class Point {
public:
    Point(float x,float y);
    void deplacer(float x, float y);
    float abscisse() const;
    float ordonnee() const;
    float setAbscisse(float x);
    float setOrdonnee(float y);
    Point operator+(const Point& v) const;


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

Point Point::operator+(const Point &v) const {
    Point temp(0,0);
    temp.setAbscisse(this->coordX + v.coordX);
    temp.setOrdonnee(this->coordY + v.coordY);
    return temp;
}

float Point::setAbscisse(float x) {
    this->coordX = x;
}

float Point::setOrdonnee(float y) {
    this->coordY = y;
}


ostream& operator<<(ostream& os, const Point& point){
    os << "(" << point.abscisse() << "," << point.ordonnee() << ")" << endl;
    return os;
}

int main() {


    Point test(3.2f,4.5f);
    cout << test;
    //test.deplacer(5.6f,7.12f);
    //cout << test;
    Point test2(4.8f, 3.5f);

    cout << (test + test2);



    return 0;
}
