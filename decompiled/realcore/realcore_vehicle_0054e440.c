/* spd-match: far pct=15.25 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054E440 */
#include <stddef.h>
extern void __stdcall FUN_00663960(int val);
typedef struct { int flag; int ptr; int pad; int data; int unk; } Item;
void FUN_0054e440(void) {
  Item* p = (Item*)0x73d830;
  Item* end = (Item*)0x73d86c;
  do {
    if (p->flag == 2) {
      int val = p->ptr;
      p->flag = 0;
      if (val != 0) FUN_00663960(val);
      p->ptr = 0;
      p->data = 0;
    }
    p++;
  } while (p < end);
}
