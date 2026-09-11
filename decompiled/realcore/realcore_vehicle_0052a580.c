/* spd-match: far pct=12.09 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052A580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

extern int _DAT_006cc7dc;
extern int _DAT_006cc9f0;
extern int _DAT_006ccb4c;
undefined4 __fastcall FUN_0052a580(int obj)

{
  int iVar1;
  float fVar2;
  float fVar3;

  undefined2 uVar5;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(int *)(obj + 0x234) + 0x30);
  uVar5 = (undefined2)((uint)iVar1 >> 0x10);
  fVar2 = *(float *)(iVar1 + 0x1e4);
  if (*(float *)(iVar1 + 0x1e4) <= *(float *)(iVar1 + 0x1e0)) {
    fVar2 = *(float *)(iVar1 + 0x1e0);
  }
  fVar3 = *(float *)(*(int *)(obj + 0x234) + 0x3d4) * _DAT_006cc9f0;
  uVar4 = CONCAT22(uVar5,(ushort)(fVar3 < _DAT_006ccb4c) << 8 |
                         (ushort)(NAN(fVar3) || NAN(_DAT_006ccb4c)) << 10 |
                         (ushort)(fVar3 == _DAT_006ccb4c) << 0xe);
  if ((fVar3 >= _DAT_006ccb4c) &&
     (uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < _DAT_006cc7dc) << 8 |
                             (ushort)(NAN(fVar2) || NAN(_DAT_006cc7dc)) << 10 |
                             (ushort)(fVar2 == _DAT_006cc7dc) << 0xe), fVar2 >= _DAT_006cc7dc)) {
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar4;
}
