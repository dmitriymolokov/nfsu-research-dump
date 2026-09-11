/* spd-match: far pct=12.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004f7b50();
int __cdecl FUN_00504010();
extern int DAT_00734bc8;
extern unsigned char *PTR_FUN_006bcab4;
extern unsigned char *PTR_LAB_006bca48;
extern void LAB_0068773f(void);
void *ExceptionList;

void FUN_00558b80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0068773f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006bcab4;
  local_4 = 3;
  DAT_00734bc8 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x1a4,0xc,0x20,FUN_00504010);
  (*(unsigned char *)&(local_4)) = 2;
  _eh_vector_destructor_iterator_(param_1 + 0x122,0xc,0x20,FUN_00504010);
  (*(unsigned char *)&(local_4)) = 1;
  _eh_vector_destructor_iterator_(param_1 + 0xa0,0xc,0x20,FUN_00504010);
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  _eh_vector_destructor_iterator_(param_1 + 0x1e,0xc,0x20,FUN_00504010);
  *param_1 = &PTR_LAB_006bca48;
  local_4 = 0xffffffff;
  DAT_00734bc8 = 0;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}
