/* Decompiled from Speed.exe @ 0041c590 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041c590(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_c [12];
  
  pcVar3 = param_5;
  __itoa(param_1,param_5,10);
  pcVar8 = pcVar3 + -1;
  do {
    pcVar7 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  *(undefined2 *)pcVar8 = DAT_006cb158;
  __itoa((uint)param_2,local_c,10);
  pcVar8 = local_c;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar8 - (int)local_c;
  pcVar8 = pcVar3 + -1;
  do {
    pcVar7 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = local_c;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar6 = 0;
  do {
    pcVar8 = pcVar3 + -1;
    do {
      pcVar7 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    bVar2 = *(byte *)((int)&param_3 + iVar6);
    *(undefined2 *)pcVar8 = DAT_006cb158;
    __itoa((uint)bVar2,local_c,10);
    pcVar8 = local_c;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar8 - (int)local_c;
    pcVar8 = pcVar3 + -1;
    do {
      pcVar7 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = local_c;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    iVar6 = iVar6 + 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
  } while (iVar6 < 8);
  return;
}

