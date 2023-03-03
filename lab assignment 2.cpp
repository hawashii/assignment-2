//
//  main.cpp
//  Lab2
//
//  Created by Mohamed Basuony on 17/09/2022.
//

#include <iostream>
using namespace std;

// create a class
class Room {

private:
    double length;
    double breadth;
    double height;
    string name;
    bool ahmed;
    bool noha;
    bool youssef;

public:
    Room() {
        length = 0;
        breadth = 0;
        height = 0;
        name = " ";
    }
    Room(double len, double bread, double heig) {
        length = len;
        breadth = bread;
        height = heig;
    }
    void setlength(int l) {
        length = l;
    }
    int getlength() {
        return length;
    }
    void setbreadth(int b) {
        breadth = b;
    }
    int getheight() {
        return breadth;
    }
    void setheight(int h) {
        height = h;
    }
    int getbreadth() {
        return height;
    }

    double calculateArea() {
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }
    void setahmed(bool x) {
        ahmed = x;
    }
    void setyoussef(bool y) {
        ahmed = y;
    }
    void setnoha(bool z) {
        ahmed = z;
    }
    bool getahmed() {
        return ahmed;
    }
    bool getnoha() {
        return noha;
    }
    bool getyoussef() {
        return youssef;
    }
    void masterkey() {
        ahmed = true;
        noha = false;
        youssef = false;
    }
    
    //Create a setter and a getter for ahmed, youssef, and noha with validation.
    // create access function to only allow ahmed into the room.
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.setlength(42.5);
    room1.setbreadth(30.8);
    room1.setheight(19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}