#include <iostream>
#include <vector>
#include "Sequence Container/sequence.h"
#include "Associative Container/associative.h"
// first template
template <typename T>
T square(T x) {
    return x * x;
}
//int square(int x) {
//    return x * x;
//}
//
//double square(double x) {
//    return x * x;
//}

template <typename T>
class BoVector {
    T arr[100];
    int size;
public:
    BoVector():size(0) {}
    void push(T x) {
        arr[size] = x;
        size++;
    }
    T get(int x)  {
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

// 运算符重载
template <typename T>
BoVector<T> operator*(BoVector<int> rhs1, BoVector<T>& rhs2) {
    BoVector<T> ret;
    for(int i = 0; i < rhs1.getSize(); i++) {
        ret.push(rhs1.get(i) * rhs2.get(i));
    }
    return ret;
}

int main() {
    std::cout << square<int>(5) << '\n';
    std::cout << square<double>(5.5) << '\n';
    // type inference
    std::cout << square<int>(5) << '\n';
    std::cout << square<double>(5.5) << '\n';

    BoVector<int> bv;
    bv.push(3);
    bv.push(5);
    bv.push(2);
    bv.print();
    std::cout << bv.get(2) << '\n';
    std::cout << bv.getSize() << '\n';

    bv = square(bv);
    bv.print();

    std::vector<int> vec;
    vec.push_back(2);
    vec.push_back(8);
    vec.push_back(4);

    auto itr1 = vec.begin();
    auto itr2 = vec.end();

    for(auto it = itr1; it != itr2; ++it) {
        std::cout << *it << '\n';
    }
    sort(itr1, itr2);
    for(auto it = itr1; it != itr2; ++it) {
        std::cout << *it << '\n';
    }


    sequence();
    associative();
    // TODO write some code
    std::cout << "Hello, World!" << '\n';
    return 0;
}
