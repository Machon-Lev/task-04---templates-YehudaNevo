#include "../include/PriorityQueue.h"

template<typename T, typename Comparator>
void PriorityQueue<T, Comparator>::push(const T& t) {
    Comparator compare;
    typename std::list<T>::iterator it = queue.begin();
    for(; it != queue.end(); ++it) {
        if(compare(*it, t) > 0) {
            break;
        }
    }
    queue.insert(it, t);
}

template<typename T, typename Comparator>
T PriorityQueue<T, Comparator>::poll() {
    if(queue.empty()) {
        throw std::runtime_error("Queue is empty");
    }
    T item = queue.front();
    queue.pop_front();
    return item;
}
