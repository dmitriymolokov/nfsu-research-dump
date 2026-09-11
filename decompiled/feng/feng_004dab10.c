/* spd-match: far pct=10.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_004d7770();
int __cdecl FUN_004d8270();
int __cdecl FUN_004d82f0();
int __cdecl FUN_004da1a0();
int __cdecl FUN_004dbad0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00504450();
extern int DAT_006b6b30;
extern int DAT_006f88a4;
extern int DAT_00735718;
extern int DAT_0073578c;
extern int _DAT_00746de0;
extern unsigned char *PTR_LAB_006c3c14;
extern void LAB_004d7750(void);
extern void LAB_006888fc(void);
void *ExceptionList;

undefined4 * FUN_004dab10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006888fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  local_8 = 0;
  *param_1 = &PTR_LAB_006c3c14;
  _eh_vector_constructor_iterator_
            (param_1 + 0x17,0x2c,10,(_func_void_void_ptr *)&LAB_004d7750,FUN_004d7770);
  (*(unsigned char *)&(local_8)) = 1;
  _eh_vector_constructor_iterator_
            (param_1 + 0x85,0x2c,0x14,(_func_void_void_ptr *)&LAB_004d7750,FUN_004d7770);
  (*(unsigned char *)&(local_8)) = 2;
  _eh_vector_constructor_iterator_
            (param_1 + 0x161,0x2c,0x1e,(_func_void_void_ptr *)&LAB_004d7750,FUN_004d7770);
  puVar1 = param_1 + 0x2cb;
  param_1[0x2bf] = 0;
  *puVar1 = puVar1;
  param_1[0x2cc] = puVar1;
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),4);
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x16] = 0xffffffff;
  FUN_004da1a0();
  if ((DAT_00735718 == 3) && (DAT_006f88a4 == 4)) {
    _DAT_00746de0 = DAT_006b6b30;
  }
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xb64d16e6);
    }
  }
  param_1[0x2ef] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x6b20c153);
    }
  }
  param_1[0x2f0] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xf3bb2c9a);
    }
  }
  param_1[0x2f1] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xf3bb2ca0);
    }
  }
  param_1[0x2f2] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x4603fd50);
    }
  }
  param_1[0x2f3] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x770c7ae9);
    }
  }
  param_1[0x2f4] = iVar5;
  uVar6 = FUN_004f65d0();
  param_1[0x2f5] = uVar6;
  iVar5 = FUN_004dbad0();
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x10) != 0)) {
    cVar4 = *(char *)(*(int *)(iVar5 + 0x10) + 0x11);
    bVar2 = true;
    if ((cVar4 == '\x02') && (cVar3 = FUN_004d8270(), cVar3 == '\0')) {
      bVar2 = false;
    }
    if ((cVar4 == '\x03') && (cVar4 = FUN_004d82f0(), cVar4 == '\0')) {
      ExceptionList = local_10;
      return param_1;
    }
    if (bVar2) {
      FUN_00504450();
    }
  }
  ExceptionList = local_10;
  return param_1;
}
