/* spd-match: far pct=50.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0053F660 */
#include <stddef.h>
typedef struct { char pad[0x1a]; signed char count; char pad2[0x21]; int *data; } StructA;
typedef struct { char pad[0xc]; StructA *ptr; } StructBase;
void __fastcall FUN_0053f660(StructBase *obj, int param_2, int esi) {
  StructA *a = obj->ptr;
  if (a != NULL && param_2 != 0) {
    int *pi = a->data;
    int count = (int)a->count;
    if (count > 0) {
      do {
        if (*pi == esi) {
          *(pi + 1) = param_2;
        }
        pi += 2;
        count--;
      } while (count != 0);
    }
  }
}
