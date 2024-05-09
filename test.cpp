#include <iostream>

template <class T>
class Sum {
private:
    T a;
    T b;
public:
    Sum(T n1, T n2) : a(n1), b(n2) {} // 构造函数定义在类外部，并使用成员初始化列表
    T sum(); // sum函数返回T类型的结果
};

template <class T>
T Sum<T>::sum() { // 成员函数定义在类外部时，不需要再次指定模板参数类型
    return a + b;
}

int main() {
    // 使用Sum类的示例
    Sum<int> intSum(5, 3); // 创建一个Sum对象，模板参数为int
    std::cout << "Integer Sum: " << intSum.sum() << std::endl;

    Sum<double> doubleSum(3.5, 2.7); // 创建一个Sum对象，模板参数为double
    std::cout << "Double Sum: " << doubleSum.sum() << std::endl;

    return 0;
}
