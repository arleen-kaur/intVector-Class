#include <iostream>
using namespace std;

#include "IntVector.h"

int main() {

cout << "Beginning tests." << endl;
//constructor
IntVector vec1;
IntVector vec2(5, 3);
IntVector vec3(0,0);
IntVector vec4(-2,-3);
IntVector vec5(6,7);
/*
//destructor
vec1.~IntVector();
//size
if (vec1.size() != 0) {
    cout << "Size test failed for vec1" << endl;
}
if (vec2.size() != 5) {
    cout << "Size test failed for vec2" << endl;
}
if (vec3.size() != 0) {
    cout << "Size test failed for vec3" << endl;
}
if (vec4.size() != 2) {
    cout << "Size test failed for vec4" << endl;
}
//capacity
if (vec1.capacity() != 0) {
    cout << "Capacity test failed for vec1" << endl;
}
if (vec2.capacity() != 5) {
    cout << "Capacity test failed for vec2" << endl;
}
if (vec3.capacity() != 0) {
    cout << "Capacity test failed for vec3" << endl;
}
if (vec4.capacity() != 2) {
    cout << "Capacity test failed for vec4" << endl;
}
//empty
if (vec1.empty() != true) {
    cout << "Empty test failed for vec1" << endl;
}
if (vec3.empty() != true) {
    cout << "Empty test failed for vec3" << endl;
}
//at
if (vec2.at(1) != 3) {
    cout << "At test failed for vec2" << endl;
}
if (vec4.at(0) != -3) {
    cout << "At test failed for vec4" << endl;
}
//front
if (vec2.front() != 3) {
    cout << "Front test failed for vec2" << endl;
}
if (vec4.front() != -3) {
    cout << "Front test failed for vec4" << endl;
}
//back
if (vec2.back() != 3) {
    cout << "Back test failed for vec2" << endl;
}
if (vec4.back() != -3) {
    cout << "Back test failed for vec4" << endl;
}
//insert
vec1.insert(0, 1);
vec2.insert(2,9);
if (vec1.at(0) != 1) {
    cout << "Insert test failed for vec1" << endl;
}
if (vec2.at(2) != 9) {
    cout << "Insert test failed for vec2" << endl;
}
vec2.insert(0,1);
vec2.erase(0);
if (vec2.at(0) != 3) {
    cout << "Erase test failed for vec2" << endl;
}
//push_back
vec1.push_back(1);
vec2.push_back(2);
if (vec1.at(0) != 1) {
    cout << "Push_back test failed for vec1" << endl;
}
if (vec2.at(5) != 2) {
    cout << "Push_back test failed for vec2" << endl;
} 
//pop_back
vec2.pop_back();
vec5.pop_back();
if (vec2.size() != 4) {
    cout << "Pop_back test failed for vec2" << endl;
}
if (vec5.size() != 5) {
    cout << "Pop_back test failed for vec5" << endl;
}
//clear
vec2.clear();
if (vec2.size() != 0) {
    cout << "Clear test failed for vec2" << endl;
}
//resize
vec5.resize(10, 3);
if (vec5.at(9) != 3) {
    cout << "Resize test failed for vec5" << endl;
}
// reserve
vec2.reserve(7);
if (vec2.capacity() != 7) {
    cout << "Reserve test failed for vec2" << endl;
}
//assign
vec5.assign(10,2);
if (vec5.at(1) != 2) {
    cout << "Assign test failed for vec5" << endl;
}
*/
return 0;
}