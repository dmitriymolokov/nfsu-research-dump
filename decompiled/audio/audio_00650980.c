/* Decompiled from Speed.exe @ 00650980 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00650980(int *param_1,int param_2,undefined4 param_3,int *param_4,int param_5,int param_6,
                int param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *local_10;
  int local_8;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  FUN_0064e520();
  iVar3 = 0;
  if (DAT_00713db6 != 0) {
    do {
      if ((&DAT_00713cf0)[iVar3] == 0) {
        local_10 = param_4 + 0x8d;
        FUN_00654cd0(param_4,0x234);
        piVar7 = local_10 + param_2 * 10;
        iVar4 = FUN_00655040(param_3);
        FUN_00655aa0(param_4 + 0x50);
        FUN_00655aa0(param_4 + 0x53);
        if (0 < param_2) {
          local_8 = param_2;
          do {
            FUN_00655ab0(param_4 + 0x53,local_10);
            local_10 = local_10 + 10;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        uVar5 = FUN_00655040(param_3);
        iVar6 = FUN_00655060(&LAB_006500a0,&LAB_006500d0,param_4,piVar7,uVar5);
        param_4[2] = iVar6;
        if (param_4[2] < 0) {
          FUN_0064e540();
          return param_4[2];
        }
        if (param_7 == 0) {
          iVar4 = FUN_004124f0(param_2 + 2,1,1,(int)piVar7 + iVar4,
                               (param_5 + param_2 * -0x28 + -0x234) - iVar4);
          if (iVar4 == 0) {
            FUN_00655690(param_4[2]);
            FUN_0064e540();
            return -9;
          }
          *param_4 = iVar4;
          *(undefined1 *)((int)param_4 + 0x11) = 0;
        }
        else {
          *param_4 = param_6;
          *(undefined1 *)((int)param_4 + 0x11) = 1;
        }
        iVar6 = 0;
        param_4[3] = 0;
        param_4[1] = -1;
        piVar7 = param_1;
        piVar8 = param_4 + 0x44;
        for (iVar4 = 6; iVar2 = DAT_006aa9c0, iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        iVar4 = *param_1;
        *(undefined1 *)((int)param_4 + 0x161) = 0;
        *(undefined1 *)(param_4 + 0x58) = 0;
        param_4[0x57] = iVar2;
        *(undefined1 *)((int)param_4 + 0x185) = 1;
        *(undefined1 *)(param_4 + 0x61) = 0;
        fVar1 = (float)(int)(char)iVar4 * _DAT_006ccbec;
        param_4[0x60] = iVar2;
        *(undefined1 *)((int)param_4 + 0x1a9) = 2;
        param_4[0x59] = (int)fVar1;
        *(undefined1 *)(param_4 + 0x6a) = 0;
        param_4[0x62] = (int)fVar1;
        param_4[0x69] = iVar2;
        param_4[0x6b] = (int)fVar1;
        param_4[0x72] = iVar2;
        param_4[0x74] = (int)fVar1;
        *(undefined1 *)((int)param_4 + 0x1cd) = 3;
        *(undefined1 *)(param_4 + 0x73) = 0;
        param_4[0x7d] = (int)fVar1;
        *(undefined1 *)((int)param_4 + 0x1f1) = 4;
        param_4[0x86] = (int)fVar1;
        *(undefined1 *)(param_4 + 0x7c) = 0;
        param_4[0x7b] = iVar2;
        param_4[0x84] = iVar2;
        *(undefined1 *)((int)param_4 + 0x215) = 5;
        *(undefined1 *)(param_4 + 0x85) = 0;
        *(undefined1 *)((int)param_4 + 0x12) = 1;
        *(undefined1 *)((int)param_4 + 0x13) = 0;
        iVar4 = 0;
        if (DAT_00713db6 != 0) {
          do {
            if ((&DAT_00713cf0)[iVar4] != 0) {
              iVar6 = iVar6 + 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)DAT_00713db6);
          if (iVar6 != 0) goto LAB_00650c1c;
        }
        FUN_0064c5a0(&LAB_00650730);
        DAT_00713f44 = &LAB_00650950;
LAB_00650c1c:
        (&DAT_00713cf0)[iVar3] = param_4;
        if (param_7 == 0) {
          iVar4 = FUN_00412fe0(*param_4);
          FUN_00656000(iVar3,iVar4 / 3);
        }
        param_4[0x30] = 0;
        FUN_006504e0(iVar3);
        FUN_0064e540();
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_00713db6);
  }
  FUN_0064e540();
  return -9;
}

