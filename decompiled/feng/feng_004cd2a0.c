/* spd-match: far pct=9.63 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004CD2A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004cd460();
int __cdecl FUN_004cd490();
extern int DAT_006f1dd8;
extern unsigned char *DAT_007356a8;
extern int DAT_00745e40;
extern int DAT_00746a8c;
extern int DAT_00777b4c;
extern unsigned char *PTR_FUN_006c41f4;
extern void LAB_004cd31c(void);
void __fastcall FUN_004cd2a0(undefined4 * obj, undefined4 param_1, byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;

  int *piVar4;
  int iVar5;
  
  *obj = &PTR_FUN_006c41f4;
  iVar5 = -1;
  bVar2 = *param_2;
  while (bVar2 != 0) {
    iVar5 = iVar5 * 0x21 + (uint)bVar2;
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  obj[2] = iVar5;
  *(undefined1 *)(obj + 1) = 0;
  if ((DAT_00745e40 == 1) || (DAT_00777b4c == 1)) {
    piVar4 = &DAT_00746a8c;
    do {
      if (*piVar4 == iVar5) goto LAB_004cd31c;
      piVar4 = piVar4 + 1;
    } while ((int)piVar4 < 0x746a94);
    cVar3 = FUN_004cd460();
    if (((cVar3 != '\0') && (DAT_006f1dd8 != 0)) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0))
    {
      (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(10);
    }
  }
LAB_004cd31c:
  FUN_004cd490(0);
  return;
}
