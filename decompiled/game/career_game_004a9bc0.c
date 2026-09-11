/* spd-match: far pct=13.41 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00438860();
int __cdecl FUN_004a9d60();
int __cdecl FUN_004aa200();
extern void LAB_006859b6(void);
void *ExceptionList;

int FUN_004a9bc0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006859b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa200();
  local_4 = 0;
  _eh_vector_constructor_iterator_((void *)(param_1 + 0xf954),0xf944,2,FUN_004aa200,FUN_004a9d60);
  *(undefined4 *)(param_1 + 0x2ebf0) = 0xae83b9db;
  *(undefined4 *)(param_1 + 0x2ebf4) = 0x6a97b51f;
  *(undefined4 *)(param_1 + 0x2ebf8) = 0xceffd44;
  *(undefined4 *)(param_1 + 0x2ec00) = 0;
  *(undefined1 *)(param_1 + 0x2ec04) = 0;
  iVar1 = 8;
  *(undefined4 *)(param_1 + 0x2ebfc) = 8;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  *(undefined4 *)(param_1 + 0x2eca0) = 0;
  *(undefined4 *)(param_1 + 0x2eca4) = 0x18ed8cac;
  *(undefined4 *)(param_1 + 0x2eca8) = 0x9c7511d8;
  *(undefined4 *)(param_1 + 0x2ecac) = 0;
  *(undefined4 *)(param_1 + 0x2ecb0) = 0;
  *(undefined4 *)(param_1 + 0x2ecb4) = 0;
  *(undefined4 *)(param_1 + 0x2ecb8) = 0;
  *(undefined4 *)(param_1 + 0x2ecbc) = 0;
  do {
    FUN_00438860();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x2f914) = 1;
  *(undefined4 *)(param_1 + 0x2f918) = 1;
  *(undefined1 *)(param_1 + 0x2f844) = 0;
  *(undefined1 *)(param_1 + 0x2f855) = 0;
  *(undefined1 *)(param_1 + 0x2f877) = 0;
  *(undefined1 *)(param_1 + 0x2f866) = 0;
  *(undefined1 *)(param_1 + 0x2f8aa) = 0;
  *(undefined1 *)(param_1 + 0x2f920) = 0;
  *(undefined4 *)(param_1 + 0x2f924) = 0;
  *(undefined1 *)(param_1 + 0x2f910) = 1;
  *(undefined1 *)(param_1 + 0x2f911) = 1;
  *(undefined4 *)(param_1 + 0x2f91c) = 0x7d3;
  ExceptionList = local_c;
  return param_1;
}
