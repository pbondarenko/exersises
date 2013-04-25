#include "my_lib.h"
int binsearch(int x, int * v, int n) {
        int lf = 0, rg = n - 1;
        while (rg - lf > 1) {
                int mid = (lf + rg) >> 1;
                if (v[mid] >= x) {
                        rg = mid;
                } else
                        lf = mid;
        }
        return (v[rg] == x) ? (rg) : ((v[lf] == x)?(lf):(-1));
}
