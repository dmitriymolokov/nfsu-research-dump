/* spd-match: far pct=6.10 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141934Z_w0_tc0 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00401cd0();
int __cdecl FUN_0040a880();
int __cdecl FUN_00424df0();
int __cdecl FUN_0042eda0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043a340();
int __cdecl FUN_0043cef0();
int __cdecl FUN_00443d60();
int __cdecl FUN_00456e90();
int __cdecl FUN_004570d0();
int __cdecl FUN_00567c70();
int __cdecl FUN_00572970();
int __cdecl FUN_00577d10();
int __cdecl FUN_00577e60();
int __cdecl FUN_00578010();
int __cdecl FUN_0057c110();
int __cdecl FUN_0058e2e0();
int __cdecl FUN_00593a30();
extern int DAT_006b7b78;
extern int DAT_006cc7a4;
extern int DAT_006f08a4;
extern int DAT_006fbf14;
extern int DAT_006fbf18;
extern int DAT_007344d4;
extern int DAT_007344dc;
extern int DAT_0078a2fc;
extern int _DAT_006b7bb8;
extern int _DAT_006b7bbc;
extern int _DAT_006b7bc0;
extern int _DAT_006cc90c;
extern int _DAT_006ccac0;
extern int _DAT_006ccb50;
extern int _DAT_00731318;
extern void LAB_00428354(void);
extern void LAB_00428427(void);
extern void LAB_00428440(void);
int unaff_EDI;

void FUN_004281e0(void)

{
  char *pcVar1;
  uint *puVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  char cVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  int unaff_EDI;
  bool bVar15;
  float10 fVar16;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  FUN_00401cd0();
  piVar8 = (int *)FUN_0058e2e0(DAT_0078a2fc);
  do {
    if ((piVar8 == (int *)0x0) || (piVar4 = (int *)*piVar8, piVar4 == (int *)0x0)) {
      return;
    }
    switch(piVar4[3]) {
    case 0x10003:
      uVar11 = *(undefined4 *)(piVar4[4] + 8);
      FUN_0040a880(uVar11);
      uVar9 = FUN_00424df0();
      FUN_00593a30(uVar11,uVar9);
      if ((*(int *)(*(int *)(unaff_EDI + 0x14) + 4) == 1) &&
         (*(char *)(*(int *)(unaff_EDI + 0x14) + 0x734) == '\0')) {
        uVar13 = ((int)DAT_006f08a4) + 3U & 0x80000003;
        bVar15 = uVar13 == 0;
        if ((int)uVar13 < 0) {
          bVar15 = (uVar13 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if ((bVar15) && (_DAT_006ccac0 < *(float *)(unaff_EDI + 0x3d4))) {
          FUN_00572970(DAT_006b7b78,"FlattenFern");
        }
      }
      break;
    default:
      if (piVar4 != DAT_007344dc) {
        iVar10 = *piVar4;
        piVar6 = (int *)piVar4[1];
        *piVar6 = iVar10;
        *(int **)(iVar10 + 4) = piVar6;
        iVar12 = DAT_007344d4;
        iVar10 = *(int *)(((int)DAT_007344d4) + 0x18);
        *piVar4 = *(int *)(((int)DAT_007344d4) + 0x10);
        *(int **)(iVar12 + 0x10) = piVar4;
        *(int *)(iVar12 + 0x18) = iVar10 + -1;
        _DAT_00731318 = ((int)_DAT_00731318) + -1;
      }
      break;
    case 0x10005:
      if (*(int *)(unaff_EDI + 0x18) != 0) {
        iVar10 = piVar4[4];
        uVar13 = *(uint *)(iVar10 + 8) & 0xff;
        if (DAT_0078a2fc == 0) {
          if (uVar13 == 0) {
LAB_00428354:
            if ((_DAT_006ccb50 < *(float *)(unaff_EDI + 0x3d4)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x18) + 0x4ac) == '\0')) {
              FUN_0042eda0(*(undefined2 *)(iVar10 + 10),(float)*(byte *)(iVar10 + 9));
            }
          }
        }
        else if ((DAT_0078a2fc == 1) && (uVar13 != 0)) goto LAB_00428354;
      }
      break;
    case 0x10006:
      cVar7 = FUN_0043a2e0();
      if ((cVar7 == '\0') || (cVar7 = FUN_0043a340(), cVar7 != '\0')) {
        if (DAT_006fbf14 == 0) {
          if (DAT_006fbf18 == *(short *)(unaff_EDI + 10)) goto LAB_00428427;
        }
        else if (*(int *)(*(int *)(unaff_EDI + 0x14) + 4) == 1) {
LAB_00428427:
          uVar11 = FUN_00567c70();
          iVar10 = FUN_00577d10(uVar11);
          if (iVar10 == 0) {
LAB_00428440:
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(iVar10 + 0x2c);
            if (iVar12 == iVar10 + 0x2c) {
              iVar12 = FUN_00577e60(0);
            }
            else {
              if (iVar12 == 0) goto LAB_00428440;
              iVar12 = iVar12 + -4;
            }
          }
          local_78 = -1.0;
          local_74 = -1.0;
          local_6c = 999999.0;
          local_70 = 0.0;
          if (iVar12 != 0) {
            local_70 = *(float *)(iVar12 + 0x90);
            fVar16 = (float10)FUN_00443d60(local_70,*(undefined4 *)(unaff_EDI + 0x814));
            local_6c = (float)fVar16;
            fVar16 = (float10)FUN_004570d0(local_6c);
            local_78 = (float)fVar16;
          }
          iVar10 = (**(code **)(**(int **)(unaff_EDI + 0x2c) + 0x1c))(0);
          if (((iVar10 < 0xb) || (0x10 < iVar10)) &&
             (iVar12 = (**(code **)(**(int **)(unaff_EDI + 0x2c) + 0x18))(0), iVar12 != 0)) {
            iVar10 = FUN_00456e90();
          }
          if ((10 < iVar10) && (iVar10 < 0x11)) {
            local_74 = (((int)_DAT_006b7bbc) - _DAT_006b7bb8) * ((int)_DAT_006cc90c) * (float)(iVar10 + -0xb) +
                       _DAT_006b7bb8;
          }
          if (DAT_006cc7a4 <= local_78) {
            iVar10 = FUN_00577d10(0x24cebc53);
            if (iVar10 == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = *(int *)(iVar10 + 0x2c);
              if (iVar12 == iVar10 + 0x2c) {
                iVar12 = FUN_00577e60(0);
              }
              else if (iVar12 == 0) {
                iVar12 = 0;
              }
              else {
                iVar12 = iVar12 + -4;
              }
            }
            iVar10 = *(int *)(iVar12 + 0x20);
            *(float *)(iVar10 + 0x60) = local_78 - local_74;
            fVar3 = *(float *)(unaff_EDI + 0x3d4);
            *(undefined1 *)(iVar10 + 0x70) = 1;
            *(float *)(iVar10 + 100) = local_70 - fVar3 * local_74;
            if ((local_78 < local_74 != (local_78 == local_74)) || (local_6c < _DAT_006b7bc0)) {
              FUN_0057c110(iVar12);
              cVar7 = FUN_0043a2e0();
              if (cVar7 != '\0') {
                FUN_0043cef0();
              }
            }
          }
        }
      }
      break;
    case 0x10007:
      if (((*(int *)(*(int *)(unaff_EDI + 0x14) + 4) == 1) &&
          (*(char *)(*(int *)(unaff_EDI + 0x14) + 0x734) == '\0')) &&
         (*(int **)(unaff_EDI + 0x878) != (int *)0x0)) {
        puVar5 = (undefined4 *)piVar4[4];
        iVar10 = **(int **)(unaff_EDI + 0x878);
        if (puVar5 == (undefined4 *)0x0) {
          (**(code **)(iVar10 + 0x3c))(0,0xffffffff,0,0xbf800000);
        }
        else {
          (**(code **)(iVar10 + 0x3c))(*puVar5,puVar5[2],puVar5 + 4,puVar5[7]);
        }
      }
      break;
    case 0x10008:
      break;
    case 0x10009:
      pcVar14 = "WorldObject";
      do {
        pcVar1 = pcVar14 + 1;
        pcVar14 = pcVar14 + 1;
      } while (*pcVar1 != '\0');
      pcVar14 = "XO_PlaneA_1b_01";
      do {
        pcVar1 = pcVar14 + 1;
        pcVar14 = pcVar14 + 1;
      } while (*pcVar1 != '\0');
      iVar10 = FUN_00578010();
      if (iVar10 != 0) {
        puVar2 = (uint *)(*(int *)(*(int *)(iVar10 + 0x20) + 0x14) + 0x34);
        *puVar2 = *puVar2 & 0xffffff7f;
      }
    }
    piVar8 = piVar8 + 1;
  } while( true );
}
