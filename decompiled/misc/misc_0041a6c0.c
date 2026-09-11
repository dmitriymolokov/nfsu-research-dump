/* Decompiled from Speed.exe @ 0041a6c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041a6c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar3 = param_1 + 0x2498;
  cVar1 = FUN_0041bc20(iVar3);
  if (cVar1 == '\0') {
    if ((&DAT_0071d89c)[unaff_ESI] == 0) {
      FUN_00419c20("ERROR: trying to play a force on channel %d but no");
      FUN_00419c20("wheel/joystick opened.\n");
    }
    else if ((*(char *)(unaff_ESI + 0x2220 + param_1) == '\0') && ((&DAT_0071d890)[unaff_ESI] != 0))
    {
      cVar1 = FUN_0041bc20(iVar3);
      if (cVar1 == '\0') {
        if (*(int *)(unaff_ESI * 0x20 + 0x24ac + param_1) == 0) {
          iVar2 = FUN_0041c070(unaff_ESI,&DAT_0071d89c + unaff_ESI,0x12,0xffffffff,0,10000,
                               0xffffffff,0,(&DAT_0071d890)[unaff_ESI],0,4,1,0,0,unaff_EDI,unaff_EDI
                               ,10000,10000,0,0,&DAT_006a6e50);
          if (-1 < iVar2) {
            *(int *)(param_1 + 0x2bc8 + unaff_ESI * 4) = unaff_EDI;
          }
          FUN_0041bab0(iVar3,unaff_ESI);
          return;
        }
        if (*(int *)(param_1 + 0x2bc8 + unaff_ESI * 4) != unaff_EDI) {
          iVar2 = FUN_0041c240(iVar3,unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                               (&DAT_0071d890)[unaff_ESI],0,4,1,0,0,unaff_EDI,unaff_EDI,10000,10000,
                               0,0);
          if (-1 < iVar2) {
            *(int *)(param_1 + 0x2bc8 + unaff_ESI * 4) = unaff_EDI;
          }
          FUN_0041bab0(iVar3,unaff_ESI);
          return;
        }
        FUN_0041bab0(iVar3,unaff_ESI);
        return;
      }
      if ((*(int *)(param_1 + 0x2bc8 + unaff_ESI * 4) != unaff_EDI) &&
         (iVar3 = FUN_0041c240(iVar3,unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                               (&DAT_0071d890)[unaff_ESI],0,4,1,0,0,unaff_EDI,unaff_EDI,10000,10000,
                               0,0), -1 < iVar3)) {
        *(int *)(param_1 + 0x2bc8 + unaff_ESI * 4) = unaff_EDI;
        return;
      }
    }
  }
  return;
}

