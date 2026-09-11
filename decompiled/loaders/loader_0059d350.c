/* spd-match: far pct=4.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059D350 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0();
int __cdecl FUN_004387e0();
int __cdecl FUN_004ad8d0();
int __cdecl FUN_0059cb90();
int __cdecl FUN_0059cdb0();
int __cdecl FUN_0059ce10();
int __cdecl FUN_0059cea0();
int __cdecl FUN_00674898();
undefined4 * __fastcall FUN_0059d350(int obj, undefined4 *param_1, undefined4 param_2)

{

  int iVar1;
  undefined1 *puVar2;
  float10 fVar3;
  float10 extraout_ST0;
  undefined1 local_50 [76];
  
  if (*(char *)(obj + 0x18) != '\0') {
    FUN_0059cb90();
    *(undefined1 *)(obj + 0x18) = 0;
  }
  if (*(short *)(obj + 0x1e) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  fVar3 = (float10)FUN_0059ce10(param_2);
  FUN_004387e0((float)fVar3);
  iVar1 = FUN_00674898();
  if ((*(int *)(obj + 4) == 2) &&
     ((iVar1 < 0 || ((int)(*(ushort *)(obj + 0x1e) - 1) <= iVar1)))) {
    FUN_004010a0(local_50,0x10,4,FUN_004ad8d0);
    FUN_0059cea0();
    puVar2 = local_50;
  }
  else {
    puVar2 = (undefined1 *)(iVar1 * 0x10 + -0x10 + *(int *)(obj + 0x24));
  }
  FUN_0059cdb0(param_1,(float)((float10)(float)fVar3 - extraout_ST0),puVar2);
  return param_1;
}
