/* spd-match: far pct=6.86 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00446DB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00445d00();
extern int DAT_007360fc;
extern int DAT_0077aa6c;
extern int DAT_0077aab0;
extern int DAT_0077aaf9;
extern void LAB_00446eec(void);
undefined4 __fastcall FUN_00446db0(int * obj, undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;

  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_8;
  
  if (*obj != -0x7ffcbeb0) {
    return 0;
  }
  iVar2 = obj[1];
  piVar1 = obj + 2;
  do {
    if ((int *)(iVar2 + 8 + (int)obj) <= piVar1) {
      if (DAT_007360fc != 0) {
        FUN_00445d00();
        DAT_0077aaf9 = 1;
        DAT_0077aa6c = 0xffffffff;
        DAT_0077aab0 = 0xffffffff;
      }
      return 1;
    }
    iVar6 = *piVar1;
    if (iVar6 == 0x34151) {
      piVar5 = piVar1 + 2;
      for (uVar8 = (uint)piVar1[1] / 0x8c; uVar8 != 0; uVar8 = uVar8 - 1) {
        iVar6 = (int)(short)piVar5[2] % 100;
        cVar3 = (char)((int)(short)piVar5[2] / 100) + '@';
        if ((((cVar3 < 'A') || ('T' < cVar3)) || (iVar6 < 1)) || (9 < iVar6)) {
          puVar4 = (undefined4 *)param_1[3];
          *puVar4 = piVar5;
          param_1[3] = piVar5;
          piVar5[1] = (int)puVar4;
          *piVar5 = (int)(param_1 + 2);
        }
        else {
          puVar4 = (undefined4 *)param_1[1];
          *puVar4 = piVar5;
          param_1[1] = piVar5;
          piVar5[1] = (int)puVar4;
          *piVar5 = (int)param_1;
        }
        piVar5 = piVar5 + 0x23;
      }
    }
    else if (iVar6 == 0x34152) {
      local_8 = (uint)piVar1[1] / 0x94;
      piVar5 = piVar1 + 2;
      if (local_8 != 0) {
        puVar4 = (undefined4 *)FUN_0040a880();
        do {
          puVar7 = (undefined4 *)param_1[5];
          *puVar7 = piVar5;
          param_1[5] = piVar5;
          piVar5[1] = (int)puVar7;
          *piVar5 = (int)(param_1 + 4);
          for (puVar7 = (undefined4 *)*param_1; puVar7 != puVar4; puVar7 = (undefined4 *)*puVar7) {
            if (*(short *)(puVar7 + 2) == (short)piVar5[2]) goto LAB_00446eec;
          }
          for (puVar7 = (undefined4 *)param_1[2]; puVar7 != param_1 + 2;
              puVar7 = (undefined4 *)*puVar7) {
            if (*(short *)(puVar7 + 2) == (short)piVar5[2]) goto LAB_00446eec;
          }
          puVar7 = (undefined4 *)0x0;
LAB_00446eec:
          piVar5[3] = (int)puVar7;
          piVar5 = piVar5 + 0x25;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
    }
    else if (iVar6 == 0x34153) {
      uVar8 = (uint)piVar1[1] / 0x110;
      piVar5 = piVar1 + 2;
      if (uVar8 != 0) {
        do {
          puVar4 = (undefined4 *)param_1[9];
          *puVar4 = piVar5;
          param_1[9] = piVar5;
          piVar5[1] = (int)puVar4;
          *piVar5 = (int)(param_1 + 8);
          piVar5 = piVar5 + 0x44;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if (iVar6 == 0x34154) {
      uVar8 = (uint)piVar1[1] >> 5;
      piVar5 = piVar1 + 2;
      if (uVar8 != 0) {
        do {
          puVar4 = (undefined4 *)param_1[0xb];
          *puVar4 = piVar5;
          param_1[0xb] = piVar5;
          piVar5[1] = (int)puVar4;
          *piVar5 = (int)(param_1 + 10);
          piVar5 = piVar5 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    piVar1 = (int *)((int)piVar1 + piVar1[1] + 8);
  } while( true );
}
