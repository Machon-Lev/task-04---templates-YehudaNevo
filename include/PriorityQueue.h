#pragma once

#include <iostream>
#include <list>
#include <exception>

template<typename T>
struct MyComparator {
    int operator()(const T& a, const T& b) const {
        return a.getWeight() - b.getWeight();
    }
};


template<>
struct MyComparator<float> {
    float operator()(const float& a, const float& b) const {
        return a - b;
    }
};

template<typename T, typename Comparator = MyComparator<T> >
class PriorityQueue {
public:
    void push(const T& t);
    T poll();

private:
    std::list<T> queue;
};

