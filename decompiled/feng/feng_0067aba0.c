/* spd-match: far pct=6.78 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_3_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0067a841();
int __cdecl FUN_0067b005();
extern int _DAT_006ccaf8;
extern int _DAT_006ebd00;
extern int _DAT_006ebd10;
extern void LAB_0067acbe(void);
extern void LAB_0067ada0(void);

bool FUN_0067aba0(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  local_8 = uVar3;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_0067b005(1);
    uVar3 = param_1 & 0x17;
    goto LAB_0067ada0;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_0067b005(4);
    uVar3 = param_1 & 0x1b;
    goto LAB_0067ada0;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      if (*param_2 != _DAT_006ccaf8) {
        fVar5 = (float10)FUN_0067a841(*param_2,&local_c);
        dVar1 = (double)fVar5;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar1 * _DAT_006ccaf8;
          bVar4 = bVar2;
        }
        else {
          local_14 = (double)(__int64)((ulonglong)dVar1 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_14 >> 1;
              if (((ulonglong)local_14 & 0x100000000) != 0) {
                (*((unsigned char *)&(local_14) + 3)) = (byte)((ulonglong)local_14 >> 0x18) >> 1;
                (*(unsigned int *)&(local_14)) = (*(unsigned int *)&(local_14) & 0xff000000u) | ((unsigned int)((undefined3)uVar3) & 0x00ffffffu);
                (*(undefined4 *)&(local_14)) = CONCAT13((*((unsigned char *)&(local_14) + 3)),(undefined3)local_14) | 0x80000000;
                uVar3 = (uint)local_14;
              }
              (*(undefined4 *)&(local_14)) = uVar3;
              local_14 = (double)(__int64)CONCAT44((*(undefined4 *)((char *)&(local_14) + 4)) >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar1 < _DAT_006ccaf8) {
            local_14 = -local_14;
          }
        }
        *param_2 = (double)(__int64)local_14;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_0067b005(0x10);
      }
      uVar3 = local_8 & 0xfffffffd;
      local_8 = uVar3;
    }
    goto LAB_0067ada0;
  }
  FUN_0067b005(8);
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_006ebd00;
  if (uVar3 == 0) {
    if (*param_2 <= _DAT_006ccaf8) {
      dVar1 = -_DAT_006ebd00;
    }
LAB_0067acbe:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_006ebd10;
      if (*param_2 <= _DAT_006ccaf8) {
        dVar1 = -_DAT_006ebd00;
      }
      goto LAB_0067acbe;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= _DAT_006ccaf8) {
        dVar1 = -_DAT_006ebd10;
      }
      goto LAB_0067acbe;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_006ebd10;
      if (*param_2 <= _DAT_006ccaf8) {
        dVar1 = -_DAT_006ebd10;
      }
      goto LAB_0067acbe;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_0067ada0:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_0067b005(0x20);
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}
