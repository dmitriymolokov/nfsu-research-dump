/* spd-match: far pct=4.41 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_int/batches/20260724T134638Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_005b1a6c(...);
int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005b291b(...);
int __cdecl FUN_005c52d8(...);
int __cdecl FUN_005c6455(...);
int __cdecl FUN_005c691a(...);
int __cdecl FUN_005c765d(...);
extern int DAT_00708898;
extern void LAB_005c7d70(...);
extern void LAB_005c7df1(...);
extern void LAB_005c7e07(...);
extern void LAB_005c7e1a(...);

struct ThisCallBox {
  uint FUN_005c7bd2(int *param_2);
};
uint ThisCallBox::FUN_005c7bd2(int *param_2) {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  int local_c;
  int local_8;
  
  local_c = ((int)this);
  local_8 = ((int)this);
LAB_005c7e07:
  do {
    if (*(int *)(((int)this) + 0x30) != 0) {
      uVar2 = 0x80004005;
LAB_005c7e1a:
      param_2[4] = *(int *)(*(int *)(((int)this) + 0x54) + 0x18);
      param_2[5] = *(int *)(*(int *)(((int)this) + 0x54) + 0x1c);
      *param_2 = 0xd;
      return uVar2;
    }
    if ((*(int *)(((int)this) + 0x48) != 0) && (*(int *)(*(int *)(((int)this) + 0x48) + 8) == 0)) {
      uVar2 = 0;
      goto LAB_005c7e1a;
    }
    puVar1 = *(undefined4 **)(((int)this) + 0x44);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),param_2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    else {
      piVar4 = (int *)(unsigned int)(puVar1 + 4);
      piVar6 = param_2;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      *(undefined4 *)(((int)this) + 0x44) = *(undefined4 *)(*(int *)(((int)this) + 0x44) + 0xc);
      puVar1[3] = 0;
      (**(code **)*puVar1)(1);
      param_2[4] = *(int *)(*(int *)(((int)this) + 0x54) + 0x18);
      param_2[5] = *(int *)(*(int *)(((int)this) + 0x54) + 0x1c);
      *(undefined4 *)(((int)this) + 0x28) = 0;
    }
    if (*param_2 != 1) {
LAB_005c7d70:
      if (*param_2 == 0xd) {
        if (*(int *)(*(int *)(((int)this) + 0x50) + 0x38) != 0) {
          FUN_005b1f01(((int)this) + 4,param_2,0x5de,"unexpected end of file");
        }
        iVar3 = *(int *)(((int)this) + 0x50);
        if (*(int *)(iVar3 + 0x6c) == 0) {
          return 0;
        }
        *(undefined4 *)(((int)this) + 0x50) = *(undefined4 *)(iVar3 + 0x6c);
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        FUN_005c52d8(1);
        *(undefined4 *)(((int)this) + 0x54) = *(undefined4 *)(((int)this) + 0x50);
        *param_2 = 0xc;
        *(undefined4 *)(((int)this) + 0x28) = 1;
        return 0;
      }
      if (((*param_2 != 9) || (iVar3 = FUN_005c6455(param_2[2],&local_c,&local_8), iVar3 == 0)) ||
         (iVar3 = FUN_005c691a(param_2,local_c,local_8), iVar3 == 0)) {
        if (*param_2 == 9) {
          iVar3 = 9;
          bVar8 = true;
          pcVar5 = (char *)param_2[2];
          pcVar7 = "__FILE__";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar8 = *pcVar5 == *pcVar7;
            pcVar5 = pcVar5 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            *param_2 = 10;
            iVar3 = *(int *)(*(int *)(((int)this) + 0x54) + 0x18);
          }
          else {
            iVar3 = 9;
            bVar8 = true;
            pcVar5 = (char *)param_2[2];
            pcVar7 = "__LINE__";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar8 = *pcVar5 == *pcVar7;
              pcVar5 = pcVar5 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar8);
            if (!bVar8) goto LAB_005c7df1;
            *param_2 = 2;
            iVar3 = *(int *)(*(int *)(((int)this) + 0x54) + 0x1c);
          }
          param_2[2] = iVar3;
        }
LAB_005c7df1:
        *(uint *)(((int)this) + 0x28) = (uint)(*param_2 == 0xc);
        if (*(int *)(((int)this) + 0x38) != 0) {
          iVar3 = *(int *)(((int)this) + 0x48);
          if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
            if ((*param_2 == 1) && (*(char *)((int)param_2 + 9) == '\0')) {
              if ((char)param_2[2] == '{') {
                *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
              }
              if ((char)param_2[2] == '}') {
                iVar3 = *(int *)(*(int *)(((int)this) + 0x48) + 8);
                if (iVar3 != 0) {
                  *(int *)(*(int *)(((int)this) + 0x48) + 8) = iVar3 + -1;
                }
              }
            }
            if (*(int *)(*(int *)(((int)this) + 0x48) + 8) == 0) {
              *param_2 = 0xd;
            }
          }
          return 0;
        }
      }
      goto LAB_005c7e07;
    }
    iVar3 = 2;
    bVar8 = true;
    pcVar5 = "#";
    piVar4 = param_2 + 2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *pcVar5 == (char)*piVar4;
      pcVar5 = pcVar5 + 1;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar8);
    if ((!bVar8) || (*(int *)(((int)this) + 0x28) == 0)) goto LAB_005c7d70;
    DAT_00708898 = ((int)this);
    *(undefined4 *)(((int)this) + 0x28) = 0;
    *(undefined4 *)(((int)this) + 0x2c) = 0;
    *(undefined4 *)(((int)this) + 0x34) = 1;
    *(undefined4 *)(((int)this) + 0x3c) = *(undefined4 *)(((int)this) + 0x38);
    iVar3 = FUN_005c765d();
    if (iVar3 != 0) {
      *(undefined4 *)(((int)this) + 0x2c) = 1;
    }
    if (*(undefined4 **)(((int)this) + 0x40) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(((int)this) + 0x40))(1);
    }
    *(undefined4 *)(((int)this) + 0x40) = 0;
    if ((*(int *)(((int)this) + 0x28) == 0) && (*(int *)(((int)this) + 0x2c) == 0)) {
      uVar2 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),(int *)(((int)this) + 0x60));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar3 = *(int *)(((int)this) + 0x60);
      if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
        *(undefined4 *)(((int)this) + 0x28) = 1;
      }
      else {
        if (*(int *)(((int)this) + 0x38) != 0) {
          FUN_005b1f01(((int)this) + 4,param_2,0x5dd,
                       "unexpected tokens following preprocessor directive");
        }
        *(undefined4 *)(((int)this) + 0x2c) = 1;
      }
    }
    if (*(int *)(((int)this) + 0x28) == 0) {
      FUN_005b1a6c();
      if (*(undefined4 **)(((int)this) + 0x44) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(((int)this) + 0x44))(1);
      }
      *(undefined4 *)(((int)this) + 0x44) = 0;
      uVar2 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),((int)this) + 0x60);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(undefined4 *)(((int)this) + 0x28) = 1;
    }
    *(undefined4 *)(((int)this) + 0x54) = *(undefined4 *)(((int)this) + 0x50);
    *(int *)(((int)this) + 0x38) = *(int *)(((int)this) + 0x3c);
    if (*(int *)(((int)this) + 0x3c) != 0) {
      piVar4 = (int *)(((int)this) + 0x60);
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *piVar4;
        piVar4 = piVar4 + 1;
        param_2 = param_2 + 1;
      }
      return -(uint)(*(int *)(((int)this) + 0x30) != 0) & 0x80004005;
    }
  } while( true );
}
