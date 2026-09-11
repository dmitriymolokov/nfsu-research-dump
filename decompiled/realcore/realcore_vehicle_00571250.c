/* spd-match: far pct=50.82 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00571250 */
#include "ghidra_compat.h"
struct Node { int *prev; int *next; };
extern int DAT_006f1d40;
void __fastcall FUN_00571250(int obj) {
  int base_ptr;
  struct Node *n;
  struct Node *curr;
  int count;
  base_ptr = *(int *)(obj + 0x4d4);
  n = (struct Node *)(base_ptr + 0x19ac);
  if (n != (struct Node *)0x0) {
    int *prev = n->prev;
    int *next = n->next;
    *prev = (int)next;
    *(int *)((char *)next + 4) = (int)prev;
  }
  count = DAT_006f1d40;
  if (count > 0) {
    curr = (struct Node *)(base_ptr + 0x19e0);
    do {
      int *p = curr->prev;
      int *nxt = curr->next;
      curr = (struct Node *)((char *)curr + 0x68);
      *p = (int)nxt;
      *(int *)((char *)nxt + 4) = (int)p;
      count--;
    } while (count != 0);
  }
}
