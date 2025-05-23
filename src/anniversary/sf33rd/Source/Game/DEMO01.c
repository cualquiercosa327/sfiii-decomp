#include "common.h"
#include "sf33rd/Source/Game/DC_Ghost.h"
#include "sf33rd/Source/Game/GD3rd.h"
#include "sf33rd/Source/Game/OPENING.h"
#include "sf33rd/Source/Game/SE.h"
#include "sf33rd/Source/Game/SYS_sub.h"
#include "sf33rd/Source/Game/Sound3rd.h"
#include "sf33rd/Source/Game/main.h"
#include "sf33rd/Source/Game/op_sub.h"
#include "sf33rd/Source/Game/workuser.h"

s16 Title() {
    s16 xx = 0;

    njSetBackColor(0, 0, 0);

    switch (D_No[1]) {
    case 0:
        if (Check_LDREQ_Clear() != 0) {
            Standby_BGM(0x34);
            D_No[1] += 1;
            D_Timer = 20;
        }

        break;

    case 1:
        if (D_Timer != 0) {
            D_Timer -= 1;
        } else if (opening_demo()) {
            D_No[1] += 1;
            D_Timer = 40;
        }

        break;

    case 2:
        opening_demo();

        if (--D_Timer == 0) {
            D_No[1] += 1;
            Switch_Screen_Init(1);
        }

        break;

    case 3:
        opening_demo();

        if (Switch_Screen(1) != 0) {
            D_No[1] += 1;
            Cover_Timer = 20;
        }

        break;

    case 4:
        Switch_Screen(1);
        D_No[1] += 1;
        D_Timer = 2;
        break;

    default:
        Switch_Screen(1);

        if (--D_Timer == 0) {
            TexRelease(0x259);
            xx = 1;
        }

        break;
    }

    return xx;
}

s16 Title_At_a_Dash() {
    s16 xx = 0;

    BGM_Stop();
    Disp_Copyright();

    switch (D_No[1]) {
    case 0:
        mpp_w.ctrDemo = 0;
        D_No[1] += 1;
        D_Timer = 30;

        if (!title_tex_flag) {
            TITLE_Init();
        }

        break;

    case 1:
        if (--D_Timer == 0) {
            D_No[1] += 1;
        }

        TITLE_Move(1);
        break;

    default:
        xx = 1;
        TITLE_Move(1);
        break;
    }

    return xx;
}
