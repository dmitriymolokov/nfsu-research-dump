/* Decompiled from Speed.exe @ 005a2040 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


uint FUN_005a2040(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_734;
  undefined1 local_730 [1836];
  
  uVar3 = 0;
  iVar4 = 0;
  do {
    puVar1 = (uint *)(&DAT_00733ff8)[uVar3];
    if (((puVar1 != (uint *)0x0) ||
        (((*(int *)(param_1 + 0x88b0) != 0 &&
          (puVar1 = (uint *)(*(int *)(param_1 + 0x88b0) + 0x58a0), puVar1 != (uint *)0x0)) &&
         (uVar3 == *puVar1)))) && (puVar1[1] != 1)) {
      if (((uVar3 < 0x100) && ((&DAT_00733ff8)[uVar3] != 0)) ||
         ((*(int *)(param_1 + 0x88b0) != 0 &&
          ((puVar1 = (uint *)(*(int *)(param_1 + 0x88b0) + 0x58a0), puVar1 != (uint *)0x0 &&
           (uVar3 == *puVar1)))))) {
        puVar1 = (uint *)(uVar3 + 0x34c + param_1);
      }
      else {
        puVar1 = (uint *)0x0;
      }
      if ((char)*puVar1 == '\x01') goto LAB_005a214b;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x100);
  uVar3 = 0;
  do {
    puVar1 = (uint *)(&DAT_00733ff8)[uVar3];
    if (((puVar1 != (uint *)0x0) ||
        (((puVar1 = *(uint **)(param_1 + 0x88b0), puVar1 != (uint *)0x0 &&
          (puVar1 = puVar1 + 0x1628, puVar1 != (uint *)0x0)) && (uVar3 == *puVar1)))) &&
       (puVar1[1] == 1)) {
      if (((uVar3 < 0x100) && ((&DAT_00733ff8)[uVar3] != 0)) ||
         ((*(int *)(param_1 + 0x88b0) != 0 &&
          ((puVar1 = (uint *)(*(int *)(param_1 + 0x88b0) + 0x58a0), puVar1 != (uint *)0x0 &&
           (uVar3 == *puVar1)))))) {
        puVar1 = (uint *)(uVar3 + 0x34c + param_1);
      }
      else {
        puVar1 = (uint *)0x0;
      }
      if ((char)*puVar1 == '\x01') {
        FUN_00417600();
        puVar1 = (uint *)FUN_004ac5a0(param_1,0,local_730);
        local_734 = 0;
        do {
          if ((iVar4 != 9) && (iVar4 != 10)) {
            uVar3 = FUN_005a0350();
            iVar5 = 0;
            do {
              puVar1 = (uint *)FUN_005a1550(param_1,uVar3);
              if (((char)puVar1 != '\0') &&
                 (puVar1 = (uint *)CONCAT31((int3)((uint)puVar1 >> 8),DAT_00735ec1),
                 DAT_00735ec1 == '\0')) {
                if ((-1 < (int)uVar3) && ((int)uVar3 < 0x19)) {
                  puVar1 = (uint *)0x0;
                  do {
                    if (*(int *)(uVar3 * 0x90 + 0x450 + param_1 + (int)puVar1 * 4) == iVar5)
                    goto LAB_005a21fe;
                    puVar1 = (uint *)((int)puVar1 + 1);
                  } while ((int)puVar1 < 0x24);
                }
                if (uVar3 < 0x20) {
                  iVar2 = (&DAT_00733f78)[uVar3];
                }
                else {
                  iVar2 = 0;
                }
                switch(iVar5) {
                default:
                  puVar1 = (uint *)0x0;
                  break;
                case 1:
                  puVar1 = *(uint **)(iVar2 + 4);
                  break;
                case 2:
                  puVar1 = *(uint **)(iVar2 + 8);
                  break;
                case 3:
                  puVar1 = *(uint **)(iVar2 + 0xc);
                }
                local_734 = local_734 + (int)puVar1;
              }
LAB_005a21fe:
              iVar5 = iVar5 + 1;
            } while (iVar5 < 4);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xb);
        if (local_734 != 0) {
          if (((DAT_0073494c == 0) && (DAT_00735ec1 == '\0')) && (DAT_0073440c == '\0')) {
            puVar1 = *(uint **)(param_1 + 0x1374);
          }
          else {
            puVar1 = (uint *)0x3b9aca00;
          }
          if ((int)puVar1 < local_734) {
            return CONCAT31((int3)((uint)puVar1 >> 8),1);
          }
        }
LAB_005a214b:
        return (uint)puVar1 & 0xffffff00;
      }
    }
    uVar3 = uVar3 + 1;
    if (0xff < uVar3) goto LAB_005a214b;
  } while( true );
}

