#include <algorithm>
#include <cmath>
#include <fstream>

int main() {
    std::ifstream inf("input.txt");
    std::ofstream ouf("output.txt");

    int a[3][3];
    int ii[3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            inf >> a[i][j];
        }
        ii[i] = i;
    }

    int result = 0;
    do {
        int local = 0;
        for (int i = 0; i < 3; ++i) {
            local += a[i][ii[i]] * a[i][ii[i]];
        }
        result = std::max(result, local);
    } while (std::next_permutation(ii, ii + 3));

    ouf.setf(std::ios_base::fixed);
    ouf << std::sqrt(result) << "\n";

    return 0;
}
