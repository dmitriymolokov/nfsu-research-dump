/* spd-match: far pct=11.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040F0F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567160();
extern unsigned char *DAT_0078a4e8;
extern unsigned char *DAT_0078a6a8;
extern unsigned char *_DAT_007363fc;
int unaff_EDI;
void __fastcall FUN_0040f0f0(int * obj, int *param_1, int param_2, int param_3, int param_4, int param_5)

{
  int iVar1;
  undefined4 *puVar2;

  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  
  iVar1 = *obj;
  if ((*(int *)(iVar1 + 0x1c) == 0) || (*(int **)(*(int *)(iVar1 + 0x1c) + 0x14) != unaff_EDI)) {
    puVar3 = (undefined4 *)FUN_00567160();
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puVar3 + 6;
      *puVar5 = puVar5;
      puVar3[7] = puVar5;
      puVar3[4] = obj;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    *(undefined4 **)(iVar1 + 0x1c) = puVar3;
    if ((char)obj[0x15] == '\0') {
      puVar5 = &DAT_0078a4e8 + (*(char *)((int)obj + 0x51) * 7 + *unaff_EDI) * 2;
    }
    else {
      puVar5 = (undefined4 *)(&DAT_0078a6a8 + (*(char *)((int)obj + 0x51) * 7 + *unaff_EDI) * 8);
    }
    puVar2 = (undefined4 *)puVar5[1];
    *puVar2 = puVar3;
    puVar5[1] = puVar3;
    puVar3[1] = puVar2;
    *puVar3 = puVar5;
    _DAT_007363fc = _DAT_007363fc + 1;
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  piVar4 = (int *)FUN_00567160();
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = (int)param_1;
    piVar4[5] = param_2;
    piVar4[7] = param_4;
    piVar4[3] = 1;
    piVar4[4] = 0;
    piVar4[8] = param_5;
    piVar4[9] = param_3;
    piVar4[6] = (int)unaff_EDI;
    piVar4[10] = 0;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x1c);
  *puVar3 = piVar4;
  *(int **)(iVar1 + 0x1c) = piVar4;
  piVar4[1] = (int)puVar3;
  *piVar4 = iVar1 + 0x18;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  *(int **)(iVar1 + 0x14) = unaff_EDI;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + *param_1;
  return;
}
