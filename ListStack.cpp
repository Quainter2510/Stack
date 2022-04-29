
#include "ListStack.h"
using std::size_t;

ListStack::ListStack(const ValueType* valueArray, size_t sizeArray) {
    for (size_t i = 0; i < sizeArray; i++) {
        _lst.push_back(valueArray[i]);
    }
}

void ListStack::push(const ValueType& value) {
    _lst.push_back(value);
}

void ListStack::pop() {
    _lst.pop_back();
}

const ValueType& ListStack::top() const {
    return _lst.back();
}

bool ListStack::isEmpty() const {
    return _lst.empty();
}

size_t ListStack::size() const {
    return _lst.size();
}