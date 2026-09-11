/* spd-match: far pct=41.86 flags=/O2 /c /nologo /TC method=m39 source=m39/3.9.26.55/va_004AD8A0 */
#include "ghidra_compat.h"

struct list_head {
    struct list_head *next;
    struct list_head *prev;
};

void __fastcall FUN_004ad8a0(char *obj)
{
    struct list_head *head = (struct list_head *)(obj + 0x2c);
    struct list_head *node;
    while ((node = head->next) != head) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        _free(node);
    }
}
