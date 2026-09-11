/* spd-match: far pct=6.90 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_00438860(...);
int __cdecl FUN_0059ffd0(...);
int __cdecl FUN_005a2930(...);
extern int DAT_00733ff8;
extern int DAT_00735ec4;
extern int _DAT_00735ec8;
extern void LAB_006855a5(...);
void *ExceptionList;

struct ThisCallBox {
  int FUN_005a2350(int param_2);
};
int ThisCallBox::FUN_005a2350(int param_2) {
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int local_b0c;
  int local_b00;
  int local_afc;
  int local_af8;
  int local_af4;
  undefined1 local_af0 [2788];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006855a5;
  local_c = ExceptionList;
  if (((((uint)this) < 0x100) && (puVar8 = (uint *)(&DAT_00733ff8)[((uint)this)], puVar8 != (uint *)0x0)) ||
     ((*(int *)(param_2 + 0x88b0) != 0 &&
      ((puVar8 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar8 != (uint *)0x0 &&
       (((uint)this) == *puVar8)))))) {
    _DAT_00735ec8 = 1;
    local_4 = 0;
    if (DAT_00735ec4 == 0) {
      iVar5 = 0;
      ExceptionList = &local_c;
    }
    else {
      ExceptionList = &local_c;
      iVar5 = FUN_005a2930();
    }
    local_4 = 0xffffffff;
    if (((int)((uint)this) < 0) || (0xff < (int)((uint)this))) {
      *(undefined4 *)(iVar5 + 0x58a0) = 0xffffffff;
    }
    else if (((uint)this) < 0x100) {
      puVar9 = (undefined4 *)(&DAT_00733ff8)[((uint)this)];
      puVar11 = (undefined4 *)(iVar5 + 0x58a0);
      for (iVar7 = 0x53; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    else {
      puVar9 = (undefined4 *)0x0;
      puVar11 = (undefined4 *)(iVar5 + 0x58a0);
      for (iVar7 = 0x53; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    iVar7 = 8;
    do {
      FUN_00438860();
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 0;
    if (0 < (int)puVar8[0x26]) {
      pcVar10 = (char *)((int)puVar8 + 0x7a);
      do {
        cVar1 = *pcVar10;
        sVar3 = *(short *)(pcVar10 + -2);
        cVar2 = pcVar10[1];
        iVar4 = *(int *)(iVar5 + 0x5868);
        if (iVar4 < 8) {
          *(int *)(iVar5 + 0x5868) = iVar4 + 1;
          if (((iVar4 < 0) || (iVar4 + 1 <= iVar4)) || (7 < iVar4)) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar4 * 0xb0c + 4 + iVar5);
          }
          *piVar6 = (int)sVar3;
          piVar6[1] = (int)cVar2;
          piVar6[2] = (int)cVar1;
          piVar6[3] = local_b0c;
          piVar6[4] = 0;
          piVar6[5] = 1;
          piVar6[6] = local_b00;
          piVar6[7] = local_afc;
          piVar6[8] = local_af8;
          piVar6[9] = local_af4;
          FUN_0059ffd0(piVar6 + 10,local_af0);
        }
        iVar7 = iVar7 + 1;
        pcVar10 = pcVar10 + 4;
      } while (iVar7 < (int)puVar8[0x26]);
    }
  }
  else {
    iVar5 = 0;
  }
  ExceptionList = local_c;
  return iVar5;
}
