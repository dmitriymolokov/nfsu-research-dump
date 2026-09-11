/* spd-match: far pct=5.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00458bd0();
extern int DAT_00736150;
extern int DAT_0077af30;
extern void LAB_005a54d6(void);

int FUN_005a53c0(int *param_1,int *param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  char cVar1;
  char extraout_AL;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  uint3 extraout_var;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  do {
    iVar2 = 0;
    do {
      if (*(char *)(*param_3 + 0x81 + iVar2) == -1) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if (iVar2 <= iVar5) {
      (**(code **)(*param_1 + 0x28))(param_4,*param_2);
      uVar4 = extraout_var;
      if (extraout_AL != '\0') {
        iVar5 = *param_2;
        *param_3 = *param_4 * 0x88 + 0x27c + iVar5;
        *(undefined1 *)param_3 = 0;
        return CONCAT31((int3)((uint)iVar5 >> 8),1);
      }
LAB_005a54d6:
      return (uint)uVar4 << 8;
    }
    uVar6 = (uint)*(byte *)(*param_3 + 0x81 + iVar5);
    if (uVar6 == 0xff) {
      iVar2 = 0;
    }
    else {
      iVar2 = uVar6 * 0x20 + DAT_00736150;
    }
    iVar3 = (**(code **)(*param_1 + 4))();
    uVar4 = (uint3)((uint)-iVar3 >> 8);
    if ((*(char *)(iVar2 + 0xb) == '\x03') &&
       ((*(char *)(iVar2 + 0xd) == '\x01') != (bool)('\x01' - (iVar3 != 0)))) goto LAB_005a54d6;
    cVar1 = FUN_00458bd0(iVar2);
    if (cVar1 != '\0') {
      *param_2 = (&DAT_0077af30)[*(byte *)(iVar2 + 9)];
      iVar5 = (uint)*(ushort *)(iVar2 + 4) * 0x88 + 0x27c + (&DAT_0077af30)[*(byte *)(iVar2 + 9)];
      *param_3 = iVar5;
      *param_4 = ((iVar5 - *param_2) + -0x27c) / 0x88;
      *param_5 = 1;
      return 1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}
