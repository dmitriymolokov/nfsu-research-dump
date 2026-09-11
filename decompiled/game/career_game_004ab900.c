/* spd-match: far pct=8.15 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AB900 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004a9fd0();
int __cdecl FUN_004ab880();
int __cdecl FUN_004abf10();
int __cdecl FUN_004ad210();
int __cdecl FUN_0051b720();
extern int DAT_00777b4c;
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
extern int DAT_0078a31c;
extern int DAT_0078a410;
extern int DAT_0078a414;
extern void LAB_004ab980(void);
extern void LAB_004ab9d1(void);
int unaff_retaddr;
void __fastcall FUN_004ab900(int obj, undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined4 unaff_retaddr;
  
  FUN_004ad210(param_1);
  bVar7 = *(int *)(obj + 0x2ebdc) == 4;
  FUN_004ab880(obj);
  uVar3 = DAT_0078a31c;
  uVar2 = DAT_0078a2fc;
  uVar1 = DAT_0078a2f0;
  iVar4 = 0;
  if (0 < *(int *)(obj + 0x2f840)) {
    piVar5 = (int *)(obj + 0x2ed64);
    do {
      if (*piVar5 == DAT_0078a410) {
        iVar4 = iVar4 * 0x15c + obj + 0x2ed60;
        goto LAB_004ab980;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x57;
    } while (iVar4 < *(int *)(obj + 0x2f840));
  }
  iVar4 = 0;
LAB_004ab980:
  iVar6 = 0;
  FUN_004a9fd0(DAT_0078a2f0,DAT_0078a2fc,DAT_0078a31c,bVar7);
  if (bVar7) {
    iVar6 = 0;
    if (0 < *(int *)(obj + 0x2f840)) {
      piVar5 = (int *)(obj + 0x2ed64);
      do {
        if (*piVar5 == DAT_0078a414) {
          iVar6 = iVar6 * 0x15c + obj + 0x2ed60;
          goto LAB_004ab9d1;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 0x57;
      } while (iVar6 < *(int *)(obj + 0x2f840));
    }
    iVar6 = 0;
LAB_004ab9d1:
    FUN_004a9fd0(uVar1,uVar2,uVar3,1);
  }
  FUN_004abf10(*(undefined4 *)(iVar4 + 0xac));
  if (bVar7) {
    FUN_004abf10(*(undefined4 *)(iVar6 + 0xac));
  }
  if (DAT_00777b4c == 8) {
    FUN_0051b720();
  }
  if (*(int **)(obj + 0x2ed5c) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0x2ed5c) + 8))(unaff_retaddr);
  }
  return;
}
