/* Decompiled from Speed.exe @ 00407ca0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407ca0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_00702c98;
  puVar5 = &DAT_007187d0;
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar6 = &DAT_007032d8;
  puVar5 = &DAT_00718fa0;
  for (iVar2 = 0x168; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_007197a0 = 0xa0;
  DAT_007197a4 = 0x28;
  _DAT_007198e8 = 0x90;
  _DAT_007198ec = 0x24;
  puVar6 = &DAT_007187d0;
  iVar2 = 0;
  do {
    *(undefined4 *)((int)&DAT_0071979c + iVar2) = *(undefined4 *)((int)&DAT_00719b3c + iVar2);
    *(undefined4 *)((int)&DAT_00719798 + iVar2) = *(undefined4 *)((int)&DAT_00719b38 + iVar2);
    *(undefined4 *)((int)&DAT_007197ac + iVar2) = *(undefined4 *)((int)&DAT_00719b4c + iVar2);
    *(undefined4 *)((int)&DAT_007197b0 + iVar2) = *(undefined4 *)((int)&DAT_00719b50 + iVar2);
    *(undefined4 *)((int)&DAT_007197b4 + iVar2) = *(undefined4 *)((int)&DAT_00719b54 + iVar2);
    *(undefined4 *)((int)&DAT_007197b8 + iVar2) = *(undefined4 *)((int)&DAT_00719b58 + iVar2);
    *(undefined4 *)((int)&DAT_007197bc + iVar2) = *(undefined4 *)((int)&DAT_00719b5c + iVar2);
    *(undefined4 *)((int)&DAT_007197c0 + iVar2) = *(undefined4 *)((int)&DAT_00719b60 + iVar2);
    *(undefined4 *)((int)&DAT_007197c4 + iVar2) = *(undefined4 *)((int)&DAT_00719b64 + iVar2);
    *(undefined4 *)((int)&DAT_007197c8 + iVar2) = *(undefined4 *)((int)&DAT_00719b68 + iVar2);
    pcVar3 = (char *)((int)&DAT_00719b7c + iVar2);
    iVar4 = iVar2 - (int)pcVar3;
    *(undefined4 **)((int)&DAT_007197a8 + iVar2) = puVar6;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(&DAT_007197dc + iVar4)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    puVar6 = puVar6 + 500;
    iVar2 = iVar2 + 0x148;
  } while ((int)puVar6 < 0x719770);
  return;
}

