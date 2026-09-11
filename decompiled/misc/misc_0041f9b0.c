/* spd-match: far pct=18.51 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004049f0();
int __cdecl FUN_0040a880();
int __cdecl FUN_00421900();
int __cdecl FUN_00421980();
int __cdecl FUN_004219b0();
int __cdecl FUN_004665a0();
int __cdecl FUN_004682c0();
int __cdecl FUN_00565850();
int __cdecl FUN_00567220();
int __cdecl FUN_00577880();
int __cdecl FUN_00578b10();
int __cdecl FUN_005793e0();
int __cdecl FUN_00579720();
int __cdecl FUN_00589c90();
int __cdecl FUN_0058a050();
int __cdecl FUN_00593620();
int __cdecl FUN_00593790();
int __cdecl FUN_005939d0();
int __cdecl FUN_00595ea0();
int __cdecl FUN_005984d0();
int __cdecl FUN_00627bf0();
extern int DAT_006f089c;
extern int DAT_006f08a0;
extern int DAT_006f08a4;
extern unsigned char *DAT_0070d364;
extern int DAT_007301d4;
extern int DAT_00734460;
extern int DAT_00734510;
extern int DAT_0073457c;
extern unsigned char *DAT_007345b8;
extern int DAT_0073557c;
extern unsigned char *DAT_0073613c;
extern int DAT_007361f8;
extern int DAT_00736200;
extern int DAT_0073ad34;
extern int _DAT_006f0898;
extern int _DAT_00734578;
extern int _DAT_00734580;
extern void LAB_00687fa0(void);
void *ExceptionList;

void FUN_0041f9b0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00687fa0;
  pvStack_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &pvStack_c;
  if (DAT_007301d4 != 0) {
    ExceptionList = &pvStack_c;
    FUN_00565850(DAT_007301d4,1);
  }
  pvVar1 = DAT_00734460;
  if (DAT_00734460 != (void *)0x0) {
    _eh_vector_destructor_iterator_(DAT_00734460,8,0xcb,FUN_004049f0);
    _free(pvVar1);
    DAT_00734460 = (void *)0x0;
  }
  if (DAT_00736200 == 0) {
    FUN_004682c0();
  }
  else {
    FUN_00593620();
  }
  FUN_00627bf0();
  FUN_00577880();
  FUN_005793e0();
  if (DAT_007345b8 != (void *)0x0) {
    pvVar1 = (void *)((int)DAT_007345b8 + -4);
    _eh_vector_destructor_iterator_(DAT_007345b8,8,*(int *)((int)DAT_007345b8 + -4),FUN_00579720);
    _free(pvVar1);
  }
  FUN_00578b10(0);
  (**(code **)(*DAT_0070d364 + 0x34))();
  FUN_00595ea0();
  if (DAT_0073613c != (int *)0x0) {
    if ((DAT_0073613c[2] != 0) || (DAT_0073613c[3] != 0)) {
      iVar2 = *DAT_0073613c;
      piVar3 = (int *)DAT_0073613c[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
    }
    iVar4 = DAT_0073557c;
    DAT_0073613c[3] = 0;
    DAT_0073613c[2] = 0;
    DAT_0073613c[4] = 0;
    DAT_0073613c[5] = 0;
    iVar2 = *(int *)(iVar4 + 0x18);
    *DAT_0073613c = *(int *)(iVar4 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(int **)(iVar4 + 0x10) = DAT_0073613c;
  }
  DAT_0073613c = (int *)0x0;
  FUN_005939d0();
  FUN_00593790();
  if (DAT_00734510 != 0) {
    FUN_0058a050();
    FUN_00567220();
    DAT_00734510 = 0;
  }
  FUN_00589c90();
  FUN_00567220();
  pvVar1 = *(void **)(param_1 + 0x2f0);
  if (pvVar1 != (void *)0x0) {
    FUN_005984d0();
    _free(pvVar1);
  }
  DAT_0073ad34 = 4000;
  _DAT_006f0898 = 0x3f800000;
  DAT_006f089c = 1;
  DAT_006f08a0 = 1;
  _DAT_00734578 = 0;
  DAT_0073457c = 0;
  _DAT_00734580 = 0;
  DAT_006f08a4 = 100000;
  pvVar1 = *(void **)(param_1 + 0x1794);
  DAT_007361f8 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004665a0();
    _free(pvVar1);
  }
  (*(unsigned char *)&(local_4)) = 3;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x940),0x50,0x14,FUN_0040a880);
  (*(unsigned char *)&(local_4)) = 2;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x300),0x50,0x14,FUN_0040a880);
  FUN_004219b0(param_1 + 0x10);
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  FUN_00421900();
  local_4 = 0xffffffff;
  FUN_00421980();
  ExceptionList = pvStack_c;
  return;
}
