/* spd-match: far pct=6.90 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00573370 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00421c00();
int __cdecl FUN_00572b50();
int __cdecl FUN_00674898();
extern int DAT_006f08a4;
extern unsigned char *DAT_007345d0;
extern int DAT_007361f0;
extern int DAT_0073ad34;
extern int _DAT_006cca38;
extern int _DAT_006ccc00;
extern void LAB_0057344b(void);
extern void LAB_00573488(void);
extern void LAB_0057348d(void);
int unaff_EDI;
uint __fastcall FUN_00573370(uint val)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;

  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_EDI;
  
  piVar7 = *(int **)(unaff_EDI + 0x14);
  if ((piVar7 != (int *)0x0) && (val = DAT_006f08a4, piVar7[0xd] <= (int)DAT_006f08a4)) {
    iVar6 = *(int *)(unaff_EDI + 0x10) + 1;
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
    iVar5 = FUN_00572b50("DEMO_MODE_SNAPSHOT",iVar6);
    uVar4 = DAT_007361f0;
    val = 0;
    if (iVar5 != 0) {
      *(int *)(unaff_EDI + 0x10) = iVar6;
      *(int *)(unaff_EDI + 0x14) = iVar5;
      val = FUN_00421c00(uVar4,0xe,iVar5);
    }
    piVar7 = *(int **)(unaff_EDI + 0x14);
    if (piVar7 == (int *)0x0) goto LAB_00573488;
  }
  iVar6 = CONCAT31((int3)(val >> 8),*(char *)(unaff_EDI + 9));
  if ((*(char *)(unaff_EDI + 9) == '\0') || (piVar7 == (int *)0x0)) goto LAB_0057348d;
  iVar6 = piVar7[0xb];
  if (_DAT_006ccc00 <= (float)(iVar6 - piVar7[10]) * _DAT_006cca38) {
    iVar5 = FUN_00674898();
    uVar3 = DAT_006f08a4;
    if (iVar6 - iVar5 < DAT_0073ad34) {
      piVar7[0xb] = DAT_0073ad34;
      piVar7[0xd] = uVar3;
      goto LAB_0057344b;
    }
  }
  else {
    iVar6 = *piVar7;
    piVar1 = (int *)piVar7[1];
    *piVar1 = iVar6;
    *(int **)(iVar6 + 4) = piVar1;
    iVar6 = DAT_007345d0;
    puVar2 = *(undefined4 **)(DAT_007345d0 + 0x6c);
    iVar5 = DAT_007345d0 + 0x68;
    *puVar2 = piVar7;
    *(int **)(iVar6 + 0x6c) = piVar7;
    *piVar7 = iVar5;
    piVar7[1] = (int)puVar2;
    *(int *)(unaff_EDI + 0x10) = *(int *)(unaff_EDI + 0x10) + -1;
LAB_0057344b:
    *(undefined4 *)(unaff_EDI + 0x14) = 0;
  }
  iVar6 = *(int *)(unaff_EDI + 0x14);
  if (iVar6 == 0) {
    iVar6 = *(int *)(unaff_EDI + 0x10) + 1;
    iVar5 = FUN_00572b50("DEMO_MODE_SNAPSHOT",iVar6);
    val = 0;
    if (iVar5 != 0) {
      *(int *)(unaff_EDI + 0x14) = iVar5;
      uVar4 = DAT_007361f0;
      *(int *)(unaff_EDI + 0x10) = iVar6;
      val = FUN_00421c00(uVar4,0xe,iVar5);
    }
LAB_00573488:
    return val & 0xffffff00;
  }
LAB_0057348d:
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}
