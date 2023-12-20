#include <stdexcept>
#include <iostream>
using namespace std;

#include "IntVector.h"
 IntVector::IntVector(unsigned size, int value) {
    if (size == 0) {
        _size = 0;
        _capacity = 0;
        data = 0;
    } else {
        data = new int[size];
        _size = size;
        _capacity = size;
        for (unsigned int i = 0; i < size; i++) {
            data[i] = value;
        }
    }
 }
IntVector::~IntVector() {
    delete[] data;
    data = nullptr;
    //cout << "Destructor Worked Successfully" << endl;
}
unsigned IntVector::size() const {
    if (_size < 0) {
        return _size * -1;
    } else {
        return _size;
    }
}
unsigned IntVector::capacity() const {
    if (_capacity < 0) {
        return _capacity * -1;
    } else {
        return _capacity;
    }
}
bool IntVector::empty() const {
    bool empty = false;
    if (_size == 0) {
        empty = true;
    }
    return empty;
}
const int & IntVector::at(unsigned index) const {
    if (index >= _size) {
        throw out_of_range("IntVector::at_range_check");
    } else {
        return data[index];
    }
 }
const int & IntVector::front() const {
    if (_size > 0)  {
        return data[0];
    } else {
        throw out_of_range("IntVector::at_range_check");
    }
}
 const int & IntVector::back() const {
    if (_size > 0)  {
        return data[_size - 1];
    } else {
        throw out_of_range("IntVector:: at_range_check");
    }
}
void IntVector::expand() {
    if (_capacity == 0) {
        data = new int[1];
        data[0] = 0;
        _capacity = 1;
    } else {
        int tempCap = _capacity*2;
        int *temp = new int[tempCap];
        for (unsigned i = 0; i < _size; i++) {
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        _capacity = tempCap;
    }
}
void IntVector::expand(unsigned amount) {
    int tempCap = _capacity + amount;
    int *temp = new int[tempCap];
    for (unsigned i = 0; i < _size; i++) {
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;
    _capacity = tempCap;
}
void IntVector::insert(unsigned index, int value) {
    if (index > _size) {
        throw out_of_range("IntVector::insert_range_check");
    } else {
        if (_size >= _capacity) {
            expand();
        }
        for (unsigned int i = _size; i > index; i--) {
            data[i] = data[i-1];
        }
        data[index] = value;
        _size = _size + 1;
    }
}
void IntVector::erase(unsigned index) {
    if (index >= _size) {
        throw out_of_range("IntVector::erase_range_check");
    } else {
        for (unsigned int i = index; i < _size - 1; i++) {
            data[i] = data[i+1];
        }
        _size = _size - 1;
    }
}
void IntVector::push_back(int value) {
    if (_size >= _capacity) {
        expand();
    }
    data[_size] = value;
    _size = _size + 1;
}
void IntVector::pop_back() {
    _size = _size - 1;
}
void IntVector::clear() {
    _size = 0;
}
void IntVector::resize(unsigned size, int value) {
    if (_capacity < size) {
        if (size > _capacity * 2 ) {
            expand(size - _capacity);
            for (unsigned i = _size; i < size; i++) {
                data[i] = value;
            }
            _size = size;
        } else if (size > _capacity) {
            expand();
            for (unsigned i = _size; i < size; i++) {
                data[i] = value;
            }
            _size = size;
        }
        } else {
            if (size > _size) {
                for (unsigned i = _size; i < size; i++) {
                    data[i] = value;
                }
                _size = size;
            } if (size < _size) {
                _size = size;
            }
        }
}
void IntVector::reserve(unsigned n) {
    if (n > _capacity) {
        _capacity = n;
    }
}
void IntVector::assign(unsigned n, int value) {
    if (n > _capacity * 2) {
        expand(n - _capacity);
    } else if (n > _capacity) {
        expand();
    } 
    for (unsigned i = 0; i < n; i++) {
        data[i] = value;
    }
    _size = n;
}
int & IntVector:: at(unsigned index) {
    if (index >= _size || empty() || _size == 0) {
            throw out_of_range("IntVector::at_range_check");
        } else {
            return data[index];
        }
}

int & IntVector:: front() {
    if (_size > 0)  {
        return data[0];
    } else {
        throw out_of_range("IntVector::at_range_check");
    }
}
int & IntVector:: back() {
 if (_size > 0)  {
        return data[_size - 1];
    } else {
        throw out_of_range("IntVector:: at_range_check");
    }
}