/* spd-match: far pct=3.43 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_char */
#include "ghidra_compat.h"

int __cdecl FUN_00622460(...);
int __cdecl FUN_00622610(...);
int __cdecl FUN_00627d80(...);
int __cdecl FUN_00627ea0(...);
int __cdecl FUN_00628c90(...);
int __cdecl FUN_00629140(...);
int __cdecl FUN_0062a3a0(...);
extern char stack0xffffff78;
int unaff_EBX;
int unaff_EDI;

struct ThisCallBox {
  undefined4 FUN_0062a520(float param_2, int param_3, byte *param_4);
};
undefined4 ThisCallBox::FUN_0062a520(float param_2, int param_3, byte *param_4) {
  int iVar1;
  char cVar2;
  undefined4 unaff_EBX;
  int iVar3;
  undefined4 unaff_EDI;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (param_2 < *(float *)(((int)this) + 0x70) == (param_2 == *(float *)(((int)this) + 0x70))) {
    if (param_2 < *(float *)(((int)this) + 0x78)) {
      local_78 = (param_2 - *(float *)(((int)this) + 0x70)) / *(float *)(((int)this) + 0x74);
      if (*(char *)(unsigned int)(((int)this) + 0x7c) != '\0') {
        FUN_00628c90(*(undefined4 *)(((int)this) + 0x10),param_4);
      }
      if (*(char *)(unsigned int)(((int)this) + 0x7d) != '\0') {
        FUN_00628c90(*(undefined4 *)(((int)this) + 0x14),param_4);
      }
      cVar2 = (**(code **)(**(int **)(((int)this) + 0x18) + 0x18))
                        (param_2 - *(float *)(((int)this) + 0x20),*(undefined4 *)(((int)this) + 0x10),
                         param_4);
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))
                            (param_2 - *(float *)(((int)this) + 0x24),*(undefined4 *)(((int)this) + 0x14),
                             param_4), cVar2 != '\0')) {
        if (param_4 != (byte *)0x0) {
          if (-1 < *(int *)(((int)this) + 0x28)) {
            iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 8) + -1;
            if (iVar4 < 0) {
              return 1;
            }
            iVar3 = iVar4 * 0x30 + 0x10;
            do {
              if ((*(uint *)(param_4 + (iVar4 >> 5) * 4) & 1 << ((byte)iVar4 & 0x1f)) != 0) {
                if (iVar4 == *(int *)(((int)this) + 0x28)) {
                  iVar1 = *(int *)(((int)this) + 0x14);
                  iVar6 = *(int *)(((int)this) + 0x28) * 0x30;
                  puVar5 = (undefined4 *)(iVar6 + iVar1);
                  FUN_00627d80(*puVar5,puVar5[1],puVar5[2],puVar5[4],puVar5[5],puVar5[6],puVar5[7],
                               puVar5[8],*(undefined4 *)(iVar6 + 0x24 + iVar1),
                               *(undefined4 *)(iVar6 + 0x28 + iVar1));
                  FUN_00622460(((int)this) + 0x30);
                  FUN_00622610(&stack0xffffff78,&local_78);
                  puVar5[4] = unaff_EBX;
                  puVar5[5] = uStack_84;
                  puVar5[6] = uStack_80;
                  puVar5[7] = uStack_7c;
                  puVar5[8] = (unsigned int)local_78;
                  puVar5[9] = uStack_74;
                  puVar5[10] = uStack_70;
                  iVar1 = *(int *)(((int)this) + 0x28) * 4 + 0x20;
                  FUN_0062a3a0(unaff_EDI,*(int *)(((int)this) + 0x10) + iVar1,
                               *(int *)(((int)this) + 0x14) + iVar1,iVar1 + param_3);
                }
                FUN_00629140(unaff_EDI,*(int *)(((int)this) + 0x10) + iVar3,
                             *(int *)(((int)this) + 0x14) + iVar3,iVar3 + param_3);
              }
              iVar4 = iVar4 + -1;
              iVar3 = iVar3 + -0x30;
            } while (-1 < iVar4);
            return 1;
          }
          iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 8) + -1;
          if (-1 < iVar4) {
            iVar3 = iVar4 * 0x30 + 0x10;
            do {
              if ((*(uint *)(param_4 + (iVar4 >> 5) * 4) & 1 << ((byte)iVar4 & 0x1f)) != 0) {
                FUN_00629140(unaff_EDI,*(int *)(((int)this) + 0x10) + iVar3,
                             *(int *)(((int)this) + 0x14) + iVar3,iVar3 + param_3);
              }
              iVar4 = iVar4 + -1;
              iVar3 = iVar3 + -0x30;
            } while (-1 < iVar4);
          }
          if ((*param_4 & 1) == 0) {
            return 1;
          }
          FUN_0062a3a0(unaff_EDI,*(int *)(((int)this) + 0x10) + 0x20,*(int *)(((int)this) + 0x14) + 0x20,
                       param_3 + 0x20);
          return 1;
        }
        if (*(int *)(((int)this) + 0x28) < 0) {
          iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
          if (-1 < iVar4 + -1) {
            iVar3 = (iVar4 + -1) * 0x30 + 0x10;
            do {
              FUN_00629140(unaff_EDI,*(int *)(((int)this) + 0x10) + iVar3,
                           *(int *)(((int)this) + 0x14) + iVar3,iVar3 + param_3);
              iVar3 = iVar3 + -0x30;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          FUN_0062a3a0(unaff_EDI,*(int *)(((int)this) + 0x10) + 0x20,*(int *)(((int)this) + 0x14) + 0x20,
                       param_3 + 0x20);
          return 1;
        }
        iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 8) + -1;
        if (iVar4 < 0) {
          return 1;
        }
        iVar3 = iVar4 * 0x30 + 0x10;
        do {
          if (iVar4 == *(int *)(((int)this) + 0x28)) {
            iVar1 = *(int *)(((int)this) + 0x14);
            iVar6 = *(int *)(((int)this) + 0x28) * 0x30;
            puVar5 = (undefined4 *)(iVar6 + iVar1);
            FUN_00627d80(*puVar5,puVar5[1],puVar5[2],puVar5[4],puVar5[5],puVar5[6],puVar5[7],
                         puVar5[8],*(undefined4 *)(iVar6 + 0x24 + iVar1),
                         *(undefined4 *)(iVar6 + 0x28 + iVar1));
            FUN_00622460(((int)this) + 0x30);
            FUN_00622610(&stack0xffffff78,&local_78);
            puVar5[4] = unaff_EBX;
            puVar5[5] = uStack_84;
            puVar5[6] = uStack_80;
            puVar5[7] = uStack_7c;
            puVar5[8] = (unsigned int)local_78;
            puVar5[9] = uStack_74;
            puVar5[10] = uStack_70;
            iVar1 = *(int *)(((int)this) + 0x28) * 4 + 0x20;
            FUN_0062a3a0(unaff_EDI,*(int *)(((int)this) + 0x10) + iVar1,*(int *)(((int)this) + 0x14) + iVar1
                         ,iVar1 + param_3);
          }
          FUN_00629140(unaff_EDI,*(int *)(((int)this) + 0x10) + iVar3,*(int *)(((int)this) + 0x14) + iVar3,
                       iVar3 + param_3);
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + -0x30;
        } while (-1 < iVar4);
        return 1;
      }
    }
    else {
      cVar2 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))
                        (param_2 - *(float *)(((int)this) + 0x24),param_3,param_4);
      if (cVar2 != '\0') {
        iVar4 = *(int *)(((int)this) + 0x28);
        if (iVar4 < 0) {
          return 1;
        }
        if ((param_4 != (byte *)0x0) && (cVar2 = FUN_00627ea0(iVar4), cVar2 == '\0')) {
          return 1;
        }
        iVar4 = iVar4 * 0x30;
        puVar5 = (undefined4 *)(iVar4 + param_3);
        FUN_00627d80(*puVar5,puVar5[1],puVar5[2],puVar5[4],puVar5[5],puVar5[6],puVar5[7],puVar5[8],
                     *(undefined4 *)(iVar4 + 0x24 + param_3),*(undefined4 *)(iVar4 + 0x28 + param_3)
                    );
        FUN_00622460(((int)this) + 0x30);
        FUN_00622610(&uStack_7c,&uStack_6c);
        puVar5[4] = uStack_7c;
        puVar5[5] = (unsigned int)local_78;
        puVar5[6] = uStack_74;
        puVar5[7] = uStack_70;
        puVar5[8] = uStack_6c;
        puVar5[9] = uStack_68;
        puVar5[10] = uStack_64;
        return 1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(**(int **)(((int)this) + 0x18) + 0x18))
                      (param_2 - *(float *)(((int)this) + 0x20),param_3,param_4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}
