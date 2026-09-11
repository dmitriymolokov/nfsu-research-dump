/* spd-match: far pct=8.88 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p1/attempt3_c_focused */
#include "ghidra_compat.h"

int __cdecl FUN_005b19e6();
int __cdecl FUN_005b1f01();
int __cdecl FUN_005b1fca();
int __cdecl FUN_005c564d();
int __cdecl FUN_005c5691();
int __cdecl FUN_005c56b6();
int __cdecl FUN_005c7ed5();
int __cdecl FUN_005d7700();
int __cdecl FUN_005e5629();
int __cdecl FUN_005e61cb();
int __cdecl FUN_005e6299();
int __cdecl FUN_005e6ae3();
int __cdecl FUN_005e6d03();
int __cdecl FUN_005e7021();
int __cdecl FUN_005e710d();
int __cdecl FUN_005e737f();
int __cdecl FUN_005e739b();
int __cdecl FUN_005e8013();
extern int DAT_00709478;
extern void LAB_005e871f(void);
extern void LAB_005e872d(void);
extern void LAB_005e8858(void);
extern void LAB_005e8937(void);
extern void LAB_005e8a26(void);
extern void LAB_005e8a31(void);

int  FUN_005e85e1(int *param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  HMODULE hModule;
  int (*pFVar4)(void);
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_10 [4];
  int local_c;
  
  uVar1 = param_3;
  if ((param_3 & 0xfffffffa) != 0) {
    return -0x7789f794;
  }
  if (param_5 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  *param_5 = 0;
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
  }
  _free((void *)param_1[0x16]);
  if (param_1[0x1e] != 0) {
    FUN_005e737f(1);
  }
  DAT_00709478 = param_1;
  param_1[0xe] = -1;
  param_1[1] = param_2;
  *param_1 = param_2 + 4;
  param_1[2] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0xf] = uVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_4 != 0) {
    param_1[0xf] = uVar1 | 4;
    param_1[0x1f] = param_4;
    pvVar2 = _malloc(100);
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005e710d();
    }
    param_1[0x1e] = iVar3;
    if (iVar3 == 0) {
      return -0x7ff8fff2;
    }
  }
  FUN_005c5691(&param_3,0);
  if (param_3 == 0) {
    FUN_005c56b6(param_1 + 0x1b,param_1 + 0x1c);
  }
  iVar3 = FUN_005c564d(2);
  if (iVar3 < 0) {
    return iVar3;
  }
  FUN_005e739b();
  if ((param_1[4] == 9) && (iVar3 = FUN_005d7700(param_1[6],1,local_10), -1 < iVar3)) {
    param_1[4] = 0;
    param_1[6] = local_c;
  }
  if (param_1[4] != 0) {
    pcVar7 = "shader version expected";
    uVar6 = 0x7d1;
LAB_005e871f:
    FUN_005b1f01(*param_1,param_1 + 4,uVar6,pcVar7);
    goto LAB_005e872d;
  }
  if (param_1[6] == -0x1ff00) {
    FUN_005b1fca(*param_1,param_1 + 4,0x7df,"vs_1_0 is no longer supported; using vs_1_1");
    param_1[6] = -0x1feff;
  }
  if (param_1[6] == -0xff00) {
    FUN_005b1fca(*param_1,param_1 + 4,0x7df,"ps_1_0 is no longer supported; using ps_1_1");
    param_1[6] = -0xfeff;
  }
  uVar1 = param_1[6];
  if (uVar1 < 0xffff0103) {
    if (uVar1 == 0xffff0102) {
      param_1[0xe] = 7;
    }
    else if (uVar1 == 0xfffe0101) {
      param_1[0xe] = 0;
    }
    else if (uVar1 == 0xfffe0200) {
      param_1[0xe] = 1;
    }
    else if (uVar1 == 0xfffe0201) {
      param_1[0xe] = 2;
    }
    else if (uVar1 == 0xfffe02ff) {
      param_1[0xe] = 3;
    }
    else if (uVar1 == 0xfffe0300) {
      param_1[0xe] = 4;
    }
    else if (uVar1 == 0xfffe03ff) {
      param_1[0xe] = 5;
    }
    else {
      if (uVar1 != 0xffff0101) goto LAB_005e8858;
      param_1[0xe] = 6;
    }
  }
  else if (uVar1 == 0xffff0103) {
    param_1[0xe] = 8;
  }
  else if (uVar1 == 0xffff0104) {
    param_1[0xe] = 9;
  }
  else if (uVar1 == 0xffff0200) {
    param_1[0xe] = 10;
  }
  else if (uVar1 == 0xffff0201) {
    param_1[0xe] = 0xb;
  }
  else if (uVar1 == 0xffff02ff) {
    param_1[0xe] = 0xc;
  }
  else if (uVar1 == 0xffff0300) {
    param_1[0xe] = 0xd;
  }
  else {
    if (uVar1 != 0xffff03ff) {
LAB_005e8858:
      pcVar7 = "unrecognized shader version";
      uVar6 = 0x7d2;
      goto LAB_005e871f;
    }
    param_1[0xe] = 0xe;
  }
  if (param_1[0x1e] != 0) {
    if ((param_1[0xe] < 0) || (3 < param_1[0xe])) {
      FUN_005b1f01(*param_1,param_1 + 4,0x7d1,
                   "only vs_1_1, vs_2_0, vs_2_x, and vs_2_sw are supported for assembly fragments");
    }
    param_1[6] = (*(byte *)((int)param_1 + 0x19) | 0x7ffe00) << 8 | param_1[6] & 0xffU;
  }
  if (((*(byte *)(param_1 + 0xf) & 4) == 0) &&
     (((hModule = GetModuleHandleA("d3d9.dll"), hModule != (HMODULE)0x0 ||
       (hModule = LoadLibraryA("d3d9.dll"), hModule != (HMODULE)0x0)) &&
      (pFVar4 = GetProcAddress(hModule,"Direct3DShaderValidatorCreate9"), pFVar4 != (FARPROC)0x0))))
  {
    piVar5 = (int *)(*pFVar4)();
    param_1[2] = (int)piVar5;
    if ((piVar5 == (int *)0x0) ||
       (iVar3 = (**(code **)(*piVar5 + 0xc))(piVar5,FUN_005e5629,param_1,0), -1 < iVar3))
    goto LAB_005e8937;
  }
  else {
LAB_005e8937:
    iVar3 = FUN_005e6299(param_1[6]);
    if ((-1 < iVar3) && (iVar3 = FUN_005e61cb(param_1 + 4), -1 < iVar3)) {
      if (param_1[0x13] == 0) {
        iVar3 = FUN_005e8013();
        if (iVar3 != 0) {
          param_1[0x13] = 1;
        }
        if (param_1[0x13] == 0) {
          if (param_1[0x1b] != 0) {
            FUN_005c56b6(&param_2,0);
            uVar1 = param_1[0x1b];
            if ((uVar1 < param_2) && (param_2 < param_1[0x1c] + uVar1)) {
              param_1[0x1c] = param_2 - uVar1;
            }
          }
          if (((((param_1[0x1e] == 0) || (iVar3 = FUN_005e6ae3(), -1 < iVar3)) &&
               (((*(byte *)(param_1 + 0xf) & 1) == 0 || (iVar3 = FUN_005e6d03(), -1 < iVar3)))) &&
              ((iVar3 = FUN_005e6299(0xffff), -1 < iVar3 &&
               (iVar3 = FUN_005e61cb(param_1 + 4), -1 < iVar3)))) &&
             ((piVar5 = (int *)param_1[2], piVar5 == (int *)0x0 ||
              (iVar3 = (**(code **)(*piVar5 + 0x14))(piVar5), -1 < iVar3)))) {
            iVar3 = FUN_005b19e6();
            if (iVar3 != 0) goto LAB_005e872d;
            iVar3 = FUN_005e7021(param_5);
            if (-1 < iVar3) {
              iVar3 = 0;
              goto LAB_005e8a31;
            }
          }
          goto LAB_005e8a26;
        }
      }
LAB_005e872d:
      iVar3 = -0x7789f4a7;
    }
  }
LAB_005e8a26:
  param_1[0x13] = 1;
LAB_005e8a31:
  piVar5 = (int *)param_1[2];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    param_1[2] = 0;
  }
  FUN_005c7ed5();
  return iVar3;
}
