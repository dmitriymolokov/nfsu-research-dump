/* spd-match: far pct=6.64 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047EAE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_0073619c;
extern unsigned char *DAT_007361b4;
extern unsigned char *DAT_007361b8;
extern unsigned char *DAT_007361bc;
extern int DAT_007361c4;
extern int DAT_00737290;
extern int DAT_007796fc;
extern unsigned char *DAT_00779700;
extern int DAT_0078a368;
extern unsigned char *PTR_FUN_006c8140;
extern unsigned char *PTR_LAB_006c8118;
extern unsigned int uRam00000000;
undefined4 * __fastcall FUN_0047eae0(undefined4 val, undefined4 *param_1)

{
  undefined4 *puVar1;

  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  param_1[5] = val;
  *param_1 = &PTR_LAB_006c8118;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  puVar3 = param_1 + 1;
  *DAT_00779700 = puVar3;
  puVar1 = puVar3;
  param_1[2] = DAT_00779700;
  DAT_00779700 = puVar1;
  *puVar3 = &DAT_007796fc;
  *param_1 = &PTR_FUN_006c8140;
  param_1[0x2d] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[8] = DAT_00737290;
  param_1[7] = 0xffffffff;
  param_1[10] = 0;
  param_1[0x2e] = 0;
  iVar4 = DAT_0073619c;
  if (DAT_0078a368 == 0) {
    if (DAT_007361c4 == 2) {
      if (*(int *)(DAT_0073619c + 0x24) < 1) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = *(undefined4 **)(DAT_0073619c + 0x520);
      }
      param_1[0xd] = *puVar3;
      param_1[0xe] = *(undefined4 *)(DAT_007361b4 + 4);
      param_1[0xf] = *(undefined4 *)(DAT_007361b8 + 4);
      iVar4 = DAT_007361b4;
    }
    else {
      param_1[0xd] = *(undefined4 *)(DAT_007361bc + 4);
      param_1[0xe] = *(undefined4 *)(DAT_007361bc + 4);
      param_1[0xf] = *(undefined4 *)(DAT_007361bc + 4);
      iVar4 = DAT_007361bc;
    }
    param_1[0x10] = *(undefined4 *)(iVar4 + 4);
    param_1[9] = 4;
    param_1[0xc] = 4;
    return param_1;
  }
  if (DAT_007361c4 == 2) {
    param_1[0xd] = *(undefined4 *)(DAT_007361b4 + 4);
    param_1[0xe] = *(undefined4 *)(DAT_007361b8 + 4);
    param_1[9] = 2;
    param_1[0xc] = 2;
    return param_1;
  }
  if (*(int *)(DAT_0073619c + 0x24) < 1) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(DAT_0073619c + 0x520);
  }
  param_1[0xd] = *puVar3;
  iVar2 = (int)(1 % (longlong)*(int *)(iVar4 + 0x24)) + 1;
  if (*(int *)(iVar4 + 0x24) < iVar2) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(iVar4 + 0x51c + iVar2 * 4);
  }
  param_1[0xe] = *puVar3;
  iVar2 = (int)(2 % (longlong)*(int *)(iVar4 + 0x24)) + 1;
  if (*(int *)(iVar4 + 0x24) < iVar2) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(iVar4 + 0x51c + iVar2 * 4);
  }
  param_1[0xf] = *puVar3;
  iVar2 = (int)(3 % (longlong)*(int *)(iVar4 + 0x24)) + 1;
  if (iVar2 <= *(int *)(iVar4 + 0x24)) {
    param_1[0x10] = **(undefined4 **)(iVar4 + 0x51c + iVar2 * 4);
    param_1[9] = 4;
    param_1[0xc] = 4;
    return param_1;
  }
  param_1[0x10] = uRam00000000;
  param_1[9] = 4;
  param_1[0xc] = 4;
  return param_1;
}
