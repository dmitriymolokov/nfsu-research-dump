/* spd-match: far pct=7.10 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00656160();
extern int DAT_006cc7a4;
extern int DAT_00716465;
extern int DAT_0071646f;
extern int DAT_0071653c;
extern unsigned char *DAT_00716540;
extern code *DAT_00716670;
extern int DAT_00716688;

undefined4 FUN_006563a0(undefined4 *param_1)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = (**(code **)param_1[0x10])((undefined4 *)param_1[0x10],0x10,DAT_0071653c,DAT_00716540,0);
  if (0 < iVar1) {
    param_1[0xf] = *(undefined4 *)(DAT_00716540 + 0x3c);
    if (DAT_0071646f != '\0') {
      if ((float)param_1[0xd] == (float)param_1[0xe]) {
        if ((float)param_1[0xe] != DAT_006cc7a4) {
          (*DAT_00716670)(0x10,param_1[0xe],DAT_00716540,&DAT_00716688);
        }
      }
      else {
        FUN_00656160(param_1[0xd],param_1[0xe],DAT_00716540,&DAT_00716688);
        param_1[0xd] = param_1[0xe];
      }
    }
    iVar1 = 0;
    if (DAT_00716465 != 0) {
      pfVar2 = (float *)(param_1 + 7);
      do {
        if (pfVar2[-6] == *pfVar2) {
          if (*pfVar2 != DAT_006cc7a4) {
            (*DAT_00716670)(0x10,*pfVar2,DAT_00716540,
                            *(undefined4 *)(((int)&DAT_00716540 - (int)param_1) + (int)pfVar2));
          }
        }
        else {
          FUN_00656160(pfVar2[-6],*pfVar2,DAT_00716540,
                       *(undefined4 *)(((int)&DAT_00716540 - (int)param_1) + (int)pfVar2));
          pfVar2[-6] = *pfVar2;
        }
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 1;
      } while (iVar1 < (int)(uint)DAT_00716465);
    }
    return 0x10;
  }
  param_1[0xd] = param_1[0xe];
  iVar1 = 0;
  if (DAT_00716465 != 0) {
    do {
      param_1[1] = param_1[7];
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < (int)(uint)DAT_00716465);
  }
  return 0;
}
