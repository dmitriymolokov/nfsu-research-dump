/* spd-match: far pct=6.59 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044CB90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

extern int DAT_007000e4;
extern int DAT_007361a8;
extern int DAT_0078a344;
extern int _DAT_006b77fc;
extern int _DAT_006cc9f8;
extern void LAB_0044cc8c(void);
uint __fastcall FUN_0044cb90(int obj)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uint uVar6;
  float local_8;
  
  iVar3 = *(int *)(obj + 4);
  uVar6 = *(uint *)(iVar3 + 0x28);
  iVar4 = *(int *)(iVar3 + 0x3d8);
  if (uVar6 == 1) {
    iVar5 = *(int *)(*(int *)(iVar3 + 0x34) + 0x4c);
    local_8 = *(float *)(iVar5 + 0x7c) + *(float *)(iVar5 + 0xa4 + iVar4 * 4);
    fVar2 = *(float *)(iVar5 + 0x78) + *(float *)(iVar5 + 0x80 + iVar4 * 4);
    if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
      uVar6 = *(uint *)(*(int *)(iVar5 + 0x20) + 0x18);
      fVar1 = *(float *)(uVar6 + 4);
    }
    else {
      uVar6 = *(uint *)(*(int *)(iVar5 + 0x20) + 0x18);
      fVar1 = *(float *)(uVar6 + 8);
    }
    uVar6 = uVar6 & 0xffff0000;
    if (fVar1 < fVar2) {
      fVar2 = fVar1;
    }
  }
  else {
    if (uVar6 != 3) goto LAB_0044cc8c;
    uVar6 = *(uint *)(*(int *)(iVar3 + 0x34) + 0x24);
    local_8 = *(float *)(uVar6 + 0x1bc + iVar4 * 4);
    fVar2 = *(float *)(uVar6 + 0x198 + iVar4 * 4);
  }
  fVar2 = (fVar2 - local_8) * ((int)_DAT_006b77fc) + local_8;
  fVar1 = DAT_007000e4;
  if (DAT_007000e4 == _DAT_006cc9f8) {
    fVar1 = *(float *)(iVar3 + 0x3e0);
  }
  if (local_8 < fVar1) {
    local_8 = fVar1;
  }
  if (fVar2 < local_8) {
    local_8 = fVar2;
  }
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                   (ushort)(fVar1 < local_8) << 8 | (ushort)(NAN(fVar1) || NAN(local_8)) << 10 |
                   (ushort)(fVar1 == local_8) << 0xe);
  if (fVar1 != local_8) {
    return CONCAT31((int3)(uVar6 >> 8),1);
  }
LAB_0044cc8c:
  return uVar6 & 0xffffff00;
}
