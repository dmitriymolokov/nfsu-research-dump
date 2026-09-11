/* spd-match: far pct=6.01 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052DC70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc90c;
void __fastcall FUN_0052dc70(int obj)

{
  float fVar1;

  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  
  iVar3 = 0;
  *(undefined4 *)(obj + 0x80) = 0;
  *(undefined4 *)(obj + 0x84) = 0;
  *(undefined4 *)(obj + 0x78) = 0;
  *(undefined4 *)(obj + 0x7c) = 0;
  *(undefined4 *)(obj + 0x60) = 0;
  *(undefined4 *)(obj + 100) = 0;
  *(undefined4 *)(obj + 0x68) = 0;
  *(undefined4 *)(obj + 0x6c) = 0;
  *(undefined4 *)(obj + 0x88) = 0;
  *(undefined4 *)(obj + 0x1d0) = 0;
  pfVar2 = (float *)(obj + 0x40);
  pfVar4 = (float *)(obj + 0x8c);
  do {
    fVar1 = ABS(*(float *)((int)pfVar4 +
                          *(int *)(*(int *)(obj + 0x10) + 0x234) + (0x264 - obj)));
    pfVar4[8] = fVar1;
    *(float *)(obj + 0x88) = fVar1 + *(float *)(obj + 0x88);
    *pfVar4 = ABS(*(float *)(*(int *)(*(int *)(obj + 0x10) + 0x234) + (0x308 - obj) +
                            (int)pfVar4));
    iVar5 = *(int *)(*(int *)(obj + 0x10) + 0x234) + (-0x40 - obj);
    fVar1 = *(float *)(iVar5 + 0x374 + (int)pfVar2);
    pfVar2[1] = *(float *)(iVar5 + 0x378 + (int)pfVar2);
    *pfVar2 = fVar1;
    fVar1 = pfVar2[1];
    *(float *)(obj + 0x80) = *(float *)(obj + 0x80) + *pfVar2;
    *(float *)(obj + 0x84) = fVar1 + *(float *)(obj + 0x84);
    iVar5 = *(int *)(*(int *)(obj + 0x10) + 0x234);
    if (iVar3 < 2) {
      if (*(char *)(iVar5 + 0x350 + iVar3) != '\0') {
        *(int *)(obj + 0x1d0) = *(int *)(obj + 0x1d0) + 1;
        fVar1 = pfVar2[1];
        *(float *)(obj + 0x70) = *(float *)(obj + 0x70) + *pfVar2;
        *(float *)(obj + 0x74) = fVar1 + *(float *)(obj + 0x74);
      }
    }
    else if (*(char *)(iVar5 + 0x350 + iVar3) != '\0') {
      *(int *)(obj + 0x1d0) = *(int *)(obj + 0x1d0) + 1;
      fVar1 = pfVar2[1];
      *(float *)(obj + 0x78) = *(float *)(obj + 0x78) + *pfVar2;
      *(float *)(obj + 0x7c) = fVar1 + *(float *)(obj + 0x7c);
    }
    if ((iVar3 < 1) || (2 < iVar3)) {
      if (*(char *)(*(int *)(*(int *)(obj + 0x10) + 0x234) + 0x350 + iVar3) != '\0') {
        fVar1 = pfVar2[1];
        *(float *)(obj + 0x68) = *(float *)(obj + 0x68) + *pfVar2;
        *(float *)(obj + 0x6c) = fVar1 + *(float *)(obj + 0x6c);
      }
    }
    else if (*(char *)(*(int *)(*(int *)(obj + 0x10) + 0x234) + 0x350 + iVar3) != '\0') {
      fVar1 = pfVar2[1];
      *(float *)(obj + 0x60) = *(float *)(obj + 0x60) + *pfVar2;
      *(float *)(obj + 100) = fVar1 + *(float *)(obj + 100);
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar2 = pfVar2 + 2;
  } while (iVar3 < 4);
  *(float *)(obj + 0x88) = *(float *)(obj + 0x88) * _DAT_006cc90c;
  return;
}
