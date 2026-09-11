/* spd-match: far pct=4.92 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2065_puram/batches/20260724T133126Z_w0_tc0 */
#include "ghidra_compat.h"

undefined4 *puRam00000000;
undefined4 *puRam00000004;
int iRam00000000;

int __cdecl FUN_004df080();
int __cdecl FUN_004f78e0();
extern int DAT_006ee6f0;
extern unsigned char *DAT_006fa210;
extern int DAT_00734998;
extern unsigned char *PTR_FUN_006c37c8;
extern void LAB_004def1d(void);
extern void LAB_004def53(void);
extern void LAB_004defd4(void);
extern void LAB_00688473(void);
void *ExceptionList;

undefined4 * FUN_004dee90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688473;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_006c37c8;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  local_4 = 1;
  if (DAT_00734998 == 2) {
    piVar3 = _malloc(0xc);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar5 = 0;
      piVar4 = &DAT_006fa210;
      do {
        if (*piVar4 == 0) {
          piVar3[2] = (int)(&DAT_006fa210 + iVar5 * 4);
          goto LAB_004def1d;
        }
        piVar4 = piVar4 + 4;
        iVar5 = iVar5 + 1;
      } while ((int)piVar4 < 0x6fa290);
      piVar3[2] = 0;
    }
LAB_004def1d:
    puVar6 = (undefined4 *)param_1[0x11];
    *puVar6 = piVar3;
    param_1[0x11] = piVar3;
    piVar3[1] = (int)puVar6;
    *piVar3 = (int)puVar1;
    piVar3 = _malloc(0xc);
    if (piVar3 == (int *)0x0) {
      puRam00000004 = (undefined4 *)param_1[0x11];
      *puRam00000004 = 0;
      param_1[0x11] = 0;
      puRam00000000 = puVar1;
    }
    else {
      iVar5 = 0;
      piVar4 = &DAT_006fa210;
      do {
        if (*piVar4 == 7) {
          puVar6 = &DAT_006fa210 + iVar5 * 4;
          goto LAB_004def53;
        }
        piVar4 = piVar4 + 4;
        iVar5 = iVar5 + 1;
      } while ((int)piVar4 < 0x6fa290);
      puVar6 = (undefined4 *)0x0;
LAB_004def53:
      piVar3[2] = (int)puVar6;
      puVar6 = (undefined4 *)param_1[0x11];
      *puVar6 = piVar3;
      param_1[0x11] = piVar3;
      piVar3[1] = (int)puVar6;
      *piVar3 = (int)puVar1;
    }
  }
  else {
    puVar6 = &DAT_006fa210;
    do {
      if ((*(byte *)(puVar6 + 3) & 1) != 0) {
        piVar3 = _malloc(0xc);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3[2] = (int)puVar6;
        }
        puVar2 = (undefined4 *)param_1[0x11];
        *puVar2 = piVar3;
        param_1[0x11] = piVar3;
        piVar3[1] = (int)puVar2;
        *piVar3 = (int)puVar1;
      }
      puVar6 = puVar6 + 4;
    } while ((int)puVar6 < 0x6fa290);
  }
  for (puVar6 = (undefined4 *)*puVar1; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
    if (*(int *)puVar6[2] == DAT_006ee6f0) goto LAB_004defd4;
  }
  puVar6 = (undefined4 *)0x0;
LAB_004defd4:
  param_1[0x12] = puVar6;
  FUN_004df080();
  ExceptionList = local_c;
  return param_1;
}
