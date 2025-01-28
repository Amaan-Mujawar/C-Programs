//Greater between three numbers using conditional operator.
// x=10, y=5, z=9

/*#include<stdio.h>

int main() {
    int x, y, z, a;
    x=10;
    y=5;
    z=15;

    a = x > y ? x : y;

    printf("The Greater num is %d.", a > z ? a : z);
    return 0;
}*/

#include<stdio.h>

int main() {
    int x, y, z, a;
    x=10;
    y=5;
    z=9;

    a = x > y ? ((x > z) ? x : z) : ((y > z) ? y : z);

    printf("The Greater num is %d.", a);
    return 0;
}