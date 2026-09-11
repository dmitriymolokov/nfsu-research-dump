/* spd-match: far pct=8.02 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004f7b50();
int __cdecl FUN_004f84d0();
int __cdecl FUN_00511f00();
extern int DAT_0073574c;
extern int DAT_00745000;
extern int DAT_00745720;
extern int DAT_00748850;
extern int _DAT_0072cc80;
extern unsigned char *PTR_FUN_006c019c;
extern void LAB_00688bdc(void);
void *ExceptionList;

void __fastcall FUN_005123e0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688bdc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c019c;
  local_4 = 3;
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_00511f00(0,DAT_0073574c,*(char *)(param_1 + 0x24));
  }
  FUN_004323f0(&DAT_00745000,&DAT_00745720);
  iVar3 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745720);
  _DAT_0072cc80 = 2;
  if (iVar3 != 0) {
    FUN_004b0e50(iVar3,&DAT_00748850,2);
  }
  piVar1 = (int *)param_1[0x22];
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  while (piVar1 != param_1 + 0x22) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    if (piVar1 + -1 != (int *)0x0) {
      (**(code **)piVar1[-1])(1);
    }
    piVar1 = (int *)param_1[0x22];
  }
  FUN_004f84d0();
  piVar1 = (int *)param_1[0x11];
  while (piVar1 != param_1 + 0x11) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    _free(piVar1);
    piVar1 = (int *)param_1[0x11];
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}
