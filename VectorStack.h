#pragma once
#include <vector>
#include "StackImplementation.h"
using ValueType = double;
using std::size_t;

class VectorStack : public IStackImplementation {
public:
    VectorStack() = default;
    VectorStack(const ValueType* valueArray, size_t size);
    void push(const ValueType& value) override;
    void pop() override;
    const ValueType& top() const override;
    bool isEmpty() const override;
    size_t size() const override;
private:
    std::vector <ValueType> _vector;
};