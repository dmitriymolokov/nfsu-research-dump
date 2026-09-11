/* Decompiled from Speed.exe @ 00570950 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570950(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_210 [256];
  undefined1 local_110 [268];
  
  puVar3 = DAT_0073d6d8;
  iVar4 = DAT_007364a0;
  puVar6 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar3 == puVar6) {
      return;
    }
    iVar1 = puVar3[2];
    if (((iVar1 != 0) && (puVar3[0x265] != 0)) &&
       ((puVar3[0x1cc] == *(int *)(param_1 + 4) ||
        ((puVar3[0x267] != 0 && (*(int *)(param_1 + 4) == 4)))))) {
      iVar2 = puVar3[0x267];
      if (iVar2 == 0) {
LAB_005709de:
        iVar7 = param_2;
      }
      else {
        if (2 < iVar4) goto LAB_00570b78;
        iVar7 = param_3;
        if (iVar2 == 0) goto LAB_005709de;
      }
      if (iVar7 != 0) {
        uVar8 = 0;
        if (iVar2 != 0) {
          uVar8 = 0x41;
        }
        if (param_4 == 0) {
          uVar8 = uVar8 | 0x20;
        }
        if (param_5 == 0) {
          uVar8 = uVar8 | 0x40;
        }
        if (DAT_0073464c != 0) {
          uVar8 = uVar8 | 0x20;
        }
        if (DAT_00734648 != 0) {
          uVar8 = uVar8 | 0x40;
        }
        if (puVar3[0x264] == 0) {
          local_21c = puVar3[0x1d1];
          local_220 = puVar3[0x1d0];
          local_218 = puVar3[0x1d2];
          FUN_004010a0(local_110,0x40,4,FUN_004ad8d0);
          FUN_00401cd0();
          FUN_00401cd0();
          FUN_00401cd0();
          FUN_00401cd0();
          FUN_004010a0(local_210,0x40,4,FUN_004ad8d0);
          FUN_00401cd0();
          FUN_00401cd0();
          FUN_00401cd0();
          FUN_00401cd0();
          _DAT_0073462c = puVar3[0x267];
          bVar5 = 0;
          if (_DAT_0073462c == 0) {
            bVar5 = -(puVar3[0x269] != 0) & 8U | -(puVar3[0x268] != 0) & 3U;
          }
          FUN_005708f0(iVar1,param_1,&local_220,puVar3 + 0x1d4,local_110,local_210,puVar3[0x266],
                       uVar8,bVar5,puVar3[0x26a]);
        }
        else {
          FUN_0040c910(param_1,puVar3[0x264],puVar3 + 0x1d4,0,0);
        }
      }
    }
LAB_00570b78:
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

