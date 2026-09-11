/* Decompiled from Speed.exe @ 0041af40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041af40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar2 = param_1 + 0x2498;
  cVar1 = FUN_0041bc20(iVar2);
  if (cVar1 != '\0') {
    if ((&DAT_0071d890)[unaff_ESI] != 0) {
      FUN_00419f50(unaff_ESI,2);
    }
    *(undefined1 *)(param_1 + 0x2499 + unaff_ESI * 8) = 0;
    *(undefined1 *)(unaff_ESI + 0x25d8 + param_1) = 1;
  }
  cVar1 = FUN_0041bc20(iVar2);
  if (cVar1 != '\0') {
    if ((&DAT_0071d890)[unaff_ESI] != 0) {
      FUN_00419f50(unaff_ESI,0);
    }
    *(undefined1 *)(param_1 + 0x2498 + unaff_ESI * 8) = 0;
    *(undefined1 *)(unaff_ESI + 0x25da + param_1) = 1;
  }
  if ((&DAT_0071d89c)[unaff_ESI] == 0) {
    FUN_00419c20("ERROR: trying to play a force on channel %d but no");
    FUN_00419c20("wheel/joystick opened.\n");
    return;
  }
  if (*(char *)(unaff_ESI + 0x2220 + param_1) != '\0') {
    return;
  }
  if ((&DAT_0071d890)[unaff_ESI] == 0) {
    return;
  }
  cVar1 = FUN_0041bc20(iVar2);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x2bf8 + unaff_ESI * 4) == param_2) {
      return;
    }
    iVar2 = FUN_0041c240(iVar2,unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                         (&DAT_0071d890)[unaff_ESI],0,4,1,0,0,-param_2,-param_2,10000,10000,0,0);
    if (iVar2 < 0) {
      return;
    }
    *(int *)(param_1 + 0x2bf8 + unaff_ESI * 4) = param_2;
    return;
  }
  if (*(int *)(unaff_ESI * 0x20 + 0x24b0 + param_1) == 0) {
    iVar3 = FUN_0041c070(unaff_ESI,&DAT_0071d89c + unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                         (&DAT_0071d890)[unaff_ESI],0,4,1,0,0,-param_2,-param_2,10000,10000,0,0,
                         &DAT_006a6e50);
  }
  else {
    if (*(int *)(param_1 + 0x2bf8 + unaff_ESI * 4) == param_2) goto LAB_0041b0cd;
    iVar3 = FUN_0041c240(iVar2,unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                         (&DAT_0071d890)[unaff_ESI],0,4,1,0,0,-param_2,-param_2,10000,10000,0,0);
  }
  if (-1 < iVar3) {
    *(int *)(param_1 + 0x2bf8 + unaff_ESI * 4) = param_2;
  }
LAB_0041b0cd:
  FUN_0041bab0(iVar2,unaff_ESI);
  return;
}

