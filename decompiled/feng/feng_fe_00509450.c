/* spd-match: far pct=7.58 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_int */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00(...);
int __cdecl FUN_004f3f90(...);
int __cdecl FUN_004f6360(...);
int __cdecl FUN_00504320(...);
int __cdecl FUN_00504390(...);
int __cdecl FUN_00509570(...);
int __cdecl FUN_00509af0(...);
extern unsigned char *DAT_00735e6c;
extern int DAT_00745e4c;
extern int DAT_00746104;
extern void LAB_0050949e(...);

struct ThisCallBox {
  void FUN_00509450(int param_2);
};
void ThisCallBox::FUN_00509450(int param_2) {
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xc407210) {
    if (DAT_00745e4c == 1) {
      DAT_00745e4c = 2;
      *(int *)(((int)this) + 0x40) = (unsigned int)(DAT_00735e6c + 0x720);
      uVar2 = 0x6bd4fb68;
LAB_0050949e:
      FUN_00495f00(uVar2);
      FUN_00509570(((int)this));
      FUN_00509af0();
      return;
    }
    if (DAT_00745e4c == 2) {
      FUN_00504320(*(undefined4 *)(((int)this) + 0xc));
      FUN_004f6360(*(undefined4 *)(((int)this) + 0xc));
    }
  }
  else if (param_2 == -0x6ee54c9c) {
    if ((DAT_00745e4c == 0) || (DAT_00745e4c == 1)) {
      iVar1 = FUN_004f3f90(&DAT_00746104);
      if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x18) != 0 && (*(int **)(iVar1 + 0x14) != (int *)0x0)))
         ) {
        (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x1122aabb,0,0,*(int *)(iVar1 + 0x18));
      }
      FUN_00504390();
      FUN_004f6360(*(undefined4 *)(((int)this) + 0xc));
      return;
    }
    if (DAT_00745e4c == 2) {
      DAT_00745e4c = 1;
      *(int *)(((int)this) + 0x40) = (unsigned int)(DAT_00735e6c);
      uVar2 = 0x8bc92e99;
      goto LAB_0050949e;
    }
  }
  return;
}
