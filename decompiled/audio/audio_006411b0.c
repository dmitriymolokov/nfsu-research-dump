/* Decompiled from Speed.exe @ 006411b0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void fn_006411B0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  if (iVar1 < param_1) {
    param_1 = iVar1;
  }
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  iVar3 = iVar1 - param_1;
  iVar4 = (iVar2 - param_2) / 2;
  if (iVar2 * 2 < iVar1) {
    iVar3 = iVar1 / 2 - param_1;
  }
  iVar3 = iVar3 / 2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  fn_00641050(iVar3,iVar4,param_1,param_2);
  return;
}

