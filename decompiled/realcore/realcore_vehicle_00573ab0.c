/* spd-match: far pct=8.09 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00573AB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00574a00();
int __cdecl FUN_00574a70();
extern unsigned char *DAT_007345d0;
extern void LAB_00573b61(void);
int __fastcall FUN_00573ab0(int val, undefined4 *param_1, undefined4 param_2, undefined4 param_3, int *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  short sVar5;

  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar4 = param_1;
  piVar1 = param_1 + 0x5f;
  iVar9 = 0;
  param_1 = (undefined4 *)0x0;
  if (val == *piVar1) {
LAB_00573b61:
    if ((DAT_007345d0 == (int *)0x0) || (bVar3 = true, *DAT_007345d0 == 0)) {
      bVar3 = false;
    }
    puVar8 = (undefined4 *)*puVar4;
    puVar6 = (undefined4 *)FUN_0040a880();
    for (; puVar8 != puVar6; puVar8 = (undefined4 *)*puVar8) {
      iVar9 = puVar8[3];
      if ((((iVar9 != 0) && (*(code **)(iVar9 + 0xc) != (code *)0x0)) &&
          ((!bVar3 || (*(char *)(iVar9 + 0x16) != '\0')))) &&
         (sVar5 = (**(code **)(iVar9 + 0xc))(puVar8,param_2,param_3,iVar9,puVar4), sVar5 != 0)) {
        iVar9 = *param_4;
        uVar7 = puVar4[0x5e];
        if (iVar9 < 0x100) {
          piVar1 = param_4 + iVar9 * 3 + 1;
          *param_4 = iVar9 + 1;
          *(short *)piVar1 = sVar5;
          *(char *)((int)piVar1 + 2) = (char)uVar7;
          *(undefined1 *)((int)piVar1 + 3) = *(undefined1 *)(puVar8 + 2);
          piVar1[1] = puVar8[4];
          piVar1[2] = puVar8[5];
        }
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
    }
    return (int)param_1;
  }
  if (val == puVar4[0x60]) {
    iVar2 = puVar4[0x61];
    puVar4[0x61] = iVar2 + 1;
    if (0x1f < iVar2 + 1) {
      puVar4[0x5f] = val;
      puVar8 = puVar4 + 2;
      do {
        FUN_00574a70(puVar8);
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 0xb;
      } while (iVar9 < 4);
      puVar8 = (undefined4 *)*puVar4;
      puVar6 = (undefined4 *)FUN_0040a880();
      for (; puVar8 != puVar6; puVar8 = (undefined4 *)*puVar8) {
        uVar7 = FUN_00574a00(puVar8[2]);
        puVar8[3] = uVar7;
        puVar8[7] = 1;
        puVar8[6] = 0;
      }
      goto LAB_00573b61;
    }
  }
  else {
    puVar4[0x61] = 0;
    puVar4[0x60] = val;
  }
  return 0;
}
