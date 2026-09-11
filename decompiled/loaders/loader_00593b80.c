/* spd-match: far pct=18.52 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_00593B80 */
#include <windows.h>
struct Node { struct Node* next; struct Node* prev; };
struct GlobalState { int pad0[4]; int* head; int pad1[4]; int count; };
extern int* DAT_007344b0;
void __stdcall FUN_00593850(void);
extern int* unaff_EBX;
void FUN_00593b80(void) {
  int* ebx = unaff_EBX;
  struct GlobalState* edi = (struct GlobalState*)DAT_007344b0;
  struct Node* esi = *(struct Node**)ebx;
  if (esi == (struct Node*)ebx) return;
  do {
    struct Node* ecx = esi->next;
    struct Node* eax = esi->prev;
    ecx->prev = eax;
    eax->next = ecx;
    FUN_00593850();
    esi->prev = (struct Node*)edi->head;
    edi->count--;
    edi->head = (int*)esi;
    esi = *(struct Node**)ebx;
  } while (esi != (struct Node*)ebx);
}
