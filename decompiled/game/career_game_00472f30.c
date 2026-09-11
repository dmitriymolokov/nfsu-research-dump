/* spd-match: far pct=2.39 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_19/attempt4_0x00472F30 */
#include "ghidra_compat.h"

void m375_vec3_mul(float *dst, float *src, void *mtx);

int __cdecl FUN_00445720();
extern int DAT_006f227c;
extern int DAT_00735fd4;
extern int _DAT_006ccc18;
extern void LAB_0047336a(void);
int unaff_ESI;

int FUN_00472f30(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  int ******ppppppiVar1;
  int ******ppppppiVar2;
  ulonglong uVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *******pppppppiVar9;
  int *******unaff_ESI;
  int iVar10;
  int ******local_40;
  int iStack_3c;
  int *******pppppppiStack_34;
  LARGE_INTEGER local_30;
  float local_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  FUN_00445720();
  uVar3 = (ulonglong)DAT_006f227c;
  uVar8 = DAT_006f227c ^ 0x1d872b41;
  uVar5 = uVar8 >> 5 ^ uVar8;
  DAT_006f227c = uVar5 << 0x1b ^ uVar5 ^ uVar8;
  QueryPerformanceCounter(&local_30);
  sVar4 = __allshr();
  sVar4 = sVar4 + (short)(uVar3 % 0xffff);
  m375_vec3_mul((float *)(unsigned int)(local_20),(float *)(unsigned int)(param_2),(void *)param_6);
  iVar10 = *(int *)(param_1 + 0x14);
  piVar6 = (int *)(*(short *)(param_3 + 0xc) * 0x30 + *(int *)(param_1 + 0x54));
  *(int **)local_30.s.LowPart = piVar6;
  piVar6[1] = local_30.s.LowPart;
  *piVar6 = (int)&pppppppiStack_34;
  uVar5 = (uint)(0x10 < iVar10);
  local_30.s.LowPart = (DWORD)piVar6;
  do {
    while( true ) {
      iVar10 = 0;
      if ((int ********)pppppppiStack_34 == &pppppppiStack_34) {
        if (unaff_ESI == (int *******)0x0) {
          local_40 = (int ******)0xfcdc84dc;
          if (*(int *)(param_1 + 0x14) < 1) {
            return param_7;
          }
          iVar7 = 0;
          do {
            pppppppiVar9 = (int *******)(*(int *)(param_1 + 0x54) + iVar7);
            if (*(short *)((int)pppppppiVar9 + 0xe) != sVar4) {
              *(short *)((int)pppppppiVar9 + 0xe) = sVar4;
              pppppppiVar9[8] =
                   (int ******)(unsigned int)((float)(unsigned int)(local_30).s.HighPart * (float)(unsigned int)(pppppppiVar9[4]) +
                   local_28 * (float)(unsigned int)(pppppppiVar9[5]) + fStack_24 * (float)(unsigned int)(pppppppiVar9[6]));
            }
            if (((float)(unsigned int)(local_40) < (float)(unsigned int)(pppppppiVar9[8])) || ((float)(unsigned int)(local_40) == _DAT_006ccc18)) {
              local_40 = pppppppiVar9[8];
              unaff_ESI = pppppppiVar9;
            }
            iVar10 = iVar10 + 1;
            iVar7 = iVar7 + 0x30;
          } while (iVar10 < *(int *)(param_1 + 0x14));
          if (unaff_ESI == (int *******)0x0) {
            return param_7;
          }
        }
        goto LAB_0047336a;
      }
      ppppppiVar1 = *pppppppiStack_34;
      ppppppiVar2 = pppppppiStack_34[1];
      *ppppppiVar2 = (int *****)ppppppiVar1;
      ppppppiVar1[1] = (int *****)ppppppiVar2;
      if (*(short *)((int)pppppppiStack_34 + 0xe) != sVar4) {
        *(short *)((int)pppppppiStack_34 + 0xe) = sVar4;
        pppppppiStack_34[8] =
             (int ******)(unsigned int)((float)(unsigned int)(local_30).s.HighPart * (float)(unsigned int)(pppppppiStack_34[4]) +
             local_28 * (float)(unsigned int)(pppppppiStack_34[5]) + fStack_24 * (float)(unsigned int)(pppppppiStack_34[6]));
      }
      ppppppiVar1 = pppppppiStack_34[8];
      if (*(short *)(pppppppiStack_34 + 2) != 0) break;
      unaff_ESI = (int *******)0x0;
    }
    iVar10 = (int)*(short *)((int)pppppppiStack_34 + 10);
    iVar7 = *(short *)(pppppppiStack_34 + 2) + iVar10;
    unaff_ESI = pppppppiStack_34;
    if (3 < iVar7 - iVar10) {
      iStack_3c = iVar10 + 3;
      do {
        piVar6 = (int *)(*(short *)(*(int *)(param_1 + 0x50) + iVar10 * 2) * 0x30 +
                        *(int *)(param_1 + 0x54));
        if (*(short *)((int)piVar6 + 0xe) != sVar4) {
          piVar6[8] = (int)((float)(unsigned int)(local_30).s.HighPart * (float)(unsigned int)(piVar6[4]) +
                           local_28 * (float)(unsigned int)(piVar6[5]) + fStack_24 * (float)(unsigned int)(piVar6[6]));
        }
        if ((((float)(unsigned int)(ppppppiVar1) < (float)(unsigned int)(piVar6[8])) && (unaff_ESI = (int *******)0x0, uVar5 != 0))
           && (*(short *)((int)piVar6 + 0xe) != sVar4)) {
          *(int **)local_30.s.LowPart = piVar6;
          piVar6[1] = local_30.s.LowPart;
          *piVar6 = (int)&pppppppiStack_34;
          (*(undefined4 *)&(local_30)) = piVar6;
        }
        *(short *)((int)piVar6 + 0xe) = sVar4;
        piVar6 = (int *)(*(short *)(*(int *)(param_1 + 0x50) + 2 + iVar10 * 2) * 0x30 +
                        *(int *)(param_1 + 0x54));
        if (*(short *)((int)piVar6 + 0xe) != sVar4) {
          piVar6[8] = (int)((float)(unsigned int)(local_30).s.HighPart * (float)(unsigned int)(piVar6[4]) +
                           local_28 * (float)(unsigned int)(piVar6[5]) + fStack_24 * (float)(unsigned int)(piVar6[6]));
        }
        if ((((float)(unsigned int)(ppppppiVar1) < (float)(unsigned int)(piVar6[8])) && (unaff_ESI = (int *******)0x0, uVar5 != 0))
           && (*(short *)((int)piVar6 + 0xe) != sVar4)) {
          *(int **)local_30.s.LowPart = piVar6;
          piVar6[1] = local_30.s.LowPart;
          *piVar6 = (int)&pppppppiStack_34;
          (*(undefined4 *)&(local_30)) = piVar6;
        }
        *(short *)((int)piVar6 + 0xe) = sVar4;
        piVar6 = (int *)(*(short *)(*(int *)(param_1 + 0x50) + 4 + iVar10 * 2) * 0x30 +
                        *(int *)(param_1 + 0x54));
        if (*(short *)((int)piVar6 + 0xe) != sVar4) {
          piVar6[8] = (int)((float)(unsigned int)(local_30).s.HighPart * (float)(unsigned int)(piVar6[4]) +
                           local_28 * (float)(unsigned int)(piVar6[5]) + fStack_24 * (float)(unsigned int)(piVar6[6]));
        }
        if ((((float)(unsigned int)(ppppppiVar1) < (float)(unsigned int)(piVar6[8])) && (unaff_ESI = (int *******)0x0, uVar5 != 0))
           && (*(short *)((int)piVar6 + 0xe) != sVar4)) {
          *(int **)local_30.s.LowPart = piVar6;
          piVar6[1] = local_30.s.LowPart;
          *piVar6 = (int)&pppppppiStack_34;
          (*(undefined4 *)&(local_30)) = piVar6;
        }
        *(short *)((int)piVar6 + 0xe) = sVar4;
        piVar6 = (int *)(*(short *)(*(int *)(param_1 + 0x50) + 6 + iVar10 * 2) * 0x30 +
                        *(int *)(param_1 + 0x54));
        if (*(short *)((int)piVar6 + 0xe) != sVar4) {
          piVar6[8] = (int)((float)(unsigned int)(local_30).s.HighPart * (float)(unsigned int)(piVar6[4]) +
                           local_28 * (float)(unsigned int)(piVar6[5]) + fStack_24 * (float)(unsigned int)(piVar6[6]));
        }
        if ((((float)(unsigned int)(ppppppiVar1) < (float)(unsigned int)(piVar6[8])) && (unaff_ESI = (int *******)0x0, uVar5 != 0))
           && (*(short *)((int)piVar6 + 0xe) != sVar4)) {
          *(int **)local_30.s.LowPart = piVar6;
          piVar6[1] = local_30.s.LowPart;
          *piVar6 = (int)&pppppppiStack_34;
          (*(undefined4 *)&(local_30)) = piVar6;
        }
        *(short *)((int)piVar6 + 0xe) = sVar4;
        iStack_3c = iStack_3c + 4;
        iVar10 = iVar10 + 4;
      } while (iStack_3c < iVar7);
    }
    for (; iVar10 < iVar7; iVar10 = iVar10 + 1) {
      piVar6 = (int *)(*(short *)(*(int *)(param_1 + 0x50) + iVar10 * 2) * 0x30 +
                      *(int *)(param_1 + 0x54));
      if (*(short *)((int)piVar6 + 0xe) != sVar4) {
        piVar6[8] = (int)((float)(unsigned int)(local_30).s.HighPart * (float)(unsigned int)(piVar6[4]) +
                         local_28 * (float)(unsigned int)(piVar6[5]) + fStack_24 * (float)(unsigned int)(piVar6[6]));
      }
      if ((((float)(unsigned int)(ppppppiVar1) < (float)(unsigned int)(piVar6[8])) && (unaff_ESI = (int *******)0x0, uVar5 != 0)) &&
         (*(short *)((int)piVar6 + 0xe) != sVar4)) {
        *(int **)local_30.s.LowPart = piVar6;
        piVar6[1] = local_30.s.LowPart;
        *piVar6 = (int)&pppppppiStack_34;
        (*(undefined4 *)&(local_30)) = piVar6;
      }
      *(short *)((int)piVar6 + 0xe) = sVar4;
    }
    uVar5 = DAT_00735fd4;
  } while (unaff_ESI == (int *******)0x0);
LAB_0047336a:
  m375_vec3_mul((float *)(unsigned int)((param_7 + 0x10)),(float *)(unsigned int)((unaff_ESI + 4)),(void *)param_5);
  *(undefined2 *)(param_7 + 0xc) = *(undefined2 *)(unaff_ESI + 3);
  return param_7;
}
