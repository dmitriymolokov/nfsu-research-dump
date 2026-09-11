/* Decompiled from Speed.exe @ 006385a0 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006385a0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438 [119];
  char acStack_25c [520];
  int iStack_54;
  uint uStack_50;
  
  puVar4 = &DAT_0070d7a8;
  for (iVar3 = 0x6e4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_448 = 0;
  local_444 = 0;
  local_440 = 0;
  local_44c = 0;
  local_43c = 0;
  puVar4 = local_438;
  for (iVar3 = 0x10b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_0070d7a8 = 0;
  _DAT_0070d9b8 = (undefined4 *)0x0;
  if (param_1 == (int *)0x0) {
    if (param_2 != 0) {
      FUN_0067101f(param_2,"pDevice is NULL\n");
    }
    return 0;
  }
  puVar4 = &local_44c;
  piVar6 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x18))();
  if (iVar3 == 0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    iVar3 = (**(code **)(*param_1 + 0x24))(param_1,&stack0xfffffbac);
    if (iVar3 == 0) {
      puVar5 = &local_44c;
      _DAT_0070d9b8 = puVar4;
      iVar3 = (**(code **)(*piVar6 + 0x14))(piVar6,puVar4,2,puVar5);
      if (iVar3 == 0) {
        _DAT_0070d9b4 = uStack_50;
        _DAT_0070d9b0 = iStack_54;
        _DAT_0070d9ac = uStack_50 & 0xffff | iStack_54 << 0x10;
        iVar3 = 0;
        do {
          cVar1 = acStack_25c[iVar3];
          (&DAT_0070d7ac)[iVar3] = cVar1;
          iVar3 = iVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00638120(puVar5,&DAT_0070d7a8);
        (**(code **)(*param_1 + 0x20))(param_1,&DAT_0070d9bc);
        FUN_00638200(puVar4,&DAT_0070d7a8);
        iVar3 = (**(code **)(*param_1 + 0x1c))(param_1,&DAT_0070d9cc);
        if (iVar3 == 0) {
          uVar2 = FUN_00638260();
          DAT_0070d7a8 = 1;
          return uVar2;
        }
        if (param_2 != 0) {
          FUN_0067101f(param_2,"IDirect3DDevice8_GetDeviceCaps failed: err = 0x%x\n",iVar3);
        }
      }
      else if (param_2 != 0) {
        FUN_0067101f(param_2,"IDirect3D8_GetAdapterIdentifier failed: err = 0x%x\n",iVar3);
        return 0;
      }
    }
    else if (param_2 != 0) {
      FUN_0067101f(param_2,"IDirect3DDevice8_GetCreationParameters failed: err = 0x%x\n",iVar3);
      return 0;
    }
  }
  else if (param_2 != 0) {
    FUN_0067101f(param_2,"IDirect3DDevice8_GetDirect3D failed: err = 0x%x\n",iVar3);
    return 0;
  }
  return 0;
}

