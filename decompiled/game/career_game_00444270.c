/* spd-match: far pct=15.38 flags=/O1 /c /nologo /TC method=m39 source=m39/3.9.26.55/va_00444270 */
#include "ghidra_compat.h"

struct list_head {
    struct list_head *next;
    struct list_head *prev;
};

void __fastcall FUN_00444270(char *obj)
{
    struct list_head *head = (struct list_head *)(obj + 0x590);
    struct list_head *node;
    while ((node = head->next) != head) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        _free(node);
    }
}
