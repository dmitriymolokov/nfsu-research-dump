/* Decompiled from Speed.exe @ 006688b0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006688b0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint unaff_retaddr;
  uint local_a0;
  undefined4 local_9c;
  uint local_98;
  int local_94;
  int iStack_90;
  undefined1 local_84 [128];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  DVar3 = GetTickCount();
  FUN_00668790();
  uVar7 = 0;
  local_98 = (DVar3 - *(int *)(param_1 + 0x10)) / 100;
  local_a0 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    puVar8 = (ushort *)(param_1 + 0x1c);
    do {
      if ((char)puVar8[1] == *(char *)(param_1 + 8)) {
        if ((byte)(*(char *)(param_1 + 8) - *(char *)((int)puVar8 + 3)) < 0x3c) {
          *puVar8 = *puVar8 & 0xfff | 0x8000;
          cVar2 = *(char *)(param_1 + 8) + -1;
          *(char *)((int)puVar8 + 3) = cVar2;
          *(char *)(puVar8 + 1) = cVar2;
        }
        else {
          puVar1 = (undefined4 *)(*(int *)(param_1 + 4) * 0x10 + 8 + param_1);
          *(undefined4 *)(puVar8 + -2) = *puVar1;
          *(undefined4 *)puVar8 = puVar1[1];
          *(undefined4 *)(puVar8 + 2) = puVar1[2];
          *(undefined4 *)(puVar8 + 4) = puVar1[3];
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        }
      }
      if (((*puVar8 & 0x8000) != 0) && (local_a0 < local_98)) {
        local_84[0] = 0;
        FUN_00667690(local_84,0x80,&DAT_006ab854,uVar7);
        FUN_00667690(local_84,0x80,&DAT_006aac3c,*(undefined4 *)(puVar8 + -2));
        FUN_0066f2f0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(puVar8 + -2),local_84,0x80);
        *puVar8 = *puVar8 & 0xfff | 0x4000;
        cVar2 = *(char *)(param_1 + 8) + -1;
        *(char *)((int)puVar8 + 3) = cVar2;
        *(char *)(puVar8 + 1) = cVar2;
        local_a0 = local_a0 + 1;
        *(DWORD *)(param_1 + 0x10) = DVar3;
      }
      if (((*puVar8 & 0x4000) != 0) && ((char)(*(char *)(param_1 + 8) - (char)puVar8[1]) == '\x05'))
      {
        *puVar8 = 0x2000;
        if (*(code **)(puVar8 + 2) != (code *)0x0) {
          (**(code **)(puVar8 + 2))(*(undefined4 *)(puVar8 + -2),0x2000,*(undefined4 *)(puVar8 + 4))
          ;
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 8;
    } while (uVar7 < *(uint *)(param_1 + 4));
  }
  local_9c = 0x80;
  iVar4 = FUN_0066f4d0(*(undefined4 *)(param_1 + 0x14),local_84,&local_9c,&local_94);
  do {
    if (iVar4 == 0) {
      return;
    }
    uVar5 = FUN_00667530(local_84,&DAT_006ab854,0);
    iVar4 = FUN_00667ec0(uVar5);
    if (((iVar4 < 0) || (*(int *)(param_1 + 4) <= iVar4)) ||
       (iVar6 = iVar4 * 0x10 + 0x18 + param_1, *(int *)(iVar4 * 0x10 + 0x18 + param_1) != iStack_90)
       ) {
      iVar4 = FUN_00668720();
      if (iVar4 != -1) {
        iVar6 = iVar4 * 0x10 + param_1 + 0x18;
        goto LAB_00668abd;
      }
    }
    else {
LAB_00668abd:
      if (iVar6 != 0) {
        if (0xfff < local_94) {
          local_94 = 0xfff;
        }
        *(short *)(iVar6 + 4) = (short)local_94;
        if (*(code **)(iVar6 + 8) != (code *)0x0) {
          (**(code **)(iVar6 + 8))(iStack_90,local_94,*(undefined4 *)(iVar6 + 0xc));
        }
      }
    }
    iVar4 = FUN_0066f4d0(*(undefined4 *)(param_1 + 0x14),local_84,&local_9c,&local_94);
  } while( true );
}

