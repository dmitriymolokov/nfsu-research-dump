/* spd-match: far pct=7.27 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p2/batches/20260724T142539Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct m375_ov12 { undefined4 a,b,c; } m375_ov12;
typedef struct _m375_ptiddata {
  void *_initaddr; void *_initarg; void *_translator; void *_terminate;
  void *_unexpected; void *_purecall; void *_token; void *_tpxcptinfoptrs;
  void *_pxcptacttab; unsigned int _holdrand; int _tfpecode; int _terrno;
  int _tdoserrno; int _NLG_dwCode; int _maxcharsize; char _con_ch_buf[32];
  unsigned int _thandle; unsigned char _pad[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_0040a880();
int __cdecl FUN_00421900();
int __cdecl FUN_00468410();
int __cdecl FUN_0046a9b0();
int __cdecl FUN_00567220();
int __cdecl FUN_00591c90();
extern int DAT_007349b4;
extern int DAT_007349b8;
extern int DAT_00736010;
extern int DAT_00736024;
extern int DAT_00736538;
extern int DAT_00779bd8;
extern int DAT_0078ea30;
extern unsigned char *PTR_FUN_006b8b18;
extern unsigned char *PTR_FUN_006c85b8;
extern unsigned char *PTR_LAB_006b8b08;
extern void LAB_00596d41(void);
extern void LAB_00686a79(void);
void *ExceptionList;

void __fastcall FUN_00596cc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *_Memory;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00686a79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006b8b18;
  param_1[0x50] = &PTR_LAB_006b8b08;
  puVar1 = (unsigned int)(DAT_00779bd8);
  DAT_00736024 = ((int)DAT_00736024) + -1;
  iVar4 = *(int *)(param_1[0x56] + 0x80);
  local_4 = 5;
  puVar3 = (undefined4 *)FUN_0040a880();
  for (; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[6] == iVar4) goto LAB_00596d41;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    _free((void *)param_1[4]);
  }
LAB_00596d41:
  iVar4 = (unsigned int)(DAT_007349b4);
  if ((undefined4 *)param_1[300] != param_1 + 300) {
    do {
      piVar5 = (int *)param_1[300];
      iVar6 = *piVar5;
      piVar7 = (int *)piVar5[1];
      piVar2 = (int *)piVar5[2];
      *piVar7 = iVar6;
      *(int **)(iVar6 + 4) = piVar7;
      iVar6 = *(int *)(iVar4 + 0x18);
      *piVar5 = *(int *)(iVar4 + 0x10);
      *(int **)(iVar4 + 0x10) = piVar5;
      iVar6 = iVar6 + -1;
      bVar8 = (unsigned int)(DAT_007349b8) != 0;
      *(int *)(iVar4 + 0x18) = iVar6;
      if (bVar8) {
        if (iVar6 == 0) {
          FUN_00567220();
          iVar4 = 0;
          DAT_007349b4 = 0;
        }
        else {
          DAT_007349b8 = 1;
        }
      }
      if (*(char *)(param_1 + 0x130) != '\0') {
        iVar6 = *piVar2;
        piVar5 = (int *)piVar2[1];
        *piVar5 = iVar6;
        *(int **)(iVar6 + 4) = piVar5;
        DAT_0078ea30 = ((int)DAT_0078ea30) + -1;
      }
      if (piVar2 != (int *)0x0) {
        DAT_00736538 = ((int)DAT_00736538) + -1;
        _free(piVar2);
        iVar4 = (unsigned int)(DAT_007349b4);
      }
    } while ((undefined4 *)param_1[300] != param_1 + 300);
  }
  piVar7 = param_1 + 0x12e;
  piVar5 = (int *)param_1[0x12e];
  while (piVar5 != piVar7) {
    piVar5 = (int *)*piVar7;
    iVar6 = *piVar5;
    piVar2 = (int *)piVar5[1];
    _Memory = (int *)piVar5[2];
    *piVar2 = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    iVar6 = *(int *)(iVar4 + 0x18);
    *piVar5 = *(int *)(iVar4 + 0x10);
    *(int **)(iVar4 + 0x10) = piVar5;
    iVar6 = iVar6 + -1;
    bVar8 = (unsigned int)(DAT_007349b8) != 0;
    *(int *)(iVar4 + 0x18) = iVar6;
    if (bVar8) {
      if (iVar6 == 0) {
        FUN_00567220();
        iVar4 = 0;
        DAT_007349b4 = 0;
      }
      else {
        DAT_007349b8 = 1;
      }
    }
    if (*(char *)((int)param_1 + 0x4c1) != '\0') {
      iVar6 = *_Memory;
      piVar5 = (int *)_Memory[1];
      *piVar5 = iVar6;
      *(int **)(iVar6 + 4) = piVar5;
      DAT_0078ea30 = ((int)DAT_0078ea30) + -1;
    }
    if (_Memory != (int *)0x0) {
      DAT_00736538 = ((int)DAT_00736538) + -1;
      _free(_Memory);
      iVar4 = (unsigned int)(DAT_007349b4);
    }
    piVar5 = (int *)*piVar7;
  }
  (*(unsigned int *)&(local_4) = (*(unsigned int *)&(local_4) & 0xffu) | (((unsigned int)((uint3)((uint)local_4 >> 8))) << 8));
  (*(unsigned char *)&(local_4)) = 4;
  FUN_00421900();
  (*(unsigned char *)&(local_4)) = 3;
  FUN_00421900();
  (*(unsigned char *)&(local_4)) = 2;
  FUN_00591c90(param_1 + 0x110);
  iVar4 = param_1[0x106];
  if (0 < iVar4) {
    piVar5 = param_1 + 0x66;
    do {
      iVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
      *(char *)(iVar6 + 8) = *(char *)(iVar6 + 8) + -1;
    } while (iVar4 != 0);
  }
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  FUN_0046a9b0();
  *param_1 = &PTR_FUN_006c85b8;
  DAT_00736010 = ((int)DAT_00736010) + -1;
  local_4 = 0xffffffff;
  FUN_00468410();
  ExceptionList = local_c;
  return;
}
