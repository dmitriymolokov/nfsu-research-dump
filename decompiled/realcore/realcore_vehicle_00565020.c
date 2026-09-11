/* spd-match: far pct=58.18 flags=/O1 /c /nologo /TC method=m39 source=m39/3.9.26.4/va_00565020 */
/* R2-A: Ghidra in_EAX → __fastcall identity matrix. EAX vs ECX store wall — inventory ceiling. */
typedef unsigned int undefined4;

void __fastcall FUN_00565020(undefined4 *matrix)
{
  *matrix = 0x3f800000;
  matrix[1] = 0;
  matrix[2] = 0;
  matrix[3] = 0;
  matrix[4] = 0;
  matrix[5] = 0x3f800000;
  matrix[6] = 0;
  matrix[7] = 0;
  matrix[8] = 0;
  matrix[9] = 0;
  matrix[10] = 0x3f800000;
  matrix[0xb] = 0;
  matrix[0xc] = 0;
  matrix[0xd] = 0;
  matrix[0xe] = 0;
  matrix[0xf] = 0x3f800000;
}
