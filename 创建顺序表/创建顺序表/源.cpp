#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SIZE = 100;  // 顺序表的最大容量

class SeqList {
public:
    SeqList() {  // 构造函数
        length = 0;
        srand(time(NULL));  // 初始化随机数种子
    }
    ~SeqList() {}  // 析构函数

    // 插入元素
    bool insert(int element) {
        if (length >= MAX_SIZE) {
            return false;  // 顺序表已满，插入失败
        }
        data[length] = element;
        length++;
        return true;
    }

    // 打印顺序表中的元素
    void print() {
        for (int i = 0; i < length; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

private:
    int data[MAX_SIZE];  // 顺序表中的元素
    int length;  // 顺序表中已有元素的个数
};

int main() {
    SeqList list;  // 创建一个顺序表对象

    // 生成10个随机数并插入到顺序表中
    for (int i = 0; i < 10; i++) {
        int rand_num = rand() % 100;  // 生成0~99之间的随机数
        list.insert(rand_num);
    }

    // 打印顺序表中的元素
    list.print();
    getchar();
    return 0;
}
