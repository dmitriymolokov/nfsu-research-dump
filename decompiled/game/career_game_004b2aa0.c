/* spd-match: far pct=14.29 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2065_cram/batches/20260724T133107Z_w0_tc0 */
#include "ghidra_compat.h"

extern char cRam00000000;

extern int DAT_00733ff8;

uint __fastcall FUN_004b2aa0(uint param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  
  if (((0xff < param_1) || ((&DAT_00733ff8)[param_1] == 0)) &&
     ((*(int *)(param_2 + 0x88b0) == 0 ||
      ((puVar2 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar2 == (uint *)0x0 ||
       (param_1 != *puVar2)))))) {
    return (uint)(cRam00000000 == '\x02');
  }
  pcVar1 = (char *)(param_1 + 0x34c + param_2);
  return CONCAT31((int3)((uint)pcVar1 >> 8),*pcVar1 == '\x02');
}
