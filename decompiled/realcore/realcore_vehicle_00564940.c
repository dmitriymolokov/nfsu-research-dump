/* spd-match: far pct=11.84 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00564940 */
#include <windows.h>
typedef struct Node { struct Node* next; struct Node* prev; } Node;
Node* __stdcall FUN_00564940(Node* head, int (__stdcall *pred)(Node*), Node* item) {
    Node* cur;
    Node* prev;
    Node* next;
    cur = head->next;
    while (cur != head) {
        if (pred(cur)) {
            prev = cur->prev;
            prev->next = item;
            cur->prev = item;
            item->prev = prev;
            item->next = cur;
            return item;
        }
        cur = cur->next;
    }
    prev = head->prev;
    prev->next = item;
    head->prev = item;
    item->prev = prev;
    item->next = head;
    return item;
}
