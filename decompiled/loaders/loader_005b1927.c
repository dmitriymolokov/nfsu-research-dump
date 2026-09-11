/* spd-match: far pct=11.63 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_char */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_005b1927(char *param_2);
};
undefined4 ThisCallBox::FUN_005b1927(char *param_2) {
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  
  pcVar1 = param_2 + 1;
  pcVar3 = param_2;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)_malloc((size_t)(pcVar3 + (5 - (int)pcVar1)));
  if (pcVar4 == (char *)0x0) {
    uVar5 = 0x8007000e;
  }
  else {
    *(undefined4 *)pcVar4 = *((undefined4 *)this);
    ((undefined4 *)this)[1] = (unsigned int)pcVar3 + (((undefined4 *)this)[1] - (int)pcVar1);
    *((undefined4 *)this) = (unsigned int)pcVar4;
    for (uVar6 = (uint)(pcVar3 + (1 - (int)pcVar1)) >> 2; pcVar4 = pcVar4 + 4, uVar6 != 0;
        uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
    }
    for (uVar6 = (uint)(pcVar3 + (1 - (int)pcVar1)) & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar4 = *param_2;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uVar5 = 0;
  }
  return uVar5;
}
