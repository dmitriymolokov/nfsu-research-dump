/* spd-match: far pct=29.63 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0053F470 */
#include <stddef.h>
extern int DAT_00743c70;
extern void *DAT_00743c74;
int __cdecl FUN_0053f4b0(void);
int __cdecl FUN_00540680(void);
void __fastcall FUN_0053f470(int val, void *edi) {
  void **obj = (void **)edi;
  void *esi;
  obj[2] = (void *)val;
  obj[4] = 0;
  obj[5] = 0;
  if (val != 0) {
    void *tmp = DAT_00743c74;
    *(void **)tmp = edi;
    DAT_00743c74 = edi;
    obj[1] = tmp;
    *obj = &DAT_00743c70;
  }
  if (obj[2] != 0) {
    esi = (void *)FUN_00540680();
    FUN_0053f4b0();
  }
}
