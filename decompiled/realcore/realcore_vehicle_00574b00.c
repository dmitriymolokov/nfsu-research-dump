/* spd-match: far pct=12.24 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00574B00 */
#include <stddef.h>
typedef struct Node { struct Node *next; struct Node *prev; } Node;
extern struct { Node *head; int count; } DAT_007345cc;
void __fastcall FUN_00574b00(Node *obj) {
  Node *curr;
  if (obj->next == obj) return;
  do {
    curr = obj->next;
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    curr->next = DAT_007345cc.head->next;
    curr->prev = (Node *)&DAT_007345cc.head;
    DAT_007345cc.head->next->prev = curr;
    DAT_007345cc.head->next = curr;
    DAT_007345cc.count--;
  } while (obj->next != obj);
}
