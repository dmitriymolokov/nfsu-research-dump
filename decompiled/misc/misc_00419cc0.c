/* spd-match: far pct=20.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004198b0();
int __cdecl FUN_0041b970();
int __cdecl FUN_0041bd60();
extern void LAB_006850ae(void);
void *ExceptionList;

void FUN_00419cc0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006850ae;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_0041b970(param_1);
  (*(unsigned char *)&(local_4)) = 4;
  FUN_0041bd60();
  (*(unsigned char *)&(local_4)) = 3;
  FUN_0041bd60();
  (*(unsigned char *)&(local_4)) = 2;
  FUN_0041bd60();
  (*(unsigned char *)&(local_4)) = 1;
  FUN_0041bd60();
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  FUN_0041bd60();
  local_4 = 0xffffffff;
  FUN_004198b0(param_1 + 0x2224);
  ExceptionList = local_c;
  return;
}
