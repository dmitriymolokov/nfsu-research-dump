/* spd-match: far pct=10.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00662e80();
extern int DAT_006eb720;
int unaff_retaddr;

void __fastcall FUN_00668ff0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  undefined4 local_f0;
  undefined1 local_e8;
  uint local_c;
  
  local_c = DAT_006eb720 ^ unaff_retaddr;
  puVar2 = &local_f0;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  (*(unsigned char *)&(local_f0)) = 0x67;
  (*((unsigned char *)&(local_f0) + 1)) = 0x45;
  (*((unsigned char *)&(local_f0) + 2)) = 0x41;
  local_e8 = 0x3f;
  FUN_00662e80(*(undefined4 *)(param_2 + 0x38),&local_f0,0xe0,0,param_2 + 0x3c,0x10);
  return;
}
