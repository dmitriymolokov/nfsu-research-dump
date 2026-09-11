/* spd-match: far pct=7.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042FC00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0042c670();
int __cdecl FUN_0042c6d0();
extern int DAT_00700b5c;
extern int DAT_00735fb0;
extern int DAT_00735fb8;
extern int DAT_007361a8;
extern int DAT_007361ac;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_00778ac0;
extern int DAT_00778ac1;
extern unsigned char *DAT_00778ac8;
extern unsigned char *DAT_007796a0;
extern int DAT_007796a8;
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
extern int DAT_0078a344;
extern int _DAT_006b7a20;
extern int _DAT_006b7a24;
extern int _DAT_007796b0;
void __fastcall FUN_0042fc00(int obj)

{
  float fVar1;

  int iVar2;
  int iVar3;
  byte bVar4;
  float *pfVar5;
  int iVar6;
  
  iVar2 = *(int *)(obj + 0x27c);
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar2 + 0xc);
  }
  iVar3 = *(int *)(DAT_007361f0 + 0x3c);
  if (((((iVar3 == 0) || (*(int *)(iVar3 + 0x20) == 0)) || (*(int *)(iVar3 + 0x1c) == 0)) &&
      ((*(int *)(DAT_007361f0 + 0x40) == 0 || (*(int *)(*(int *)(DAT_007361f0 + 0x40) + 0x1c) == 0))
      )) && ((iVar6 < 2 || (4 < iVar6)))) {
    fVar1 = _DAT_007796b0;
    if (DAT_007796a8 < 1) {
      fVar1 = *(float *)(*(int *)(obj + 4) + 0x814);
    }
    iVar3 = DAT_007796a0 + -1;
    if (0 < iVar3) {
      pfVar5 = (float *)(&DAT_00778ac8 + iVar3 * 0x4c);
      do {
        if (*pfVar5 <= fVar1) break;
        iVar3 = iVar3 + -1;
        pfVar5 = pfVar5 + -0x13;
      } while (0 < iVar3);
    }
    if (&DAT_00778ac0 + iVar3 * 0x4c == (byte *)0x0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (&DAT_00778ac0)[iVar3 * 0x4c];
    }
    if (((DAT_00700b5c != 0) || (*(float *)(*(int *)(obj + 4) + 0x3d4) < _DAT_006b7a20)) ||
       ((bVar4 < 2 || (bVar4 == 0x11)))) {
      if (((iVar2 == 0) || (iVar6 == 0x14)) &&
         (FUN_0042c670(0), (&DAT_00778ac1)[iVar3 * 0x4c] == '\0')) {
        (**(code **)(**(int **)(obj + 0x27c) + 0x34))();
      }
    }
    else if ((iVar2 == 0) || (iVar6 != 0x14)) {
      FUN_0042c6d0(obj,0x14,0);
    }
  }
  if (((DAT_0078a2f0 == 1099) && (DAT_00735fb0 != 0)) && (DAT_00735fb8 == 4)) {
    *(undefined1 *)(obj + 0x4af) = 1;
    return;
  }
  iVar2 = DAT_007361ac;
  if (DAT_007361ac == 3) {
    iVar2 = (int)*(char *)(obj + 0x2a);
  }
  *(bool *)(obj + 0x4af) = iVar2 == 0;
  *(bool *)(obj + 0x4af) = iVar2 == 0 && _DAT_006b7a24 < *(float *)(*(int *)(obj + 4) + 0x3d0)
  ;
  iVar2 = (**(code **)(**(int **)(*(int *)(obj + 4) + 0x2c) + 0x40))();
  if ((iVar2 == DAT_0078a2fc) && (*(char *)(obj + 0x4ac) == '\0')) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  bVar4 = *(byte *)(obj + 0x4af) & bVar4;
  *(byte *)(obj + 0x4af) = bVar4;
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    *(undefined1 *)(obj + 0x4af) = 0;
    return;
  }
  *(byte *)(obj + 0x4af) = bVar4;
  return;
}
