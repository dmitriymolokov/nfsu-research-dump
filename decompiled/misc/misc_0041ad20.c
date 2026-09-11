/* Decompiled from Speed.exe @ 0041ad20 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041ad20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  if ((&DAT_0071d89c)[unaff_ESI] == 0) {
    FUN_00419c20("ERROR: trying to play a force on channel %d but no");
    FUN_00419c20("wheel/joystick opened.\n");
  }
  else if ((*(char *)(unaff_ESI + 0x2220 + param_1) == '\0') && ((&DAT_0071d890)[unaff_ESI] != 0)) {
    iVar3 = param_1 + 0x2538;
    cVar1 = FUN_0041bc20(iVar3);
    if (cVar1 == '\0') {
      if (*(int *)(unaff_ESI * 0x20 + 0x2550 + param_1) == 0) {
        iVar2 = FUN_00419900(unaff_ESI,&DAT_0071d89c + unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,
                             0,(&DAT_0071d890)[unaff_ESI],0,4,1,0,param_2,0,0,100000,0,0,0,0,0,
                             &DAT_006a6eb0);
        if (-1 < iVar2) {
          *(int *)(param_1 + 0x2bf0 + unaff_ESI * 4) = param_2;
        }
        FUN_0041bab0(iVar3,unaff_ESI);
        return;
      }
      if (*(int *)(param_1 + 0x2bf0 + unaff_ESI * 4) == param_2) {
        FUN_0041bab0(iVar3,unaff_ESI);
        return;
      }
      iVar2 = FUN_00419ab0(unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,(&DAT_0071d890)[unaff_ESI]
                           ,0,4,1,0,param_2,0,0,100000,0,0,0,0,0);
      if (-1 < iVar2) {
        *(int *)(param_1 + 0x2bf0 + unaff_ESI * 4) = param_2;
      }
      FUN_0041bab0(iVar3,unaff_ESI);
      return;
    }
    if (*(int *)(param_1 + 0x2bf0 + unaff_ESI * 4) != param_2) {
      iVar3 = FUN_00419ab0(unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,(&DAT_0071d890)[unaff_ESI]
                           ,0,4,1,0,param_2,0,0,100000,0,0,0,0,0);
      if (-1 < iVar3) {
        *(int *)(param_1 + 0x2bf0 + unaff_ESI * 4) = param_2;
        return;
      }
    }
  }
  return;
}

