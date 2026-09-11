/* spd-match: far pct=9.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061efe0();
int __cdecl FUN_0061f040();
int __cdecl FUN_0061f5e0();
int __cdecl FUN_00620ed0();
extern int DAT_006dfb5c;
extern int DAT_00709d80;
extern int DAT_00709d90;
extern int DAT_00709d94;
extern void LAB_006210e4(void);
extern void LAB_006210ec(void);
int unaff_EDI;

int FUN_00621020(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *unaff_EDI;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *local_18c;
  undefined4 auStack_188 [12];
  uint uStack_158;
  
  if (DAT_006dfb5c == 0xffffffff) {
    iVar3 = DirectDrawCreate(0,&local_18c,0);
    if (iVar3 < 0) {
      DAT_006dfb5c = 0;
    }
    else {
      puVar4 = auStack_188;
      for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      auStack_188[0] = 0x17c;
      iVar3 = (**(code **)(*local_18c + 0x2c))(local_18c,auStack_188,0);
      DAT_006dfb5c = (iVar3 < 0) - 1 & uStack_158;
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  FUN_0061f040();
  cVar1 = FUN_0061f5e0();
  if ((DAT_00709d94 == 0) || (DAT_00709d90 == 0)) {
    if (cVar1 == '\0') {
      if (DAT_00709d90 != 0) goto LAB_006210ec;
      uVar5 = 0;
    }
    else {
      if (DAT_00709d94 != 0) goto LAB_006210e4;
      uVar5 = 1;
    }
    cVar2 = FUN_00620ed0(uVar5);
    if (cVar2 == '\0') {
      return 0;
    }
  }
LAB_006210e4:
  if ((cVar1 != '\0') && (DAT_00709d94 != 0)) {
    return DAT_00709d94;
  }
LAB_006210ec:
  if (DAT_00709d80 != 0) {
    FUN_0061f040();
    iVar3 = FUN_0061efe0();
    if ((iVar3 != 0) && ((cVar1 == '\0' || (DAT_00709d94 != 0)))) {
      FUN_0061f040();
      iVar3 = FUN_0061efe0();
      switch(*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0xc4)) {
      case 0:
      case 2:
        break;
      case 1:
      case 3:
        return DAT_00709d94;
      default:
        return 0;
      }
    }
  }
  return DAT_00709d90;
}
