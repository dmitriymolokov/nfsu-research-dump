/* spd-match: far pct=63.64 flags=/O1 /c /nologo /TC method=m39 source=m39/3.9.26.4/va_00441270 */
/* R2-A: Ghidra in_EAX → __fastcall. EAX vs ECX lea/store wall — inventory ceiling. */
typedef unsigned int undefined4;

void __fastcall FUN_00441270(undefined4 *obj)
{
  undefined4 *puVar1;

  puVar1 = obj + 0x14;
  *puVar1 = (undefined4)puVar1;
  obj[0x15] = (undefined4)puVar1;
  *obj = 0;
  obj[1] = 0;
  obj[2] = 0;
  obj[3] = 0;
  obj[4] = 0;
  obj[5] = 0;
  obj[6] = 0;
  obj[7] = 0;
  obj[8] = 0;
  obj[0xc] = 0;
  obj[0xd] = 0;
  obj[0xe] = 0;
  obj[0x10] = 0;
  obj[0x11] = 0;
  obj[0x12] = 0;
}
