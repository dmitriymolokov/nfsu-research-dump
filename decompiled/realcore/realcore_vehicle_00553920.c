/* spd-match: far pct=13.33 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00553920 */
#include <stddef.h>
struct Context { char pad1[24]; int val18; char pad2[420]; int val19c; int val1a0; };
int __fastcall FUN_00553820(void *ecx, void *edx);
int __fastcall FUN_00553920(struct Context *ctx, void *unused, int eax) {
  int edx = ctx->val18;
  int esi = ctx->val1a0;
  int edi = esi + eax;
  int ecx_val = (int)ctx;
  int eax_val = ctx->val19c;
  int ebx = esi;
  if (eax_val > edx) {
    int delta = eax_val - edx;
    int mask = (edi < 0) ? -1 : 0;
    int target = mask & edi;
    ebx = (delta < target) ? delta : target;
  }
  if (ebx != esi) {
    ctx->val1a0 = ebx;
    FUN_00553820((void *)ctx, NULL);
    return 1;
  }
  return 0;
}
