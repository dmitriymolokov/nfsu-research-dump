/* Decompiled from Speed.exe @ 00645fc0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void __fastcall FUN_00645fc0(DWORD *param_1)

{
  uint uVar1;
  DWORD DVar2;
  undefined8 uVar3;
  
  DVar2 = timeGetTime();
  if (param_1[4] == 0x1000) {
    uVar1 = param_1[2];
    param_1[2] = uVar1 + (DVar2 - *param_1);
    param_1[3] = param_1[3] + (uint)CARRY4(uVar1,DVar2 - *param_1);
  }
  else {
    uVar3 = __aulldiv((ulonglong)param_1[4] * (ulonglong)(DVar2 - *param_1),0x1000,0);
    uVar1 = param_1[2];
    param_1[2] = uVar1 + (uint)uVar3;
    param_1[3] = param_1[3] + (int)((ulonglong)uVar3 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar3);
  }
  *param_1 = DVar2;
  return;
}

