/* spd-match: far pct=7.54 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_0073ad34;
extern int _DAT_006cca38;
extern void LAB_00429203(void);
extern void LAB_0042920f(void);
extern void LAB_00429222(void);
int unaff_ESI;

void FUN_00429190(void)

{
  float fVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int unaff_ESI;
  
  if (*(int *)(*(int *)(unaff_ESI + 0x14) + 4) == 1) {
    return;
  }
  bVar2 = false;
  fVar1 = (float)(DAT_0073ad34 - *(int *)(unaff_ESI + 0x844)) * _DAT_006cca38;
  if (*(float *)(unaff_ESI + 0x848) <= fVar1) {
    fVar1 = fVar1 - *(float *)(unaff_ESI + 0x848);
    if (*(float *)(unaff_ESI + 0x848) <= fVar1) {
      if (fVar1 - *(float *)(unaff_ESI + 0x850) < *(float *)(unaff_ESI + 0x84c)) goto LAB_00429203;
    }
    else {
      if (*(char *)(unaff_ESI + 0x840) == '\0') goto LAB_00429203;
      bVar2 = false;
    }
LAB_0042920f:
    if (*(char *)(unaff_ESI + 0x854) == '\0') {
      uVar3 = 0;
      goto LAB_00429222;
    }
  }
  else {
LAB_00429203:
    bVar2 = true;
    if (*(char *)(unaff_ESI + 0x83e) == '\0') goto LAB_0042920f;
  }
  uVar3 = 1;
LAB_00429222:
  *(undefined1 *)(unaff_ESI + 0x855) = uVar3;
  if ((bVar2) && (*(char *)(unaff_ESI + 0x83f) != '\0')) {
    cVar4 = (**(code **)(**(int **)(unaff_ESI + 0x30) + 0x50))();
    if (cVar4 == '\0') {
                    
                    
      (**(code **)(**(int **)(unaff_ESI + 0x30) + 0x48))();
      return;
    }
  }
  else {
    cVar4 = (**(code **)(**(int **)(unaff_ESI + 0x30) + 0x50))();
    if (cVar4 != '\0') {
                    
                    
      (**(code **)(**(int **)(unaff_ESI + 0x30) + 0x4c))();
      return;
    }
  }
  return;
}
