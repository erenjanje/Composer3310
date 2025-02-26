#include <stdio.h>

#include "havuz.h"

int main(void) {
    Pool* const pool = havuz_create(0, heap_allocator);
    int const* const x = havuz_new(pool, int, 31);
    printf("%d\n", *x);
    havuz_destroy(pool);
    return 0;
}
