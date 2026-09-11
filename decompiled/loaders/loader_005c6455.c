/* Decompiled from Speed.exe @ 005c6455 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005c6455(byte *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int extraout_ECX;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = FUN_005c63c3(param_1);
  puVar4 = *(undefined4 **)(extraout_ECX + 0x4c + iVar2 * 4);
  do {
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    pbVar3 = (byte *)*puVar4;
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar5;
      bVar6 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_005c648e:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005c6493;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar6 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_005c648e;
      pbVar5 = pbVar5 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_005c6493:
    if (iVar2 < 0) {
      return 0;
    }
    if (iVar2 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = puVar4[1];
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = puVar4[2];
      }
      return 1;
    }
    puVar4 = (undefined4 *)puVar4[3];
  } while( true );
}

