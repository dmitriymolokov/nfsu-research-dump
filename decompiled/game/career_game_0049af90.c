/* spd-match: far pct=7.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00416bb0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043b850();
int __cdecl FUN_00495ce0();
int __cdecl FUN_004c2a50();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f67f0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004feb50();
int __cdecl FUN_004ff2f0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00564990();
int __cdecl FUN_0059fb80();
int __cdecl FUN_005a29c0();
extern int DAT_006cc568;
extern unsigned char *DAT_0073578c;
extern int DAT_007361a4;
extern unsigned char *DAT_007361f8;
extern int DAT_00746104;
extern unsigned char *DAT_00777b74;
extern int DAT_00777b78;
extern int DAT_0077b198;
extern unsigned char *DAT_0077b244;
extern int DAT_0078a345;
extern unsigned char *PTR_FUN_006c1800;
extern unsigned char *PTR_LAB_006c2c5c;
extern unsigned char *PTR_LAB_006c7968;
extern void LAB_0049af70(void);
extern void LAB_0049b061(void);
extern void LAB_0049b156(void);
extern void LAB_0049b1d2(void);
extern void LAB_0049b2eb(void);
extern void LAB_0049b329(void);
extern void LAB_0049b33f(void);
extern void LAB_0049b3f4(void);
extern void LAB_0049b432(void);
extern void LAB_0049b448(void);
extern void LAB_0049b4fd(void);
extern void LAB_0049b53b(void);
extern void LAB_0049b551(void);
extern void LAB_0049b60c(void);
extern void LAB_0049b64d(void);
extern void LAB_0049b663(void);
extern void LAB_0049b80e(void);
extern void LAB_0049b8df(void);
extern void LAB_0049b91d(void);
extern void LAB_0049b937(void);
extern void LAB_006884f3(void);
void *ExceptionList;

void FUN_0049af90(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int ***pppiVar7;
  int ****ppppiVar8;
  undefined4 *puVar9;
  int ***pppiVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 uVar13;
  int extraout_EDX;
  int ****ppppiVar14;
  int iVar15;
  int local_ac;
  int ***local_a8;
  int ***local_a4;
  int ***local_a0;
  int local_9c;
  byte local_98;
  byte abStack_97 [31];
  undefined **local_78;
  int local_74;
  int local_70;
  undefined **local_6c;
  int local_68;
  int local_64;
  undefined **local_60;
  int local_5c;
  int local_58;
  undefined **local_54;
  int local_50;
  int local_4c;
  undefined **local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [16];
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006884f3;
  local_c = ExceptionList;
  if (param_4 != 0) {
    iVar15 = param_3;
    if (((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) &&
       (iVar15 = *(int *)(param_4 + 0x589c), *(int *)(param_4 + 0x589c) < param_3)) {
      iVar15 = param_3;
    }
    param_3 = iVar15;
    local_a8 = (int ***)&local_a8;
    local_a4 = (int ***)&local_a8;
    local_4 = 0;
    local_a0 = (int ***)0x0;
    ExceptionList = &local_c;
    if (0 < param_3) {
      local_ac = param_4 + 0x586c;
      ExceptionList = &local_c;
      do {
        ppppiVar14 = (int ****)local_a0;
        iVar15 = *(int *)(param_4 + 0x5864);
        if (((int)local_a0 < 0) || (iVar11 = local_ac, *(int *)(param_4 + 0x589c) <= (int)local_a0))
        {
          iVar11 = 0;
        }
        iVar5 = 0;
        if (0 < *(int *)(iVar15 + 0xb08)) {
          piVar6 = (int *)(iVar15 + 0x2c);
          do {
            if (*piVar6 == *(int *)(iVar11 + 4)) {
              piVar6 = (int *)(iVar5 * 0x15c + iVar15 + 0x28);
              goto LAB_0049b061;
            }
            iVar5 = iVar5 + 1;
            piVar6 = piVar6 + 0x57;
          } while (iVar5 < *(int *)(iVar15 + 0xb08));
        }
        piVar6 = (int *)0x0;
LAB_0049b061:
        iVar15 = *piVar6;
        pppiVar7 = (int ***)FUN_005a29c0();
        ppppiVar8 = _malloc(0x18);
        if (ppppiVar8 == (int ****)0x0) {
          ppppiVar8 = (int ****)0x0;
        }
        else {
          ppppiVar8[2] = (int ***)(&DAT_00777b74 + iVar15 * 0x15c);
          ppppiVar8[5] = pppiVar7;
        }
        *local_a4 = (int **)ppppiVar8;
        ppppiVar8[1] = local_a4;
        *ppppiVar8 = (int ***)&local_a8;
        local_a4 = (int ***)ppppiVar8;
        if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
          iVar11 = 0;
          if (0 < *(int *)(DAT_007361f8 + 0x18)) {
            piVar6 = (int *)(DAT_007361f8 + 0x28);
            do {
              iVar5 = *piVar6;
              ppppiVar14 = (int ****)local_a0;
              if ((int)*(short *)(iVar5 + 10) == (&DAT_00777b78)[iVar15 * 0x57]) goto LAB_0049b156;
              iVar11 = iVar11 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar11 < *(int *)(DAT_007361f8 + 0x18));
          }
          iVar5 = 0;
LAB_0049b156:
          if ((*(int *)(*(int *)(iVar5 + 0x14) + 4) == 1) &&
             (*(char *)(*(int *)(iVar5 + 0x14) + 0x734) == '\0')) {
            iVar15 = *(int *)(iVar5 + 0x18);
            cVar4 = FUN_0043a2e0();
            if (cVar4 == '\0') {
              pppiVar7 = (int ***)(iVar15 + 0x34);
            }
            else {
              pppiVar7 = (int ***)(DAT_0077b244 + 0x19);
            }
          }
          else {
            cVar4 = FUN_0043a2e0();
            if (cVar4 != '\0') {
              iVar15 = FUN_0043b850((&DAT_00777b78)[iVar15 * 0x57]);
              local_a4[3] = (int **)(iVar15 + 0x19);
              goto LAB_0049b1d2;
            }
            pppiVar7 = (int ***)(*(int *)(iVar5 + 0x14) + 0x73c);
          }
          local_a4[3] = (int **)pppiVar7;
        }
        else {
          iVar11 = 0;
          puVar9 = DAT_0077b198;
          if ((undefined4 **)DAT_0077b198 != &DAT_0077b198) {
            do {
              if (iVar11 == iVar15 + -1) break;
              puVar9 = (undefined4 *)*puVar9;
              iVar11 = iVar11 + 1;
            } while ((undefined4 **)puVar9 != &DAT_0077b198);
          }
          ppppiVar8[3] = (int ***)puVar9[6];
          iVar11 = 0;
          if ((undefined4 **)DAT_0077b198 != &DAT_0077b198) {
            puVar9 = DAT_0077b198;
            do {
              if (iVar11 == iVar15 + -1) break;
              puVar9 = (undefined4 *)*puVar9;
              iVar11 = iVar11 + 1;
            } while ((undefined4 **)puVar9 != &DAT_0077b198);
          }
        }
LAB_0049b1d2:
        pppiVar7 = local_a4;
        pppiVar10 = (int ***)FUN_004c2a50();
        pppiVar7[4] = (int **)pppiVar10;
        local_a0 = (int ***)((int)ppppiVar14 + 1);
        local_ac = local_ac + 0xc;
      } while ((int)local_a0 < param_3);
    }
    FUN_00564990(&local_a8,&LAB_0049af70);
    local_9c = 0;
    if (0 < param_3) {
      do {
        if (param_2 <= local_9c) break;
        iVar11 = local_9c + 1;
        FUN_004f68c0(0x20,"Lead%d",iVar11);
        iVar15 = -1;
        pbVar12 = &local_98;
        bVar3 = local_98;
        while (bVar3 != 0) {
          if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
            bVar3 = bVar3 - 0x20;
          }
          iVar15 = iVar15 * 0x21 + (uint)bVar3;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 1;
          bVar3 = *pbVar1;
        }
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049b329:
          if (DAT_0073578c == 0) {
LAB_0049b33f:
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004ef050(iVar15);
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
            if (DAT_0073578c != 0) {
              iVar2 = *(int *)(DAT_0073578c + 8);
              if ((iVar2 == 0) ||
                 ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                  (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049b329;
              goto LAB_0049b2eb;
            }
            goto LAB_0049b33f;
          }
LAB_0049b2eb:
          local_54 = &PTR_FUN_006c1800;
          (*(unsigned char *)&(local_4)) = 1;
          local_4c = 0;
          local_50 = iVar15;
          FUN_004ffb00(iVar5);
          local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
          local_54 = &PTR_LAB_006c2c5c;
          iVar5 = local_4c;
          if (local_4c == 0) goto LAB_0049b329;
        }
        FUN_004f6910(iVar5);
        FUN_004f68c0(0x20,"Time%d",iVar11);
        iVar15 = -1;
        pbVar12 = &local_98;
        bVar3 = local_98;
        while (bVar3 != 0) {
          if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
            bVar3 = bVar3 - 0x20;
          }
          iVar15 = iVar15 * 0x21 + (uint)bVar3;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 1;
          bVar3 = *pbVar1;
        }
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049b432:
          if (DAT_0073578c == 0) {
LAB_0049b448:
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004ef050(iVar15);
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
            if (DAT_0073578c != 0) {
              iVar2 = *(int *)(DAT_0073578c + 8);
              if ((iVar2 == 0) ||
                 ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                  (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049b432;
              goto LAB_0049b3f4;
            }
            goto LAB_0049b448;
          }
LAB_0049b3f4:
          local_78 = &PTR_FUN_006c1800;
          (*(unsigned char *)&(local_4)) = 2;
          local_70 = 0;
          local_74 = iVar15;
          FUN_004ffb00(iVar5);
          local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
          local_78 = &PTR_LAB_006c2c5c;
          iVar5 = local_70;
          if (local_70 == 0) goto LAB_0049b432;
        }
        FUN_004f6910(iVar5);
        FUN_004f68c0(0x20,"BestLap_%d",iVar11);
        iVar15 = -1;
        pbVar12 = &local_98;
        bVar3 = local_98;
        while (bVar3 != 0) {
          if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
            bVar3 = bVar3 - 0x20;
          }
          iVar15 = iVar15 * 0x21 + (uint)bVar3;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 1;
          bVar3 = *pbVar1;
        }
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049b53b:
          if (DAT_0073578c == 0) {
LAB_0049b551:
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004ef050(iVar15);
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
            if (DAT_0073578c != 0) {
              iVar2 = *(int *)(DAT_0073578c + 8);
              if ((iVar2 == 0) ||
                 ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                  (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049b53b;
              goto LAB_0049b4fd;
            }
            goto LAB_0049b551;
          }
LAB_0049b4fd:
          local_60 = &PTR_FUN_006c1800;
          (*(unsigned char *)&(local_4)) = 3;
          local_58 = 0;
          local_5c = iVar15;
          FUN_004ffb00(iVar5);
          local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
          local_60 = &PTR_LAB_006c2c5c;
          iVar5 = local_58;
          if (local_58 == 0) goto LAB_0049b53b;
        }
        FUN_004f6910(iVar5);
        FUN_004f68c0(0x20,"PointEarned_%d",iVar11);
        iVar15 = -1;
        pbVar12 = &local_98;
        bVar3 = local_98;
        while (bVar3 != 0) {
          if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
            bVar3 = bVar3 - 0x20;
          }
          iVar15 = iVar15 * 0x21 + (uint)bVar3;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 1;
          bVar3 = *pbVar1;
        }
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049b64d:
          if (DAT_0073578c == 0) {
LAB_0049b663:
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004ef050(iVar15);
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
            if (DAT_0073578c != 0) {
              iVar2 = *(int *)(DAT_0073578c + 8);
              if ((iVar2 == 0) ||
                 ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                  (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049b64d;
              goto LAB_0049b60c;
            }
            goto LAB_0049b663;
          }
LAB_0049b60c:
          local_48 = &PTR_FUN_006c1800;
          (*(unsigned char *)&(local_4)) = 4;
          local_40 = 0;
          local_44 = iVar15;
          FUN_004ffb00(iVar5);
          local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
          local_48 = &PTR_LAB_006c2c5c;
          iVar5 = local_40;
          if (local_40 == 0) goto LAB_0049b64d;
        }
        FUN_004f6910(iVar5);
        iVar15 = 0;
        ppppiVar14 = (int ****)local_a8;
        if ((int ****)local_a8 != &local_a8) {
          do {
            if (iVar15 == local_9c) break;
            ppppiVar14 = (int ****)*ppppiVar14;
            iVar15 = iVar15 + 1;
          } while (ppppiVar14 != &local_a8);
        }
        local_a0 = (int ***)ppppiVar14;
        FUN_004f68c0(0x20,"Pos%d",iVar11);
        FUN_004f67f0(&PTR_LAB_006c7968,iVar11);
        FUN_004f68c0(0x20,"Name%d",iVar11);
        FUN_004f67f0(&DAT_006cc568,ppppiVar14[3]);
        if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
          iVar15 = 0;
          if (0 < *(int *)(DAT_007361f8 + 0x18)) {
            piVar6 = (int *)(DAT_007361f8 + 0x28);
            do {
              if ((int **)(int)*(short *)(*piVar6 + 10) == ppppiVar14[2][1]) break;
              iVar15 = iVar15 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar15 < *(int *)(DAT_007361f8 + 0x18));
          }
          FUN_004f68c0(0x20,"CarColor_%d",iVar11);
          iVar15 = -1;
          pbVar12 = &local_2c;
          bVar3 = local_2c;
          while (bVar3 != 0) {
            if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
              bVar3 = bVar3 - 0x20;
            }
            iVar15 = iVar15 * 0x21 + (uint)bVar3;
            pbVar1 = pbVar12 + 1;
            pbVar12 = pbVar12 + 1;
            bVar3 = *pbVar1;
          }
          if (((*(int *)(param_1 + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
             (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
            if (DAT_0073578c == 0) goto LAB_0049b80e;
            iVar5 = FUN_004ef050(iVar15);
          }
          if ((iVar5 != 0) && (FUN_00495ce0(local_3c), *(int *)(iVar5 + 0x18) < 0x100)) {
            cVar4 = FUN_004feb50();
            if (cVar4 == '\0') {
              *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x400000;
            }
            FUN_004ff2f0(iVar5,0,0);
          }
        }
LAB_0049b80e:
        FUN_004f68c0(0x20,"CarModel_%d",iVar11);
        FUN_00416bb0(local_a0[4]);
        FUN_004f68c0(0x20,"TotalPoints_%d",iVar11);
        iVar15 = -1;
        pbVar12 = &local_98;
        bVar3 = local_98;
        while (bVar3 != 0) {
          if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
            bVar3 = bVar3 - 0x20;
          }
          pbVar1 = pbVar12 + 1;
          iVar15 = iVar15 * 0x21 + (uint)bVar3;
          pbVar12 = pbVar12 + 1;
          bVar3 = *pbVar1;
        }
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049b91d:
          if ((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(iVar15), iVar5 != 0)) {
LAB_0049b937:
            *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
            if (*(int *)(iVar5 + 0x18) == 5) {
              uVar13 = *(undefined4 *)(iVar5 + 0x60);
              iVar15 = *(int *)(iVar5 + 0x5c);
              if (0 < iVar15) {
                do {
                  FUN_004f6970(uVar13);
                  uVar13 = *(undefined4 *)(extraout_EDX + 4);
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
            }
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_0049b8df:
            local_6c = &PTR_FUN_006c1800;
            (*(unsigned char *)&(local_4)) = 5;
            local_64 = 0;
            local_68 = iVar15;
            FUN_004ffb00(iVar5);
            local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
            local_6c = &PTR_LAB_006c2c5c;
            iVar5 = local_64;
            if (local_64 == 0) goto LAB_0049b91d;
            goto LAB_0049b937;
          }
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049b91d;
            goto LAB_0049b8df;
          }
        }
        iVar15 = FUN_0059fb80();
        if (iVar15 == 0) {
          iVar15 = FUN_0059fb80();
        }
        FUN_004f67f0("%s %d",iVar15,local_a0[5]);
        local_9c = iVar11;
      } while (iVar11 < param_3);
    }
    if ((int ****)local_a8 != &local_a8) {
      do {
        pppiVar7 = (int ***)*local_a8;
        pppiVar10 = (int ***)local_a8[1];
        *pppiVar10 = (int **)pppiVar7;
        pppiVar7[1] = (int **)pppiVar10;
        _free(local_a8);
      } while ((int ****)local_a8 != &local_a8);
    }
  }
  ExceptionList = local_c;
  return;
}
