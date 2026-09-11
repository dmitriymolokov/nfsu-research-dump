/* spd-match: far pct=7.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004ee670();
int __cdecl FUN_004eeb90();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_00500640();
extern void LAB_004eeea5(void);
extern void LAB_00686c88(void);
void *ExceptionList;

int FUN_004eede0(undefined1 *param_1,char *param_2,byte param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686c88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_004fd1e0(param_1 + 0xec);
  if (iVar4 == 0) {
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    cVar3 = (char)pcVar5 - ((char)pcVar2 + '\x01');
    pcVar5 = pcVar2 + cVar3 + -1;
    cVar1 = *pcVar5;
    for (; ((cVar1 != '/' && (cVar1 != '\\')) && ('\0' < cVar3)); cVar3 = cVar3 + -1) {
      cVar1 = pcVar5[-1];
      pcVar5 = pcVar5 + -1;
    }
    iVar4 = FUN_004fd1e0(param_1 + 0xec);
    if (iVar4 == 0) {
      iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x10c))(pcVar2,&local_10,&param_2);
      if (iVar4 == 0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      iVar4 = FUN_004eeb90(iVar4,0);
      if ((char)param_2 != '\0') {
        _free(local_10);
      }
      if (iVar4 == 0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      goto LAB_004eeea5;
    }
  }
  local_4 = 0;
  *(undefined1 *)(iVar4 + 0x15) = 1;
  FUN_004ffb00(iVar4);
  FUN_004ee670();
  local_4 = 0xffffffff;
LAB_004eeea5:
  *(undefined4 *)(iVar4 + 0x1c) = param_4;
  *(uint *)(iVar4 + 0x18) = (uint)param_3;
  *(undefined1 *)(iVar4 + 0x14) = *param_1;
  if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10c) + 0xc))(iVar4);
  }
  FUN_00500640();
  ExceptionList = pvStack_c;
  return iVar4;
}
