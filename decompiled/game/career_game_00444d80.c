/* spd-match: far pct=11.30 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005657d0();
int __cdecl FUN_00565810();
int __cdecl FUN_00565b60();
extern int DAT_007301d8;
extern void LAB_00444e27(void);

int FUN_00444d80(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = 0;
  local_8 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    iVar7 = 0x180;
    do {
      iVar1 = *(int *)(param_1 + iVar7);
      if (*(int *)(iVar1 + 0xc) == 0) {
        if (DAT_007301d8 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_00565810();
          iVar4 = iVar4 + -0x58;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
        }
        iVar2 = *(int *)(iVar1 + 0x18);
        if (iVar4 < iVar2 + 0x400) {
          local_8 = local_8 + iVar2;
        }
        else {
          iVar4 = FUN_00565b60(iVar2,0,0,0x2011);
          if (iVar4 == 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          *(int *)(iVar1 + 0x2c) = iVar4;
          *(undefined4 *)(iVar1 + 0xc) = 1;
          uVar5 = 0;
          if (DAT_007301d8 != 0) {
            uVar5 = FUN_005657d0();
          }
          *(undefined4 *)(iVar1 + 0x30) = uVar5;
          if (DAT_007301d8 == 0) {
LAB_00444e27:
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00565810();
            iVar4 = iVar4 + -0x58;
            if (iVar4 < 0) goto LAB_00444e27;
          }
          *(int *)(iVar1 + 0x34) = iVar4;
          local_4 = local_4 + 1;
          if (1 < local_4) {
            *(undefined1 *)(param_1 + 0x15f) = 1;
            return local_8;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x17c));
  }
  *(undefined1 *)(param_1 + 0x15f) = 0;
  return local_8;
}
