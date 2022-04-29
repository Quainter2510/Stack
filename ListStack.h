#pragma once
#include <list>
#include "StackImplementation.h"
using std::size_t;
using ValueType = double;

class ListStack: public IStackImplementation {
public:
    ListStack() = default;
    ListStack(const ValueType* valueArray, size_t sizeArray);
    void push(const ValueType& value) override;
    void pop() override;
    const ValueType& top() const override;
    bool isEmpty() const override;
    size_t size() const override;

protected:
    std::list<ValueType> _lst;

};