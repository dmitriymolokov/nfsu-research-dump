/* spd-match: far pct=8.70 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_char */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_005f7f90(char *param_2);
};
undefined4 ThisCallBox::FUN_005f7f90(char *param_2) {
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar2 + (1 - (int)(param_2 + 1));
    pcVar4 = (char *)_malloc((size_t)pcVar2);
    if (pcVar4 == (char *)0x0) {
      return 0x8007000e;
    }
    pcVar5 = pcVar4;
    for (uVar3 = (uint)pcVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = (uint)pcVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  _free(*(void **)(((int)this) + 0x48));
  *(char **)(((int)this) + 0x48) = pcVar4;
  return 0;
}
