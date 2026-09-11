/* spd-match: far pct=17.58 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00448110 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565b60();
int __cdecl FUN_0058ab00();
int __cdecl FUN_0058aba0();
extern unsigned char *DAT_007360e8;
extern void LAB_004482e0(void);
void __fastcall FUN_00448110(undefined4 val, undefined4 param_1, int param_2)

{

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_2 + 0x98) = param_1;
  *(undefined4 *)(param_2 + 0x94) = val;
  DAT_007360e8 = DAT_007360e8 + 1;
  if (*(int *)(param_2 + 0x9c) == 0) {
    if (*(int *)(param_2 + 0xa0) != 0) {
      uVar3 = *(uint *)(param_2 + 0x88);
      if ((*(uint *)(param_2 + 0xc) & 2) != 0) {
        uVar3 = uVar3 | 8;
      }
      if ((*(uint *)(param_2 + 0xc) >> 3 & 1) != 0) {
        uVar3 = uVar3 | 8;
      }
      uVar1 = FUN_00565b60(*(int *)(param_2 + 0xa0),0,0,uVar3);
      *(undefined4 *)(param_2 + 0x9c) = uVar1;
    }
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + 1;
    FUN_0058aba0(*(undefined4 *)(param_2 + 0x9c),param_2 + 0x18,*(undefined4 *)(param_2 + 0x10),
                 *(int *)(param_2 + 0xa0),&LAB_004482e0,param_2);
    uVar3 = *(uint *)(param_2 + 0xc);
    iVar2 = FUN_0058ab00();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x4c) = 5;
      *(undefined4 *)(iVar2 + 0x48) = 0x2000000;
      *(uint *)(iVar2 + 0x50) = uVar3 & 0x20;
    }
  }
  return;
}
