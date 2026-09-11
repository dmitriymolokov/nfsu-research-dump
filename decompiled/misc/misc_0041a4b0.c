/* Decompiled from Speed.exe @ 0041a4b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041a4b0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((&DAT_0071d89c)[unaff_ESI] == 0) {
    FUN_00419c20("ERROR: trying to play a force on channel %d but no");
    FUN_00419c20("wheel/joystick opened.\n");
  }
  else if ((*(char *)(unaff_ESI + 0x2220 + param_1) == '\0') && ((&DAT_0071d890)[unaff_ESI] != 0)) {
    iVar2 = param_1 + 0x24e8;
    cVar1 = FUN_0041bc20(iVar2);
    if (cVar1 == '\0') {
      if (*(int *)(unaff_ESI * 0x20 + 0x24f8 + param_1) == 0) {
        iVar3 = FUN_0041bda0(unaff_ESI,&DAT_0071d89c + unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,
                             0,(&DAT_0071d890)[unaff_ESI],0,4,1,0,unaff_EDI,0,0,0,0,0,&DAT_006a6ec0)
        ;
        if (-1 < iVar3) {
          *(int *)(param_1 + 0x2bb8 + unaff_ESI * 8) = unaff_EDI;
        }
      }
      else if (*(int *)(param_1 + 0x2bb8 + unaff_ESI * 8) != unaff_EDI) {
        iVar3 = FUN_0041bf20(unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                             (&DAT_0071d890)[unaff_ESI],0,4,1,0,unaff_EDI,0,0,0,0,0);
        if (-1 < iVar3) {
          *(int *)(param_1 + 0x2bb8 + unaff_ESI * 8) = unaff_EDI;
        }
        FUN_0041bab0(iVar2,unaff_ESI);
        return;
      }
      FUN_0041bab0(iVar2,unaff_ESI);
      return;
    }
    if (*(int *)(param_1 + 0x2bb8 + unaff_ESI * 8) != unaff_EDI) {
      iVar2 = FUN_0041bf20(unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,(&DAT_0071d890)[unaff_ESI]
                           ,0,4,1,0,unaff_EDI,0,0,0,0,0);
      if (-1 < iVar2) {
        *(int *)(param_1 + 0x2bb8 + unaff_ESI * 8) = unaff_EDI;
        return;
      }
    }
  }
  return;
}

