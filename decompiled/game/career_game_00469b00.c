/* Decompiled from Speed.exe @ 00469b00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_00469b00(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  char local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00468340(param_1,0);
  *param_1 = &PTR_FUN_006c85b8;
  param_1[0x19] = param_2 + 0x540;
  DAT_00736010 = DAT_00736010 + 1;
  if (DAT_00736038 < DAT_00736010) {
    DAT_00736038 = DAT_00736010;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  param_1[0x18] = 0;
  param_1[0x4c] = 0;
  *param_1 = &PTR_FUN_006c8798;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  DAT_00736018 = DAT_00736018 + 1;
  local_4 = 0;
  if (DAT_00736040 < DAT_00736018) {
    DAT_00736040 = DAT_00736018;
  }
  param_1[0x50] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  param_1[0x51] = DAT_0073ad34;
  param_1[0x52] = DAT_0073ad34;
  param_1[0x53] = DAT_0073ad34;
  FUN_00565da0("Car%d",(int)*(short *)(param_2 + 10));
  pcVar2 = (char *)(param_1 + 0xd);
  iVar7 = 0x28;
  iVar3 = -(int)pcVar2;
  do {
    cVar1 = pcVar2[(int)(local_14 + iVar3)];
    iVar7 = iVar7 + -1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
  } while (iVar7 != 0);
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  iVar3 = FUN_0057f020();
  puVar8 = DAT_00779bd8;
  puVar4 = (undefined4 *)FUN_0040a880();
  for (; puVar8 != puVar4; puVar8 = (undefined4 *)*puVar8) {
    if (puVar8[6] == iVar3) {
      param_1[4] = puVar8;
      goto LAB_00469cac;
    }
  }
  iVar3 = FUN_0057f0d0();
  puVar8 = DAT_00779bd8;
  do {
    if (puVar8 == puVar4) {
      pvVar5 = _malloc(0x40);
      if (pvVar5 == (void *)0x0) {
        param_1[4] = 0;
        *(undefined1 *)(param_1 + 5) = 1;
      }
      else {
        uVar6 = FUN_00473ca0(0xc00de354,0xbf789375,0xbe4ccccd,0x400a8f5c,0x3f789375,0x3f1fbe77);
        param_1[4] = uVar6;
        *(undefined1 *)(param_1 + 5) = 1;
      }
LAB_00469d19:
      FUN_00468a50();
      FUN_00468ec0();
      ExceptionList = local_c;
      return param_1;
    }
    if (puVar8[6] == iVar3) {
      param_1[4] = puVar8;
LAB_00469cac:
      if (*(char *)((int)puVar8 + 0x3e) != '\0') {
        if (*(int *)(*(int *)(param_2 + 0x14) + 4) != 3) {
          pvVar5 = _malloc(0x60);
          if (pvVar5 == (void *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_00472cb0();
          }
          param_1[4] = uVar6;
          *(undefined1 *)(param_1 + 5) = 1;
          FUN_00472cf0(uVar6,puVar8);
          FUN_00472ea0();
          puVar8 = (undefined4 *)param_1[4];
        }
        if (*(char *)((int)puVar8 + 0x3e) != '\0') goto LAB_00469d19;
      }
      FUN_00472e40();
      goto LAB_00469d19;
    }
    puVar8 = (undefined4 *)*puVar8;
  } while( true );
}

