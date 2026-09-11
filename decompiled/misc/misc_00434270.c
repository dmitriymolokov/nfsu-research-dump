/* spd-match: far pct=9.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00434270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00434360();
int __cdecl FUN_00434810();
extern int DAT_006b79e0;
extern int DAT_006b79e4;
extern int DAT_0073619c;
extern int DAT_007361a8;
extern int DAT_0078a318;
extern int DAT_0078a31c;
extern int DAT_0078a344;
extern int DAT_0078a368;
void __fastcall FUN_00434270(undefined4 * obj)

{

  int iVar1;
  bool bVar2;
  
  obj[1] = 0;
  obj[2] = 0;
  obj[4] = 0;
  obj[5] = 0;
  obj[6] = 0;
  obj[7] = 0;
  iVar1 = 4;
  do {
    FUN_00434360();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *obj = 0;
  iVar1 = DAT_0078a31c;
  bVar2 = DAT_0078a31c != 0;
  DAT_0073619c = obj;
  obj[0x14c] = DAT_0078a31c;
  if (((bVar2) && (((DAT_0078a318 != 0 || (DAT_0078a344 != '\0')) || (DAT_007361a8 != 0)))) &&
     (iVar1 != 1)) {
    obj[0x14c] = 1;
  }
  obj[0x14d] = 0;
  obj[0x14e] = 0;
  obj[4] = 0;
  obj[1] = 0;
  obj[5] = 0;
  obj[6] = 0x7fffffff;
  obj[7] = 0;
  obj[8] = 0;
  obj[9] = 0;
  obj[10] = 0;
  *(undefined1 *)(obj + 0xb) = 0;
  obj[2] = 0;
  if (DAT_0078a368 == 0) {
    obj[3] = DAT_006b79e0;
  }
  else {
    obj[3] = DAT_006b79e4;
  }
  obj[0x155] = 0;
  obj[0x156] = 0;
  obj[0x157] = 0;
  obj[0x158] = 0;
  FUN_00434810();
  obj[0x159] = 0;
  return;
}
