/* spd-match: far pct=10.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_0040a880();
int __cdecl FUN_004ad8d0();
extern void LAB_004ad8e0(void);
extern void LAB_004ad920(void);
extern void LAB_00685981(void);
void *ExceptionList;

int FUN_004ad810(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685981;
  local_c = ExceptionList;
  iVar1 = param_1 + 0x48;
  ExceptionList = &local_c;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x4c) = iVar1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_4 = 0;
  _eh_vector_constructor_iterator_((void *)(param_1 + 0x50),0x68,0x20,FUN_004ad8d0,FUN_0040a880);
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  _eh_vector_constructor_iterator_
            ((void *)(param_1 + 0xd50),0x2e0,2,(_func_void_void_ptr *)&LAB_004ad8e0,
             (_func_void_void_ptr *)&LAB_004ad920);
  *(undefined4 *)(param_1 + 0x1318) = 0;
  *(undefined4 *)(param_1 + 0x131c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = local_c;
  return param_1;
}
