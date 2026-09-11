/* spd-match: far pct=6.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-ce_arity_c2198/va_00514530 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040be70();
int __cdecl FUN_00567160();
extern unsigned char *DAT_00735708;
extern int DAT_0073570c;
extern unsigned char *DAT_0078eaf0;
extern void LAB_00514589(void);
int unaff_EBP;
int unaff_EDI;
int unaff_ESI;
int * __fastcall FUN_00514530(int obj, int param_1, int param_2, int param_3, int param_4, int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;

  int *piVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  int iVar7;
  
  iVar7 = DAT_00735708;
  if (*(int *)(DAT_00735708 + 0x18) == *(int *)(DAT_00735708 + 0x2c)) {
    if (DAT_0073570c == 0) {
      DAT_0078eaf0 = DAT_0078eaf0 + 1;
      return (int *)0x0;
    }
  }
  else if (DAT_0073570c == 0) {
    piVar5 = *(int **)(DAT_00735708 + 0x10);
    iVar6 = *(int *)(DAT_00735708 + 0x18) + 1;
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
      if (*(int *)(DAT_00735708 + 0x1c) < iVar6) {
        *(int *)(DAT_00735708 + 0x1c) = iVar6;
      }
      *(int *)(iVar7 + 0x18) = iVar6;
      *(int *)(iVar7 + 0x10) = iVar3;
    }
    goto LAB_00514589;
  }
  piVar5 = (int *)FUN_00567160();
LAB_00514589:
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_0040be70();
  }
  piVar5[0x2c] = 0;
  puVar4 = *(undefined4 **)(obj + 0x1c);
  *puVar4 = piVar5;
  *(int **)(obj + 0x1c) = piVar5;
  piVar5[1] = (int)puVar4;
  *piVar5 = obj + 0x18;
  piVar1 = piVar5 + 8;
  *piVar1 = param_1;
  piVar5[9] = param_2;
  piVar5[10] = param_5;
  piVar5[0xc] = param_3;
  piVar5[0xd] = param_2;
  piVar5[0xe] = param_5;
  piVar2 = piVar5 + 0x10;
  *piVar2 = param_3;
  piVar5[0x11] = param_4;
  iVar7 = obj + 0x20;
  piVar5[0x12] = param_5;
  piVar5[0x14] = param_1;
  piVar5[0x15] = param_4;
  piVar5[0x16] = param_5;
  FUN_005abda2();
  FUN_005abda2(piVar5 + 0xc,piVar5 + 0xc,iVar7);
  FUN_005abda2(piVar2,piVar2,iVar7);
  FUN_005abda2(piVar5 + 0x14,piVar5 + 0x14,iVar7);
  piVar5[0xe] = (int)piVar1;
  piVar5[10] = (int)piVar1;
  piVar5[0x12] = (int)piVar1;
  piVar5[0x16] = (int)piVar1;
  piVar5[0x18] = (int)piVar1;
  piVar5[0x19] = iVar7;
  piVar5[0x1b] = unaff_EBP;
  piVar5[0x1c] = iVar7;
  piVar5[0x1e] = unaff_EBP;
  piVar5[0x1a] = 0x3f800000;
  piVar5[0x1d] = 0x3f800000;
  piVar5[0x20] = 0x3f800000;
  piVar5[0x23] = 0x3f800000;
  piVar5[0x1f] = unaff_EDI;
  piVar5[0x21] = (int)piVar1;
  piVar5[0x22] = unaff_EDI;
  piVar5[0x24] = *unaff_ESI;
  piVar5[0x25] = unaff_ESI[1];
  piVar5[0x26] = unaff_ESI[2];
  piVar5[0x27] = unaff_ESI[3];
  *(undefined1 *)((int)piVar5 + 0xa5) = 1;
  return piVar5;
}
