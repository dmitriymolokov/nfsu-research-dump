/* spd-match: far pct=12.83 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

typedef void _func_4879(void);
int __cdecl FUN_00417600();
int __cdecl FUN_004323f0();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004aefa0();
int __cdecl FUN_004af020();
int __cdecl FUN_004af030();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004b2480();
int __cdecl FUN_004b2520();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7b50();
int __cdecl FUN_0051a860();
int __cdecl FUN_0051bb50();
extern int DAT_006fb038;
extern unsigned char *DAT_007356a8;
extern int DAT_00735768;
extern int DAT_0073576c;
extern int DAT_00735e50;
extern int DAT_00735e5c;
extern int DAT_00746104;
extern int DAT_00748850;
extern int DAT_0075eef8;
extern int DAT_0078f620;
extern int DAT_00792fa0;
extern int _DAT_0072cc80;
extern unsigned char *PTR_LAB_006c01ac;
extern void LAB_00689387(void);
extern void LAB_006964a0(void);
void *ExceptionList;

void __fastcall FUN_00513aa0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_740 [1828];
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_00689387;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  *param_1 = &PTR_LAB_006c01ac;
  (local_14 = ((unsigned int)(local_14) & 0xff));
  if ((DAT_00792fa0 & 1) == 0) {
    DAT_00792fa0 = DAT_00792fa0 | 1;
    (*(unsigned char *)&(local_14)) = 1;
    (local_14 = ((unsigned int)(local_14) & 0xff));
    _eh_vector_constructor_iterator_(&DAT_0078f620,0x1cc0,2,FUN_004aefa0,FUN_004af020);
    _atexit((_func_4879 *)&LAB_006964a0);
  }
  (*(unsigned char *)&(local_14)) = 0;
  FUN_004af030();
  if ((DAT_00792fa0 & 1) == 0) {
    DAT_00792fa0 = DAT_00792fa0 | 1;
    (*(unsigned char *)&(local_14)) = 2;
    _eh_vector_constructor_iterator_(&DAT_0078f620,0x1cc0,2,FUN_004aefa0,FUN_004af020);
    _atexit((_func_4879 *)&LAB_006964a0);
    (*(unsigned char *)&(local_14)) = 0;
  }
  FUN_004af030();
  FUN_004b2480();
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x14);
  }
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  DAT_006fb038 = param_1[0x10];
  DAT_00735768 = 0;
  FUN_004b2520();
  FUN_00417600();
  FUN_004ac5a0(&DAT_0075eef8,0,local_740);
  iVar2 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,local_740);
  _DAT_0072cc80 = 2;
  if (iVar2 != 0) {
    FUN_004b0e50(iVar2,&DAT_00748850,2);
  }
  if (DAT_00735e5c == '\0') {
    if (DAT_0073576c != 0) {
      FUN_0051a860(DAT_0073576c);
    }
  }
  else {
    if ((*(int *)(DAT_007356a8 + 0x104) != 0) &&
       (piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xa0))();
    }
    FUN_0051bb50();
    DAT_00735e5c = '\0';
    DAT_00735e50 = 0;
  }
  local_14 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_1c;
  return;
}
