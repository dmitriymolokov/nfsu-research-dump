/* spd-match: far pct=8.46 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049E890 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f68c0();
int __cdecl FUN_0059fb80();
extern int DAT_006ee6f0;
void __fastcall FUN_0049e890(int obj, int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;

  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_180 [128];
  char local_100 [256];
  
  sVar2 = *(short *)(obj + 2);
  iVar4 = FUN_0059fb80();
  if (iVar4 == 0) {
    iVar4 = FUN_0059fb80();
  }
  iVar7 = 0x100;
  pcVar6 = local_100;
  do {
    cVar1 = pcVar6[iVar4 - (int)local_100];
    iVar7 = iVar7 + -1;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar7 != 0);
  iVar4 = FUN_0059fb80();
  if (iVar4 == 0) {
    iVar4 = FUN_0059fb80();
  }
  iVar7 = 0x80;
  pcVar6 = local_180;
  do {
    cVar1 = pcVar6[iVar4 - (int)local_180];
    iVar7 = iVar7 + -1;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar7 != 0);
  pcVar6 = (char *)FUN_0059fb80();
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)FUN_0059fb80();
  }
  piVar5 = _malloc(0x108);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5[2] = 0x2ccb70aa;
  }
  if (DAT_006ee6f0 == 7) {
    pcVar8 = local_180;
    pcVar9 = (char *)(int)sVar2;
    pcVar10 = pcVar6;
  }
  else {
    pcVar10 = local_180;
    pcVar8 = (char *)(int)sVar2;
    pcVar9 = pcVar6;
  }
  FUN_004f68c0(0xfc,local_100,pcVar8,pcVar9,pcVar10);
  puVar3 = *(undefined4 **)(param_1 + 8);
  *puVar3 = piVar5;
  *(int **)(param_1 + 8) = piVar5;
  piVar5[1] = (int)puVar3;
  *piVar5 = param_1 + 4;
  return;
}
