/* spd-match: far pct=16.31 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_00/attempt3_eagl_ptr_cast */
#include "ghidra_compat.h"

BOOL __stdcall DestroyWindow(HWND);
extern int iRam00709710;
extern int iRam00709714;
extern int iRam00709718;

int __cdecl FUN_0061f7e0(...);
int __cdecl FUN_006204e0(...);
int __cdecl FUN_006205b0(...);
int __cdecl FUN_00620970(...);
extern int DAT_007096d8;
extern int DAT_00709704;
extern int DAT_00709708;
extern int DAT_00709d80;

struct ThisCallBox {
  undefined4 FUN_00620d90(char param_2, undefined4 param_3);
};
undefined4 ThisCallBox::FUN_00620d90(char param_2, undefined4 param_3) {
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(((int)this) + 0xc);
  if (*(int *)(iVar1 + 0xcc) != 0) {
    if ((((*(int *)(iVar1 + 200) != *(int *)(iVar1 + 0xc4)) &&
         (*(int *)(iVar1 + 200) = *(int *)(iVar1 + 0xc4), ((HWND)(unsigned int)DAT_007096d8) != (HWND)0)) &&
        (iVar1 = *(int *)(*(int *)(((int)this) + 0xc) + 200), iVar1 != 3)) && (iVar1 != 2)) {
      DestroyWindow((HWND)(unsigned int)DAT_007096d8);
    }
    DAT_007096d8 = (int)(unsigned int)(HWND)**(undefined4 **)(*(int *)(((int)this) + 0xc) + 0xcc);
    puVar2 = (unsigned int *)&DAT_00709704;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_2 == '\0') {
      FUN_0061f7e0(param_3);
    }
    else {
      FUN_006204e0(param_3);
    }
    iRam00709710 = *(undefined4 *)(*(int *)(((int)this) + 0xc) + 100);
    DAT_00709704 = *(undefined4 *)(*(int *)(((int)this) + 0xc) + 0x4c);
    DAT_00709708 = *(undefined4 *)(*(int *)(((int)this) + 0xc) + 0x50);
    switch(*(undefined4 *)(*(int *)(((int)this) + 0xc) + 0x48)) {
    case 0:
      iRam00709718 = 1;
      break;
    case 1:
      iRam00709718 = 2;
      break;
    case 2:
      iRam00709718 = 3;
      break;
    case 3:
      iRam00709718 = 4;
    }
    iRam00709714 = *(undefined4 *)(*(int *)(((int)this) + 0xc) + 0x44);
    if (DAT_00709d80 == 0) {
      iVar1 = FUN_00620970(param_3);
    }
    else {
      iVar1 = FUN_006205b0();
    }
    if ((-1 < iVar1) && (DAT_00709d80 != 0)) {
      return 1;
    }
  }
  return 0;
}
