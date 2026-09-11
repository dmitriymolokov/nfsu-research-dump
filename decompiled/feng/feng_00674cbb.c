/* spd-match: far pct=8.05 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p2/buckets/p2_05/attempt3 */
#include "ghidra_compat.h"

int __cdecl __isnan(double);
typedef struct m375_ptiddata {
  void *_tfpecode;
  void *_initaddr;
  int _holdrand;
  int _thandle;
  DWORD _tid;
  unsigned char _pad[128];
} *m375_ptiddata_ptr;
#define _ptiddata m375_ptiddata_ptr
typedef struct m375_lc_category { int refcount; } m375_lc_category;
typedef struct m375_pthreadlocinfo {
  void *_tfpecode;
  m375_lc_category lc_category[4];
} *m375_pthreadlocinfo_ptr;
#define pthreadlocinfo m375_pthreadlocinfo_ptr

int __cdecl FUN_00675bd0();
int __cdecl FUN_00677f42();
extern unsigned char *PTR_DAT_006eb554;
extern unsigned char *PTR_DAT_006ec130;
extern void LAB_00674d22(void);
extern void LAB_00674d85(void);
extern void LAB_00674df1(void);

uint __cdecl strtoxl(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  uint local_8;
  
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_006eb554) {
    ptVar3 = ___updatetlocinfo();
  }
  local_8 = 0;
  bVar8 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    pbVar9 = pbVar1 + 1;
    if ((int)ptVar3->lc_category[1].refcount < 2) {
      uVar4 = *(byte *)((int)ptVar3->lc_category[3].refcount + (uint)bVar8 * 2) & 8;
    }
    else {
      uVar4 = FUN_00675bd0(ptVar3,(uint)bVar8,8);
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar1 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_4 = param_4 | 2;
LAB_00674d22:
    bVar8 = *pbVar9;
    pbVar9 = pbVar1 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_00674d22;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar8 != 0x30) {
      param_3 = 10;
      goto LAB_00674d85;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_3 = 8;
      goto LAB_00674d85;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar8 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_00674d85:
  uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if ((*(ushort *)(PTR_DAT_006ec130 + (uint)bVar8 * 2) & 4) == 0) {
      if ((*(ushort *)(PTR_DAT_006ec130 + (uint)bVar8 * 2) & 0x103) == 0) {
LAB_00674df1:
        pbVar9 = pbVar9 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pbVar9 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          puVar5 = (undefined4 *)FUN_00677f42();
          *puVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pbVar9;
        }
        if ((param_4 & 2) == 0) {
          return local_8;
        }
        return -local_8;
      }
      if (((char)bVar8 < 'a') || ('z' < (char)bVar8)) {
        iVar7 = (int)(char)bVar8;
      }
      else {
        iVar7 = (char)bVar8 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_00674df1;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar6;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}
