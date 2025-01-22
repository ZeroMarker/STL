//
// Created by ttft3 on 2023/8/16.
//

#include "template.h"
#include <iostream>
#include <vector>

// first template
template <typename T>
T square(T x) {
    return x * x;
}

/*
int square(int x) {
    return x * x;
}

double square(double x) {
    return x * x;
}
 */

/*
template <typename T>
class BoVector {
    T arr[100];
    size_t size;
public:
    BoVector():size(0) {}
    void push(T x) {
        arr[size] = x;
        size++;
    }
    T get(size_t x)  {
        return arr[x];
    }
    int getSize() {
        return size;
    }
    void print() {
        for(int i = 0; i < size; i++) {
            std::cout << arr[i] << '\n';
        }
    }
};
*/
template <typename T>
class BoVector {
private:
    std::vector<T> data;
public:
    size_t getSize() const { return data.size(); }
    T get(size_t index) const { return data[index]; }
    void push(const T& value) { data.push_back(value); }
    void print() {
        for(size_t i = 0; i < data.size(); i++) {
            std::cout << data[i] << '\n';
        }
    }
};
// 运算符重载
template <typename T1, typename T2>
auto operator*(const BoVector<T1>& rhs1, const BoVector<T2>& rhs2) -> BoVector<decltype(T1() * T2())> {
    if (rhs1.getSize() != rhs2.getSize()) {
        throw std::invalid_argument("Vectors must have the same size");
    }

    BoVector<decltype(T1() * T2())> ret;
    for (size_t i = 0; i < rhs1.getSize(); i++) {
        ret.push(rhs1.get(i) * rhs2.get(i));
    }
    return ret;
}
/*
template <typename T>
BoVector<T> operator*(BoVector<T> rhs1, BoVector<T>& rhs2) {
    BoVector<T> ret;
    for(int i = 0; i < rhs1.getSize(); i++) {
        ret.push(rhs1.get(i) * rhs2.get(i));
    }
    return ret;
}
*/

int template_() {
    std::cout << "# Template" << '\n';
    std::cout << square<int>(5) << '\n';
    std::cout << square<double>(5.5) << '\n';
    // type inference

    BoVector<int> bv;
    bv.push(3);
    bv.push(5);
    bv.push(2);
    bv.print();
    std::cout << bv.get(2) << '\n';
    std::cout << bv.getSize() << '\n';

    bv = square(bv);
    bv.print();

    BoVector<int> v1;
    v1.push(1);
    v1.push(2);
    v1.push(3);

    BoVector<int> v2;
    v2.push(4);
    v2.push(5);
    v2.push(6);

    BoVector<int> result = v1 * v2;
    result.print();
    return 0;
}