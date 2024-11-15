#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result& result)
{
    if (a <= b && a <= c) {
        result.min = a;
        if (b <= c) {
            result.mid = b;
            result.max = c;
        } else {
            result.mid = c;
            result.max = b;
        }
    } else if (b <= a && b <= c) {
        result.min = b;
        if (a <= c) {
            result.mid = a;
            result.max = c;
        } else {
            result.mid = c;
            result.max = a;
        }
    } else {
        result.min = c;
        if (a <= b) {
            result.mid = a;
            result.max = b;
        } else {
            result.mid = b;
            result.max = a;
        }
    }
}
