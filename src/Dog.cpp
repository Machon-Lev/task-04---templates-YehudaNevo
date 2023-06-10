#include "../include/Dog.h"

Dog::Dog(int age, int weight, string name) : m_age(age), m_weight(weight), m_name(name) {}

ostream& operator<< (ostream& os, const Dog& d)
{
    return os << "name = " << d.getName() << ", age = " << d.getAge() << ", weight = " << d.getWeight();
}

bool operator<(const Dog& lhs, const Dog& rhs)
{
    return lhs.getWeight() < rhs.getWeight();
}
