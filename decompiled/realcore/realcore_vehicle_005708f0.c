/* Decompiled from Speed.exe @ 005708f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __thiscall
FUN_005708f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&DAT_006f1b38 + param_1 * 4);
  if (*(int *)(&DAT_006f1b38 + param_1 * 4) < DAT_00734608) {
    iVar1 = DAT_00734608;
  }
  iVar2 = *(int *)(&DAT_006f1b40 + param_1 * 4);
  if (*(int *)(&DAT_006f1b40 + param_1 * 4) < DAT_0073460c) {
    iVar2 = DAT_0073460c;
  }
  FUN_0056dc30(param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_10,0,iVar2,iVar1,
               param_11);
  return;
}

