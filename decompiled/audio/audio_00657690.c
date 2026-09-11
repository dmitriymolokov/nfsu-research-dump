/* Decompiled from Speed.exe @ 00657690 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00657690(byte *param_1,ushort *param_2)

{
  short sVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  
  puVar3 = param_2;
  uVar2 = param_2[2];
  *param_1 = (byte)uVar2;
  iVar4 = 0;
  *(float *)(param_1 + 0x1c) = ((float)*param_2 * _DAT_006cc8fc) / (float)DAT_00713d9a;
  if ((byte)uVar2 != 0) {
    puVar6 = param_2 + 0x16;
    pbVar5 = param_1 + 4;
    param_2 = param_2 + 0x2e;
    do {
      *(ushort *)(pbVar5 + 0xc) = *param_2;
      sVar1 = *(short *)(DAT_00713f48 + 4 + ((short)puVar3[1] * 0x46 + iVar4) * 2);
      *(short *)pbVar5 = sVar1;
      FUN_006565d0((int)sVar1,*(undefined1 *)((int)puVar3 + 5),*(int *)(puVar3 + 8) != 0,
                   *(undefined4 *)(puVar6 + -0xc),*(undefined4 *)puVar6,
                   *(undefined4 *)(puVar6 + 0xc),(char)puVar3[2],*(int *)(puVar3 + 8),
                   *(undefined4 *)(puVar3 + 4),*(undefined4 *)(puVar3 + 6),0,0,(char)puVar3[3],iVar4
                  );
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 1;
      pbVar5 = pbVar5 + 2;
      puVar6 = puVar6 + 2;
    } while (iVar4 < (int)(uint)*param_1);
  }
  return 1;
}

