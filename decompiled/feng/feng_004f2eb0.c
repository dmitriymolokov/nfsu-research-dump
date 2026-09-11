/* spd-match: far pct=20.07 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F2EB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00407da0();
int __cdecl FUN_004f2810();
int __cdecl FUN_004f2cb0();
int __cdecl FUN_00565ce0();
int __cdecl FUN_00566f20();
extern int DAT_007349b4;
extern int DAT_007349b8;
extern int DAT_0073d814;
extern int DAT_0073d818;
extern int DAT_00746910;
void __fastcall FUN_004f2eb0(int obj)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  piVar6 = (int *)(obj + 0x70);
  iVar5 = 0x40;
  do {
    if (((((char)piVar6[0x1c] != '\0') && (piVar6[1] != 0)) && (*piVar6 != 0)) &&
       ((*(uint *)(*piVar6 + 0x1c) & 0x2000000) != 0)) {
      FUN_004f2810(obj,piVar6 + -0x14);
    }
    piVar6 = piVar6 + 0x34;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar6 = &DAT_00746910;
  iVar5 = DAT_007349b4;
  do {
    piVar1 = (int *)*piVar6;
    if (piVar1 != piVar6) {
      for (; piVar1 != piVar6; piVar1 = (int *)*piVar1) {
        FUN_004f2cb0();
        iVar5 = DAT_007349b4;
      }
      piVar1 = (int *)*piVar6;
      while (piVar1 != piVar6) {
        piVar1 = (int *)*piVar6;
        iVar4 = *piVar1;
        piVar2 = (int *)piVar1[1];
        *piVar2 = iVar4;
        *(int **)(iVar4 + 4) = piVar2;
        iVar4 = *(int *)(iVar5 + 0x18);
        *piVar1 = *(int *)(iVar5 + 0x10);
        *(int **)(iVar5 + 0x10) = piVar1;
        iVar4 = iVar4 + -1;
        bVar7 = DAT_007349b8 != 0;
        *(int *)(iVar5 + 0x18) = iVar4;
        iVar3 = DAT_007349b4;
        if (bVar7) {
          if (iVar4 == 0) {
            if (DAT_0073d814 != 0) {
              FUN_00407da0(&DAT_0073d818);
            }
            if (((*(byte *)(iVar5 + 0x14) & 8) != 0) && (0 < *(int *)(iVar5 + 0x18))) {
              FUN_00566f20(iVar5,0);
            }
            do {
              iVar5 = *(int *)(iVar5 + 8);
              FUN_00565ce0();
              iVar3 = iVar5;
            } while (iVar5 != 0);
          }
          else {
            DAT_007349b8 = 1;
          }
        }
        DAT_007349b4 = iVar3;
        piVar1 = (int *)*piVar6;
      }
    }
    piVar6 = piVar6 + -2;
  } while (0x746117 < (int)piVar6);
  return;
}
