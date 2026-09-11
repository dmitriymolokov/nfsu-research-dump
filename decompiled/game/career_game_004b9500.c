/* spd-match: far pct=6.03 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B9500 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004b99c0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern unsigned char *PTR_FUN_006c5bbc;
extern void LAB_004b95ae(void);
extern void LAB_004b96c9(void);
void __fastcall FUN_004b9500(int obj, int param_1, undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;

  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar4 = _malloc(0x1c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_006c5bbc;
    puVar4[3] = *(undefined4 *)(obj + 0xc);
    puVar4[5] = *(undefined4 *)(obj + 0x14);
    puVar4[6] = *(undefined4 *)(obj + 0x18);
  }
  puVar1 = (undefined4 *)(param_1 + 4);
  puVar4[5] = param_2;
  iVar7 = 0;
  for (puVar3 = (undefined4 *)*puVar1;
      (puVar3 != puVar1 && (iVar7 = iVar7 + 1, puVar3 != (undefined4 *)0x0));
      puVar3 = (undefined4 *)*puVar3) {
  }
  FUN_004f68c0(0x20,"MultiTrack_%d",iVar7 + 1);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar5 = FUN_004fd230();
  if (((iVar7 == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) || (iVar7 = FUN_004ffb70(), iVar7 == 0)
     ) {
    if (DAT_0073578c != 0) {
      iVar7 = FUN_004ef050(uVar5);
      goto LAB_004b95ae;
    }
  }
  else {
LAB_004b95ae:
    if (iVar7 != 0) {
      for (iVar8 = *(int *)(iVar7 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        iVar6 = FUN_004fd230();
        if (*(int *)(iVar8 + 0x30) == iVar6) {
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(iVar7 + 0x54)) {
              *(int *)(iVar7 + 0x54) = iVar8;
              FUN_004ff030(iVar7);
              *(undefined4 *)(*(int *)(iVar7 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 8);
  piVar2 = puVar4 + 1;
  *puVar3 = piVar2;
  *(int **)(param_1 + 8) = piVar2;
  puVar4[2] = puVar3;
  *piVar2 = (int)puVar1;
  iVar7 = 0;
  for (puVar4 = (undefined4 *)*puVar1;
      (puVar4 != puVar1 && (iVar7 = iVar7 + 1, puVar4 != (undefined4 *)0x0));
      puVar4 = (undefined4 *)*puVar4) {
  }
  FUN_004f68c0(0x20,"MultiTrack_%d",iVar7 + 1);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar5 = FUN_004fd230();
  if (((iVar7 == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) || (iVar7 = FUN_004ffb70(), iVar7 == 0)
     ) {
    if (DAT_0073578c == 0) goto LAB_004b96c9;
    iVar7 = FUN_004ef050(uVar5);
  }
  if ((iVar7 != 0) && (iVar8 = *(int *)(iVar7 + 0x4c), iVar8 != 0)) {
    while (iVar6 = FUN_004fd230(), *(int *)(iVar8 + 0x30) != iVar6) {
      iVar8 = *(int *)(iVar8 + 4);
      if (iVar8 == 0) {
        FUN_004b99c0(param_1);
        return;
      }
    }
    if (iVar8 != 0) {
      if (iVar8 != *(int *)(iVar7 + 0x54)) {
        *(int *)(iVar7 + 0x54) = iVar8;
        FUN_004ff030(iVar7);
        *(undefined4 *)(*(int *)(iVar7 + 0x54) + 0x10) = 0;
      }
      *(undefined4 *)(iVar8 + 0x10) = 0;
    }
  }
LAB_004b96c9:
  FUN_004b99c0(param_1);
  return;
}
