#include<iostream>
int main() {
    for (int i = 1; i <= 5; i++) { // 控制行数，从1到5
        for (int j = 1; j <= i; j++) { // 在每一行输出相应数量的星号
            std::cout << "*";
        }
        std::cout << std::endl; // 输出完一行后换行
    }
    return 0;
}