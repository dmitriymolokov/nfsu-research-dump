/* Decompiled from Speed.exe @ 00648d20 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_00648d20(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_006497c0();
  FUN_00649a00();
  param_1[4] = 0;
  *param_1 = 1;
  uVar1 = FUN_005a44e0("MAD_FRAME::m_Shape",((uint)(param_2 * 3 * param_3) >> 1) + 0x10,0,0x10,
                       DAT_00712028);
  param_1[1] = uVar1;
  FUN_00641a10(param_1[1],0,0x10);
  *(uint *)param_1[1] = *(uint *)param_1[1] & 0xffffff00 | 0x6c;
  *(undefined2 *)(param_1[1] + 4) = (undefined2)param_2;
  *(undefined2 *)(param_1[1] + 6) = (undefined2)param_3;
  return param_1;
}

