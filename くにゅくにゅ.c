#include <stdio.h>
#include <stdlib.h>

typedef int くにゅくにゅですか;
const くにゅくにゅですか くにゅ = 1;
const くにゅくにゅですか くにゅではない = 0;

くにゅくにゅですか くにゅくにゅ判定(int くにゅくにゅ)
{
    if (くにゅくにゅ == 17) {
        return (くにゅ);
    } else {
        return (くにゅではない);
    }
}

int main(int argc, char** argv)
{
    くにゅくにゅですか 判定 = くにゅくにゅ判定(atoi(argv[1]));
    printf("くにゅくにゅですか = %d\n", 判定);
    return 0;
}
