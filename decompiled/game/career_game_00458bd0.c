/* spd-match: far pct=5.98 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_00736150;
extern void LAB_00458c8d(void);
int unaff_EDI;

uint FUN_00458bd0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  int *unaff_EDI;
  
  uVar6 = param_1 - DAT_00736150 >> 5 & 0xff;
  iVar1 = (**(code **)(*unaff_EDI + 0x40))();
  if (((bool)('\x01' - (iVar1 != 1)) != (*(char *)(param_1 + 0xd) == '\x01')) ||
     (*(char *)(param_1 + 0xb) == '\x03')) {
    return 0;
  }
  iVar1 = 0;
  puVar5 = (uint *)(unaff_EDI + 3);
  do {
    if (((*puVar5 & 1) != 0) && (uVar6 == (*puVar5 >> 2 & 0xff))) {
      return (uint)unaff_EDI[iVar1 + 3] >> 1 & 1;
    }
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar1 < 8);
  uVar2 = (**(code **)(*unaff_EDI + 0x44))(param_1);
  if ((char)uVar2 != '\0') {
    (**(code **)(*unaff_EDI + 0x48))(param_1);
  }
  if (*(char *)(param_1 + 0xb) != '\t') {
    iVar1 = -1;
    iVar3 = 0;
    pbVar4 = (byte *)(unaff_EDI + 3);
    do {
      if ((*pbVar4 & 1) == 0) {
        iVar1 = iVar3;
        if (iVar3 != -1) goto LAB_00458c8d;
        break;
      }
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 4;
    } while (iVar3 < 8);
    (**(code **)(*unaff_EDI + 0x40))();
    iVar3 = iVar1;
LAB_00458c8d:
    unaff_EDI[iVar3 + 3] = (uVar6 << 1 | uVar2 & 1) << 1 | unaff_EDI[iVar3 + 3] & 0xfffffc01U | 1;
  }
  return uVar2 & 0xff;
}
