/* spd-match: far pct=40.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int _DAT_006aaaec;
extern int _DAT_006aaaf0;
extern int _DAT_006aaaf4;
extern int _DAT_006aaaf8;
extern int _DAT_006aaafc;
extern int _DAT_006aab00;
extern int _DAT_006aab04;
extern int _DAT_006aab08;
extern int _DAT_006aab0c;
extern int _DAT_006aab10;
extern int _DAT_006aab14;
extern int _DAT_006aab18;
extern int _DAT_006aab1c;
extern int _DAT_006aab20;
extern int _DAT_006aab24;
extern int _DAT_006aab28;

void FUN_00656070(float *param_1,float *param_2)

{
  *param_2 = *param_1 * ((int)_DAT_006aab28) + *param_2;
  param_2[1] = *param_1 * ((int)_DAT_006aab24) + param_2[1];
  param_2[2] = *param_1 * ((int)_DAT_006aab20) + param_2[2];
  param_2[3] = *param_1 * ((int)_DAT_006aab1c) + param_2[3];
  param_2[4] = *param_1 * ((int)_DAT_006aab18) + param_2[4];
  param_2[5] = *param_1 * ((int)_DAT_006aab14) + param_2[5];
  param_2[6] = *param_1 * ((int)_DAT_006aab10) + param_2[6];
  param_2[7] = *param_1 * ((int)_DAT_006aab0c) + param_2[7];
  param_2[8] = *param_1 * ((int)_DAT_006aab08) + param_2[8];
  param_2[9] = *param_1 * ((int)_DAT_006aab04) + param_2[9];
  param_2[10] = *param_1 * ((int)_DAT_006aab00) + param_2[10];
  param_2[0xb] = *param_1 * ((int)_DAT_006aaafc) + param_2[0xb];
  param_2[0xc] = *param_1 * ((int)_DAT_006aaaf8) + param_2[0xc];
  param_2[0xd] = *param_1 * ((int)_DAT_006aaaf4) + param_2[0xd];
  param_2[0xe] = *param_1 * ((int)_DAT_006aaaf0) + param_2[0xe];
  param_2[0xf] = *param_1 * ((int)_DAT_006aaaec) + param_2[0xf];
  *param_1 = 0.0;
  return;
}
