/* spd-match: far pct=14.06 flags=/O2 /c /nologo /TC method=m39 source=m39/3.9.26.55/va_00442BD0 */
#include "ghidra_compat.h"

struct list_node {
    struct list_node *next;
    struct list_node *prev;
    int pad[3];
    char flag;
};

void __fastcall FUN_00442bd0(char *obj)
{
    struct list_node **buckets = (struct list_node **)(obj + 0x10);
    int i = 0x80;
    do {
        struct list_node *node = *buckets;
        if (node != 0) {
            node->prev->next = node->next;
            node->next->prev = node->prev;
            if (node->flag == 0) {
                _free(node);
            }
            *buckets = 0;
        }
        buckets++;
        i--;
    } while (i != 0);
}
