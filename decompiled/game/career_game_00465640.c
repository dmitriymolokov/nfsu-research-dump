/* spd-match: far pct=7.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00465640 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00466500();
int __cdecl FUN_00530100();
extern int DAT_006f1dd8;
extern unsigned char *DAT_007361f8;
extern int DAT_0073ad34;
void __fastcall FUN_00465640(int val, undefined4 param_1, int *param_2)

{
  undefined4 *puVar1;
  char cVar2;

  int iVar3;
  int iVar4;
  int *unaff_ESI;
  bool bVar5;
  
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x19] = val;
  iVar4 = DAT_007361f8;
  iVar3 = DAT_007361f8 + 0x10;
  unaff_ESI[0x18] = 0;
  puVar1 = *(undefined4 **)(iVar4 + 0x14);
  *puVar1 = unaff_ESI;
  *(int **)(iVar4 + 0x14) = unaff_ESI;
  unaff_ESI[1] = (int)puVar1;
  *unaff_ESI = iVar3;
  if (param_2 == (int *)0x0) {
    unaff_ESI[8] = 0;
    unaff_ESI[9] = 0;
    unaff_ESI[10] = 0;
  }
  else {
    iVar3 = *param_2;
    iVar4 = param_2[2];
    bVar5 = DAT_006f1dd8 != 0;
    unaff_ESI[9] = param_2[1];
    unaff_ESI[8] = iVar3;
    unaff_ESI[10] = iVar4;
    if (bVar5) {
      FUN_00530100(unaff_ESI);
    }
  }
  iVar4 = DAT_0073ad34;
  unaff_ESI[2] = DAT_0073ad34;
  unaff_ESI[3] = iVar4;
  unaff_ESI[4] = 0;
  *(undefined1 *)(unaff_ESI + 0x1a) = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  cVar2 = FUN_00466500();
  if (cVar2 != '\0') {
    iVar4 = *(int *)(unaff_ESI[0x19] + 600);
    if (*(char *)(iVar4 + 0x15) == '\x03') {
      iVar4 = *(int *)(unaff_ESI[0x19] + 0x25c);
    }
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x130) = *(int *)(iVar4 + 0x130) + 1;
    }
  }
  return;
}
