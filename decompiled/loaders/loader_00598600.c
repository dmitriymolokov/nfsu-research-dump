/* Decompiled from Speed.exe @ 00598600 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005987e4) */
/* WARNING: Removing unreachable block (ram,0x0059884c) */
/* WARNING: Removing unreachable block (ram,0x0059886e) */
/* WARNING: Removing unreachable block (ram,0x00598797) */

void __thiscall FUN_00598600(float *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  int local_28;
  int local_24;
  float local_20 [5];
  int local_c;
  float local_8;
  
  FUN_00549130("TrafficTeleporter::DoTimestep()");
  if (DAT_00734458 != 0) {
    if (*(char *)(param_1 + 2) == '\0') {
      FUN_0059b790();
    }
    else {
      FUN_0059b710();
    }
    DAT_00734458 = 0;
    FUN_0040a880();
  }
  FUN_006497d0();
  FUN_006497d0();
  FUN_0059b6d0();
  if (((((DAT_0078a300 != 0) && (iVar2 = FUN_0041f680(), iVar2 != 0)) &&
       (iVar2 = FUN_00424ea0(), iVar2 != 0)) &&
      ((iVar2 = FUN_00408200(), iVar2 != 0 && (*(char *)(param_1 + 2) != '\0')))) &&
     (*param_1 = *param_1 - param_2, *param_1 <= DAT_006cc7a4)) {
    FUN_0059ae60();
    local_8 = param_1[1];
    local_20[3] = 0.0;
    local_24 = 0;
    cVar1 = FUN_00421a50();
    local_c = (-(uint)(cVar1 != '\0') & 0x15) + 1;
    local_20[0] = 999999.0;
    local_20[1] = 999999.0;
    local_20[2] = 0.0;
    for (local_28 = 0; iVar2 = FUN_00408200(), local_28 < iVar2; local_28 = local_28 + 1) {
      FUN_00408210();
      uVar3 = FUN_00417490();
      fVar4 = (float10)FUN_0059b3e0(uVar3);
      iVar2 = FUN_0041e4c0();
      local_20[iVar2] = (float)fVar4;
    }
    do {
      local_8 = (float)((int)local_8 + 1);
      iVar2 = FUN_0041f680();
      if (iVar2 <= (int)local_8) {
        local_8 = 0.0;
      }
      local_20[3] = (float)FUN_0041f690();
      cVar1 = FUN_005988c0(local_20[3]);
      if (cVar1 != '\0') {
        cVar1 = FUN_00599830(local_20[3],local_20);
        if (cVar1 == '\0') {
          iVar2 = FUN_0041f5d0();
          FUN_005832a0();
          *(undefined1 *)(iVar2 + 0x4d1) = 1;
        }
        local_24 = local_24 + 1;
      }
    } while ((local_24 < local_c) && (local_8 != param_1[1]));
    param_1[1] = local_8;
  }
  return;
}

