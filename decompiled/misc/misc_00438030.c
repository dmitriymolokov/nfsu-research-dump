/* spd-match: far pct=6.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00438030 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00435b30();
int __cdecl FUN_00436d60();
int __cdecl FUN_00437fe0();
int __cdecl FUN_004653e0();
int __cdecl FUN_005674d0();
extern int DAT_006cc7a4;
extern int DAT_00736188;
extern unsigned char *DAT_0073619c;
extern int _DAT_006b79b8;
extern int _DAT_006b79c0;
extern int _DAT_006cc7bc;
extern int _DAT_006cc960;
extern int _DAT_006cccb0;
int * __fastcall FUN_00438030(int obj, float param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  float local_30;
  float local_2c;
  float local_28;
  
  piVar11 = DAT_0073619c;
  if ((*DAT_0073619c == 4) && (piVar11 = (int *)FUN_00435b30(DAT_0073619c), piVar11 == (int *)0x0))
  {
    iVar4 = *(int *)(obj + 4);
    piVar11 = *(int **)(iVar4 + 0x14);
    if (((char)piVar11[0x1cd] != '\0') &&
       ((piVar11 = (int *)0x0, *(int *)(obj + 0x90) != 0 &&
        (piVar11 = (int *)0x0, DAT_00736188 != 0)))) {
      if (*(int *)(obj + 0x238) == 0) {
        FUN_005674d0(param_1 * *(float *)(obj + 0x250));
        fVar10 = (*(float *)(iVar4 + 0x60) - local_30) * ((int)_DAT_006b79b8) + local_30;
        fVar8 = (*(float *)(iVar4 + 100) - local_2c) * ((int)_DAT_006b79b8) + local_2c;
        fVar9 = (*(float *)(iVar4 + 0x68) - local_28) * ((int)_DAT_006b79b8) + local_28;
        if ((float)((int)_DAT_006cccb0) < param_1) {
          param_1 = ((int)_DAT_006cc7bc) / param_1;
          *(float *)(obj + 0x220) = (fVar10 - *(float *)(obj + 0x210)) * param_1;
          *(float *)(obj + 0x224) = (fVar8 - *(float *)(obj + 0x214)) * param_1;
          *(float *)(obj + 0x228) = (fVar9 - *(float *)(obj + 0x218)) * param_1;
        }
        iVar4 = *(int *)(obj + 4);
        *(undefined4 *)(obj + 0x250) = 0x3f800000;
        fVar5 = fVar10 - *(float *)(iVar4 + 0x60);
        fVar6 = fVar8 - *(float *)(iVar4 + 100);
        fVar7 = fVar9 - *(float *)(iVar4 + 0x68);
        if (DAT_006cc7a4 <
            fVar5 * *(float *)(obj + 0x240) +
            fVar7 * *(float *)(obj + 0x248) + fVar6 * *(float *)(obj + 0x244)) {
          fVar12 = (float10)FUN_00436d60();
          if ((float10)((int)_DAT_006b79c0) * (float10)((int)_DAT_006cc960) < fVar12) {
            fVar13 = (float10)FUN_00436d60();
            fVar12 = ((float10)(float)fVar12 - fVar13) / (float10)(float)fVar12;
            fVar1 = (float)fVar12;
            if (((float10)((int)DAT_006cc7a4) < fVar12) && (fVar1 < _DAT_006cc7bc)) {
              *(float *)(obj + 0x250) = ((int)_DAT_006cc7bc) - fVar1;
            }
          }
        }
        *(float *)(obj + 0x248) = fVar7;
        *(float *)(obj + 0x240) = fVar5;
        *(float *)(obj + 0x244) = fVar6;
        *(float *)(obj + 0x218) = fVar9;
        *(float *)(obj + 0x210) = fVar10;
        *(float *)(obj + 0x214) = fVar8;
        fVar12 = (float10)FUN_00436d60();
        if ((float10)((int)_DAT_006b79c0) <= fVar12) {
          if (fVar7 < DAT_006cc7a4) {
            *(undefined4 *)(obj + 0x218) = *(undefined4 *)(*(int *)(obj + 4) + 0x68);
          }
          piVar11 = (int *)FUN_004653e0();
          return piVar11;
        }
        FUN_00437fe0();
        piVar11 = (int *)FUN_004653e0();
        return piVar11;
      }
      uVar2 = *(undefined4 *)(iVar4 + 100);
      uVar3 = *(undefined4 *)(iVar4 + 0x68);
      *(undefined4 *)(obj + 0x210) = *(undefined4 *)(iVar4 + 0x60);
      *(undefined4 *)(obj + 0x214) = uVar2;
      *(undefined4 *)(obj + 0x218) = uVar3;
      iVar4 = *(int *)(obj + 4);
      uVar2 = *(undefined4 *)(iVar4 + 0x74);
      uVar3 = *(undefined4 *)(iVar4 + 0x78);
      piVar11 = (int *)(iVar4 + 0x70);
      *(undefined4 *)(obj + 0x220) = *(undefined4 *)(iVar4 + 0x70);
      *(undefined4 *)(obj + 0x224) = uVar2;
      *(undefined4 *)(obj + 0x228) = uVar3;
    }
  }
  return piVar11;
}
