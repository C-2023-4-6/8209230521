#include <iostream>
#include <algorithm>
using namespace std;
class Student {
public:
    int id;
    int score;
    Student(int i, int s) : id(i), score(s) {}
};
bool compare(Student* a, Student* b) {
    return a->score > b->score;
}
void max(Student* arr[], int n) {
    sort(arr, arr + n, compare);
    cout << "最高成绩的学生学号是：" << arr[n - 1]->id << endl;
}
int main() {
    Student students[5] = { Student(1, 80), Student(2, 90), Student(3, 75), Student(4, 92), Student(5, 99) };
    cout << (students, 5);
    return 0;
}