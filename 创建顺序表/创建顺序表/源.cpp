#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SIZE = 100;  // ˳�����������

class SeqList {
public:
    SeqList() {  // ���캯��
        length = 0;
        srand(time(NULL));  // ��ʼ�����������
    }
    ~SeqList() {}  // ��������

    // ����Ԫ��
    bool insert(int element) {
        if (length >= MAX_SIZE) {
            return false;  // ˳�������������ʧ��
        }
        data[length] = element;
        length++;
        return true;
    }

    // ��ӡ˳����е�Ԫ��
    void print() {
        for (int i = 0; i < length; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

private:
    int data[MAX_SIZE];  // ˳����е�Ԫ��
    int length;  // ˳���������Ԫ�صĸ���
};

int main() {
    SeqList list;  // ����һ��˳������

    // ����10������������뵽˳�����
    for (int i = 0; i < 10; i++) {
        int rand_num = rand() % 100;  // ����0~99֮��������
        list.insert(rand_num);
    }

    // ��ӡ˳����е�Ԫ��
    list.print();
    getchar();
    return 0;
}
