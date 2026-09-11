/* Decompiled from Speed.exe @ 0041a8c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041a8c0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  int local_c;
  ushort local_8;
  
  bVar1 = false;
  FUN_006724fa(&local_c);
  iVar4 = *(int *)(unaff_EDI + 0x2b90 + unaff_ESI * 4);
  iVar3 = local_c - iVar4;
  if (local_c == iVar4) {
    iVar4 = (uint)local_8 - *(int *)(unaff_EDI + 0x2b98 + unaff_ESI * 4);
joined_r0x0041a920:
    if (iVar4 < 0x96) goto LAB_0041a93b;
  }
  else {
    if (iVar3 == 1) {
      iVar4 = ((uint)local_8 - *(int *)(unaff_EDI + 0x2b98 + unaff_ESI * 4)) + 1000;
      goto joined_r0x0041a920;
    }
    if (iVar3 < 2) goto LAB_0041a93b;
  }
  bVar1 = true;
  *(int *)(unaff_EDI + 0x2b90 + unaff_ESI * 4) = local_c;
  *(uint *)(unaff_EDI + 0x2b98 + unaff_ESI * 4) = (uint)local_8;
LAB_0041a93b:
  if ((&DAT_0071d89c)[unaff_ESI] == 0) {
    FUN_00419c20("ERROR: trying to play a force on channel %d but no");
    FUN_00419c20("wheel/joystick opened.\n");
  }
  else if (((&DAT_0071d890)[unaff_ESI] != 0) && (bVar1)) {
    iVar4 = unaff_EDI + 0x2538;
    cVar2 = FUN_0041bc20(iVar4);
    if (cVar2 == '\0') {
      if (*(int *)(unaff_ESI * 0x20 + 0x2548 + unaff_EDI) == 0) {
        iVar3 = FUN_00419900(unaff_ESI,&DAT_0071d89c + unaff_ESI,0x12,150000,0,10000,0xffffffff,0,
                             (&DAT_0071d890)[unaff_ESI],0,4,1,0,param_1,0,0,75000,0,0,0,0,20000,
                             &DAT_006a6eb0);
        if (-1 < iVar3) {
          *(int *)(unaff_EDI + 0x2be0 + unaff_ESI * 4) = param_1;
        }
      }
      else if (*(int *)(unaff_EDI + 0x2be0 + unaff_ESI * 4) != param_1) {
        iVar3 = FUN_00419ab0(unaff_ESI,0x12,150000,0,10000,0xffffffff,0,(&DAT_0071d890)[unaff_ESI],0
                             ,4,1,0,param_1,0,0,75000,0,0,0,0,20000);
        if (-1 < iVar3) {
          *(int *)(unaff_EDI + 0x2be0 + unaff_ESI * 4) = param_1;
        }
        FUN_0041bab0(iVar4,unaff_ESI);
        return;
      }
    }
    else if (*(int *)(unaff_EDI + 0x2be0 + unaff_ESI * 4) != param_1) {
      iVar3 = FUN_00419ab0(unaff_ESI,0x12,150000,0,10000,0xffffffff,0,(&DAT_0071d890)[unaff_ESI],0,4
                           ,1,0,param_1,0,0,75000,0,0,0,0,20000);
      if (-1 < iVar3) {
        *(int *)(unaff_EDI + 0x2be0 + unaff_ESI * 4) = param_1;
      }
      FUN_0041bab0(iVar4,unaff_ESI);
      return;
    }
    FUN_0041bab0(iVar4,unaff_ESI);
    return;
  }
  return;
}

