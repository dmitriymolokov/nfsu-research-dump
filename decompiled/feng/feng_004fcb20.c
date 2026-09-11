/* spd-match: far pct=5.07 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FCB20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fca20();
int __cdecl FUN_004fccf0();
extern unsigned char *PTR_FUN_006c1830;
void __fastcall FUN_004fcb20(undefined1 * obj, undefined1 *param_1)

{
  int iVar1;
  int iVar2;

  undefined4 *puVar3;
  int iVar4;
  
  FUN_004fca20();
  *param_1 = *obj;
  param_1[1] = obj[1];
  param_1[2] = obj[2];
  param_1[3] = obj[3];
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) ^
       ((*(int *)(obj + 4) << 8) >> 8 ^ *(uint *)(param_1 + 4)) & 0xffffff;
  param_1[7] = obj[7];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(obj + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(obj + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(obj + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(obj + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(obj + 0x24);
  if (obj[0x2c] == '\0') {
    for (iVar4 = *(int *)(obj + 0x30); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      puVar3 = (undefined4 *)FUN_004fccf0();
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0xabadcafe;
        puVar3[2] = 0xabadcafe;
        *puVar3 = &PTR_FUN_006c1830;
      }
      puVar3[3] = *(undefined4 *)(iVar4 + 0xc);
      puVar3[4] = *(undefined4 *)(iVar4 + 0x10);
      puVar3[5] = *(undefined4 *)(iVar4 + 0x14);
      puVar3[6] = *(undefined4 *)(iVar4 + 0x18);
      puVar3[7] = *(undefined4 *)(iVar4 + 0x1c);
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        iVar2 = *(int *)(param_1 + 0x30);
        puVar3[1] = iVar2;
        if (iVar2 != 0) {
          *(undefined4 **)(iVar2 + 8) = puVar3;
        }
        puVar3[2] = 0;
        *(undefined4 **)(param_1 + 0x30) = puVar3;
      }
      else {
        iVar2 = *(int *)(iVar1 + 4);
        puVar3[1] = iVar2;
        if (iVar2 != 0) {
          *(undefined4 **)(iVar2 + 8) = puVar3;
        }
        puVar3[2] = iVar1;
        *(undefined4 **)(iVar1 + 4) = puVar3;
      }
      if (*(int *)(param_1 + 0x34) == iVar1) {
        *(undefined4 **)(param_1 + 0x34) = puVar3;
      }
    }
    return;
  }
  if (obj[0x2c] == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(obj + 0x30);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_1[0x2c] = 0;
    return;
  }
  if (param_1[0x2c] == '\0') {
    FUN_004fca20();
  }
  *(int *)(param_1 + 0x30) = iVar4;
  param_1[0x2c] = 1;
  return;
}
