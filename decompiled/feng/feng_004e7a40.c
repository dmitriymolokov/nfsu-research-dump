/* spd-match: far pct=11.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_004e7be0();
int __cdecl FUN_004e7c80();
int __cdecl FUN_004e7cf0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
extern unsigned char *DAT_0073578c;
extern int DAT_00735dd4;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c30d4;
extern void LAB_004e7b62(void);
extern void LAB_004e7b9e(void);
extern void LAB_004e7bba(void);
extern void LAB_00688876(void);
void *ExceptionList;

undefined4 * FUN_004e7a40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688876;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar6 = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c30d4;
  FUN_004f8370(param_1 + 0x10,"master_thumb","car_thumb");
  puVar1 = param_1 + 0x1f;
  *puVar1 = puVar1;
  param_1[0x20] = puVar1;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  if (DAT_00735dd4 == 0) {
    param_1[0xf] = 0xd2236188;
  }
  do {
    pcVar5 = "GENERIC_STOCK";
    do {
      pcVar2 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar2 != '\0');
    FUN_004e7be0();
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  param_1[0x21] = *puVar1;
  FUN_004f8960();
  FUN_004e7c80();
  FUN_004e7cf0();
  *(undefined1 *)(param_1 + 8) = 1;
  if (param_1[3] == 0) {
LAB_004e7b9e:
    if (DAT_0073578c != 0) {
      uVar4 = FUN_004ef050(0xa8a3681a);
      goto LAB_004e7bba;
    }
  }
  else {
    iVar6 = FUN_004f3f90(&DAT_00746104);
    if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004e7b62:
      (*(unsigned char *)&(local_4)) = 3;
      FUN_004ffb00(iVar6);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
      goto LAB_004e7b9e;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar6 = FUN_004fd1e0(iVar3 + 0xdc), iVar6 == 0 &&
          (iVar6 = FUN_004fd1e0(iVar3 + 0xec), iVar6 == 0)))) goto LAB_004e7b9e;
      goto LAB_004e7b62;
    }
  }
  uVar4 = 0;
LAB_004e7bba:
  FUN_004f6910(uVar4);
  ExceptionList = local_c;
  return param_1;
}
