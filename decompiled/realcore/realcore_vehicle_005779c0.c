/* Decompiled from Speed.exe @ 005779c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
/* M2 Pass B: hoist param_1[6] before vtable store; abs vtable */


void __fastcall FUN_005779c0(unsigned int *param_1)

{
  unsigned int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;

  iVar1 = param_1[6];
  *param_1 = (unsigned int)0x006ba6b8;
  if (*(char *)(iVar1 + 0x18) != '\0') {
    puVar2 = (unsigned int *)param_1[1];
    puVar3 = (unsigned int *)param_1[2];
    *puVar3 = (unsigned int)puVar2;
    puVar2[1] = (unsigned int)puVar3;
  }
  return;
}
