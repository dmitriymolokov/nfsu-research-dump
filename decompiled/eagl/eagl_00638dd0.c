/* Decompiled from Speed.exe @ 00638dd0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


char * FUN_00638dd0(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  
  puVar4 = param_1;
  uVar3 = *param_1 & 0xff;
  pcVar5 = (char *)0x0;
  switch(uVar3) {
  case 0x69:
    if ((*(byte *)((int)param_1 + 6) & 0x10) != 0) {
      uVar3 = (uint)(ushort)param_1[1];
      if (uVar3 == 0) {
        uVar3 = 0x40;
      }
      return (char *)(uVar3 + 0x10);
    }
    return (char *)0x10;
  case 0x6f:
    return (char *)(param_1[1] + 8);
  case 0x70:
    puVar4 = param_1 + 1;
    do {
      uVar3 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar3 != '\0');
    return (char *)((int)puVar4 + (5 - ((int)param_1 + 5)));
  case 0x7c:
    return (char *)(param_1[1] * 8 + 8);
  }
  if ((char)*param_1 < '\0') {
    puVar1 = param_1 + 3;
    param_1 = (uint *)0x0;
    if ((*puVar1 & 0x1000) == 0) {
      puVar4 = puVar4 + 4;
    }
    else {
      puVar4 = (uint *)(puVar4[4] + (int)puVar4);
    }
    iVar2 = FUN_00644910(puVar4,&param_1);
    if (iVar2 != 0) {
      return (char *)((int)param_1 + 0x10);
    }
  }
  else {
    pcVar5 = (char *)FUN_00638cd0(uVar3,(int)(short)param_1[1],(int)*(short *)((int)param_1 + 6),
                                  param_1[3] >> 0x1c,param_1[3] >> 0xd & 0xffffff01);
  }
  return pcVar5;
}

