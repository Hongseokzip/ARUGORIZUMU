#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

#define MAN 10000
#define EOK (MAN * MAN)

#define NR_SIZE (400 * EOK)
#define TARGE_IDX (7 * EOK)
#define NR_KEY (300 * MAN)

int main() {
    srand(0);
    vector<int> v;
    int *dst = new int[NR_SIZE];
    cout << "시작!\n";

    // int *arr = new int[NR_SIZE]; // 매우 큰 배열
    unordered_map<int, int> arr; // 해시맵
    cout << "공간할당 끝\n";

    for (int i = NR_KEY; i--;) {
        int t = rand() % NR_SIZE;
        arr[t] = rand();
        v.push_back(t);
    }
    cout << "값할당 끝\n";

    for (int i = 0; i < NR_KEY; i++) {
        int t = rand() % NR_SIZE;
        dst[t] = arr[v[i]];
    }
    cout << "액세스 끝\n";
    return 0;
}