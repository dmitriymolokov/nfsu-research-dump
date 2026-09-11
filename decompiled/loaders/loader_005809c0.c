/* Decompiled from Speed.exe @ 005809c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005809c0(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  char *pcVar2;
  undefined1 *unaff_ESI;
  int iVar3;
  
  FUN_00417600();
  unaff_ESI[1] = param_1;
  *unaff_ESI = 0;
  unaff_ESI[3] = param_7;
  *(undefined4 *)(unaff_ESI + 4) = param_2;
  FUN_004323f0(unaff_ESI + 0x10,param_3);
  unaff_ESI[0x735] = param_5;
  pcVar2 = unaff_ESI + 0x73c;
  unaff_ESI[0x736] = param_6;
  unaff_ESI[0x734] = 0;
  *(undefined4 *)(unaff_ESI + 0x738) = 0;
  iVar3 = 0x10;
  param_4 = param_4 - (int)pcVar2;
  do {
    cVar1 = pcVar2[param_4];
    iVar3 = iVar3 + -1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + 1;
  } while (iVar3 != 0);
  return;
}

