/* spd-match: far pct=5.69 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_00467700();
extern int DAT_00700e5c;
extern int DAT_00700e60;
extern int DAT_007313f4;
extern int _DAT_006cc8a8;
extern int _DAT_006cc954;
extern int _DAT_006ef2cc;
extern void LAB_00592f33(void);
extern void LAB_00592f99(void);
extern void LAB_00592fc0(void);
int unaff_EBX;
int unaff_EDI;

void FUN_00592e80(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int unaff_EBX;
  int unaff_EDI;
  float10 fVar5;
  
  iVar3 = DAT_007313f4;
  *(undefined4 *)(unaff_EDI + 0x10) = *(undefined4 *)(unaff_EDI + 8);
  iVar2 = DAT_00700e5c;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  if (iVar3 < iVar2) {
    for (puVar1 = *(undefined4 **)(unaff_EDI + 0x1c); puVar1 != (undefined4 *)(unaff_EDI + 0x1c);
        puVar1 = (undefined4 *)*puVar1) {
      if ((*(char *)(puVar1 + 3) == '\0') &&
         (iVar2 = puVar1[2], *(int *)(iVar2 + 0x260) < DAT_00700e60)) {
        if (unaff_EBX == 0) {
          fVar5 = (float10)*(float *)(iVar2 + 0x26c);
          if ((float10)_DAT_006cc8a8 == fVar5) goto LAB_00592f33;
          if (fVar5 <= (float10)*(float *)(unaff_EDI + 8)) {
            *(undefined4 *)(iVar2 + 0x26c) = 0xbf800000;
            goto LAB_00592f99;
          }
          *(float *)(iVar2 + 0x26c) = (float)(fVar5 - (float10)*(float *)(unaff_EDI + 8));
        }
        else {
          iVar3 = *(int *)(unaff_EBX + 600);
          if (((*(char *)(iVar3 + 0x16) == '\0') ||
              ((iVar3 != *(int *)(iVar2 + 600) && (iVar3 != *(int *)(iVar2 + 0x25c))))) &&
             ((iVar3 = *(int *)(unaff_EBX + 0x25c), *(char *)(iVar3 + 0x16) == '\0' ||
              ((iVar3 != *(int *)(iVar2 + 600) && (iVar3 != *(int *)(iVar2 + 0x25c))))))) {
            fVar5 = (float10)FUN_00467700(0xbf800000);
          }
          else {
LAB_00592f33:
            fVar4 = *(float *)(unaff_EDI + 8) - *(float *)(unaff_EDI + 0xc);
            fVar5 = (float10)FUN_00467700(fVar4);
            if (((float10)fVar4 < fVar5) &&
               (fVar5 < (float10)_DAT_006ef2cc * (float10)_DAT_006cc954 !=
                (fVar5 == (float10)_DAT_006ef2cc * (float10)_DAT_006cc954))) {
              *(float *)(puVar1[2] + 0x26c) = (float)(fVar5 - (float10)fVar4);
              goto LAB_00592fc0;
            }
          }
LAB_00592f99:
          if ((fVar5 != (float10)_DAT_006cc8a8) &&
             (fVar5 = fVar5 + (float10)*(float *)(unaff_EDI + 0xc),
             fVar5 < (float10)*(float *)(unaff_EDI + 0x10))) {
            *(float *)(unaff_EDI + 0x10) = (float)fVar5;
            *(undefined4 *)(unaff_EDI + 0x18) = puVar1[2];
          }
        }
      }
LAB_00592fc0:;
    }
  }
  return;
}
