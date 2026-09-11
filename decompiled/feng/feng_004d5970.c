/* spd-match: far pct=6.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_004174b0();
int __cdecl FUN_004d5cf0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f9240();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_0059fb80();
extern int DAT_006ca778;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_00758b58;
extern int DAT_00758b5c;
extern unsigned char *PTR_LAB_006c7804;
extern unsigned char *PTR_s_Overseer_006f4d0c;
extern unsigned char *PTR_s_Wreckage_006f4d10;
extern unsigned char *PTR_s__Doomsday__006f4d08;
extern void LAB_004d5ae4(void);
extern void LAB_004d5b2a(void);
extern void LAB_004d5b42(void);
extern void LAB_006871b8(void);
void *ExceptionList;

void FUN_004d5970(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  byte *pbVar14;
  char *pcVar15;
  int iVar16;
  undefined **ppuVar17;
  int local_4c;
  char local_3c [16];
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar8 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006871b8;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)(param_1 + 0x98);
  param_1 = 1;
  local_4c = 4;
  ExceptionList = &local_c;
  do {
    piVar10 = _malloc(0x14);
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar1 = piVar10 + 2;
      *piVar1 = (int)piVar1;
      piVar10[3] = (int)piVar1;
      piVar10[4] = 0;
    }
    puVar6 = *(undefined4 **)(iVar8 + 0x9c);
    *puVar6 = piVar10;
    *(int **)(iVar8 + 0x9c) = piVar10;
    piVar10[1] = (int)puVar6;
    *piVar10 = (int)puVar3;
    if (*(int *)(iVar8 + 0xb0) == 0) {
      *(undefined4 *)(iVar8 + 0xb0) = *puVar3;
    }
    iVar13 = *(int *)(iVar8 + 0x9c);
    FUN_004d5cf0(iVar8,iVar13);
    FUN_004d5cf0(iVar8,iVar13);
    FUN_004d5cf0(iVar8,iVar13);
    FUN_004d5cf0(iVar8,iVar13);
    FUN_004d5cf0(iVar8,iVar13);
    FUN_004f68c0(0x20,"trax_backing_0%d",param_1);
    iVar16 = -1;
    pbVar14 = &local_2c;
    bVar9 = local_2c;
    while (bVar9 != 0) {
      if (('`' < (char)bVar9) && ((char)bVar9 < '{')) {
        bVar9 = bVar9 - 0x20;
      }
      iVar16 = iVar16 * 0x21 + (uint)bVar9;
      pbVar2 = pbVar14 + 1;
      pbVar14 = pbVar14 + 1;
      bVar9 = *pbVar2;
    }
    if (*(int *)(iVar8 + 0xc) == 0) {
LAB_004d5b2a:
      if (DAT_0073578c == 0) goto LAB_004d5b42;
      uVar12 = FUN_004ef050(iVar16);
    }
    else {
      iVar11 = FUN_004f3f90(&DAT_00746104);
      if ((iVar11 != 0) && (iVar11 = *(int *)(iVar11 + 0x18), iVar11 != 0)) {
LAB_004d5ae4:
        if (iVar11 != 0) {
          local_4 = 0;
          FUN_004ffb00(iVar11);
          local_4 = 0xffffffff;
        }
        goto LAB_004d5b2a;
      }
      if (DAT_0073578c != 0) {
        if ((*(int *)(DAT_0073578c + 8) == 0) ||
           ((iVar11 = FUN_004fd1e0(*(int *)(DAT_0073578c + 8) + 0xdc), iVar11 == 0 &&
            (iVar11 = FUN_004fd1e0(*(int *)(DAT_0073578c + 8) + 0xec), iVar11 == 0))))
        goto LAB_004d5b2a;
        goto LAB_004d5ae4;
      }
LAB_004d5b42:
      uVar12 = 0;
    }
    *(undefined4 *)(iVar13 + 0x10) = uVar12;
    param_1 = param_1 + 1;
    local_4c = local_4c + -1;
    if (local_4c == 0) {
      iVar13 = 0;
      do {
        piVar10 = _malloc(0x18);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar1 = piVar10 + 2;
          *piVar1 = (int)piVar1;
          piVar10[3] = (int)piVar1;
          piVar10[4] = 0;
          *(undefined1 *)(piVar10 + 5) = 0;
        }
        puVar7 = *(undefined4 **)(iVar8 + 0xa4);
        puVar6 = (undefined4 *)(iVar8 + 0xa0);
        *puVar7 = piVar10;
        *(int **)(iVar8 + 0xa4) = piVar10;
        piVar10[1] = (int)puVar7;
        *piVar10 = (int)puVar6;
        if (*(int *)(iVar8 + 0xac) == 0) {
          *(undefined4 *)(iVar8 + 0xac) = *puVar6;
        }
        if (*(int *)(iVar8 + 0xa8) == 0) {
          *(undefined4 *)(iVar8 + 0xa8) = *puVar6;
        }
        iVar16 = iVar13 + 1;
        if (iVar13 < 9) {
          ppuVar17 = &PTR_LAB_006c7804;
        }
        else {
          ppuVar17 = (undefined **)&DAT_006ca778;
        }
        FUN_004f68c0(0x20,ppuVar17,iVar16);
        FUN_004174b0(piVar10,&local_2c);
        FUN_004174b0(piVar10,(&PTR_s_Overseer_006f4d0c)[(&DAT_00758b58)[iVar13 * 2] * 4]);
        FUN_004174b0(piVar10,(&PTR_s__Doomsday__006f4d08)[(&DAT_00758b58)[iVar13 * 2] * 4]);
        FUN_004174b0(piVar10,(&PTR_s_Wreckage_006f4d10)[(&DAT_00758b58)[iVar13 * 2] * 4]);
        piVar10[4] = (&DAT_00758b58)[iVar13 * 2];
        uVar4 = (&DAT_00758b5c)[iVar13 * 8];
        *(undefined1 *)(piVar10 + 5) = uVar4;
        switch(uVar4) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:;
        }
        iVar13 = FUN_0059fb80();
        if (iVar13 == 0) {
          iVar13 = FUN_0059fb80();
        }
        iVar11 = 0x10;
        pcVar15 = local_3c;
        do {
          cVar5 = pcVar15[iVar13 - (int)local_3c];
          iVar11 = iVar11 + -1;
          *pcVar15 = cVar5;
          if (cVar5 == '\0') break;
          pcVar15 = pcVar15 + 1;
        } while (iVar11 != 0);
        FUN_004174b0(piVar10,local_3c);
        iVar13 = iVar16;
        if (0x19 < iVar16) {
          FUN_004f9240(puVar3);
          ExceptionList = local_c;
          return;
        }
      } while( true );
    }
  } while( true );
}
