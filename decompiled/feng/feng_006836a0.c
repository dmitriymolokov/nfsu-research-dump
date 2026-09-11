/* spd-match: far pct=12.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_00639f20();
int __cdecl FUN_0063a5d0();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00642450();
int __cdecl FUN_00683460();
extern int DAT_00717f18;
extern int DAT_00717f34;
extern unsigned char *DAT_00717f38;

uint FUN_006836a0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_0063f190(&DAT_00717f18);
  if (DAT_00717f38 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = DAT_00717f38;
    DAT_00717f38 = (uint *)DAT_00717f38[1];
  }
  FUN_0063f1a0(&DAT_00717f18);
  if (puVar2 == (uint *)0x0) {
    FUN_00642450("ASYNCFILE_load - out of async request blocks\n");
    return 0;
  }
  DAT_00717f34 = ((int)DAT_00717f34) + 0x100;
  if (DAT_00717f34 == 0) {
    DAT_00717f34 = 0x100;
  }
  *puVar2 = *puVar2 & 0xff | ((int)DAT_00717f34);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 1;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[10] = param_2;
  puVar2[0xb] = 0;
  uVar1 = FUN_0063a5d0(param_1,1,100,puVar2);
  puVar2[7] = uVar1;
  if (puVar2[7] == 0) {
    FUN_00642450("ASYNCFILE_load - unable to initiate file open\n");
    return 0;
  }
  FUN_00639f20(puVar2[7],FUN_00683460);
  return *puVar2;
}
