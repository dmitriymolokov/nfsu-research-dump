/* Decompiled from Speed.exe @ 006387c0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
/* M2 Pass B: load global via *(T**)0x006e7540 — not extern PTR_PTR_ */


undefined4 FUN_006387c0(undefined4 param_1)

{
  unsigned char *ptr = *(unsigned char **)0x006e7540;
  if (*(code **)(ptr + 0xc) != (code *)0x0) {
    (*(code **)(ptr + 0xc))(param_1);
  }
  return param_1;
}
