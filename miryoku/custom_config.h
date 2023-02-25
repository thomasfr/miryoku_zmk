// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define U_TAPPING_TERM 200
#define U_QUICK_TAP_HOMEROW 110
#define U_QUICK_TAP 130
#define U_QUICK_TAP_LAYER_SWITCH 200

#define MIRYOKU_ALPHAS_QWERTY

#define LOPT         LALT

#define SH_APPS      C_AC_DESKTOP_SHOW_ALL_APPLICATIONS
#define SH_WINS      C_AC_DESKTOP_SHOW_ALL_WINDOWS
#define LHYPER       LS(LC(LA(LCMD)))

#define EURO         LS(LA(N2))

#define HYPER_1      LS(LC(LA(LG(N1))))
#define HYPER_2      LS(LC(LA(LG(N2))))
#define HYPER_3      LS(LC(LA(LG(N3))))
#define HYPER_4      LS(LC(LA(LG(N4))))
#define HYPER_5      LS(LC(LA(LG(N5))))
#define HYPER_UP     LS(LC(LA(LG(UP))))
#define HYPER_DN     LS(LC(LA(LG(DOWN))))
#define HYPER_LT     LS(LC(LA(LG(LEFT))))
#define HYPER_RT     LS(LC(LA(LG(RIGHT))))
#define SCR_AREA     LG(LS(N4))
#define SCR_CLP_AREA LG(LS(LC(N4)))
#define SCR_WIN      LG(LS(N5))


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(PLAIN,  "Plain") \
MIRYOKU_X(SWITCH, "Switch") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \


#define U_RDO LS(LG(Z))
#define U_PST LG(V)
#define U_CPY LG(C)
#define U_CUT LG(X)
#define U_UND LG(Z)


#define U_BASE      0
#define U_PLAIN     1
#define U_SWITCH    2
#define U_NAV       3
#define U_MOUSE     4
#define U_MEDIA     5
#define U_NUM       6
#define U_SYM       7
#define U_FUN       8




#define MIRYOKU_LAYER_BASE \
&tdto_q_switch,       &kp W,                &kp E,                &kp R,                &kp T,                /***/   &kp Y,                &kp U,                &kp I,                &kp O,                &kp P,                 \
U_LMT(LSHFT, A),      U_LMT(LCTRL, S),      U_LMT(LOPT, D),       U_LMT(LCMD, F),       U_LMT(LHYPER, G),     /***/   U_RMT(LHYPER, H),     U_RMT(LCMD, J),       U_RMT(LOPT, K),       U_RMT(LCTRL, L),      U_RMT(RSHFT, SEMI),    \
&kp Z,                &kp X,                &kp C,                U_SLT(U_PLAIN, V),     &kp B,                /***/  &kp N,                U_SLT(U_PLAIN, M),     &kp COMMA,            &kp DOT,              &kp FSLH,              \
U_NP,                 U_NP,                 U_LT(U_MEDIA, ESC),   U_LT(U_NAV, SPC),     U_LT(U_MOUSE, TAB),   /***/   U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC),    U_LT(U_FUN, DEL),     U_NP,                 U_NP




#define MIRYOKU_LAYER_PLAIN \
&kp Q,                &kp W,                &kp E,                &kp R,                &kp T,                /***/   &kp Y,                &kp U,                &kp I,                &kp O,                &kp P,                 \
&kp A,                &kp S,                &kp D,                &kp F,                &kp G,                /***/   &kp H,                &kp J,                &kp K,                &kp L,                &kp SEMI,              \
U_LMT(LSHFT, Z),      &kp X,                &kp C,                &kp V,                &kp B,                /***/   &kp N,                &kp M,                &kp SEMI,             &kp DOT,              U_RMT(RSHFT, FSLH),    \
U_NP,                 U_NP,                 U_LT(U_MEDIA, ESC),   U_LT(U_NAV, SPC),     U_LT(U_MOUSE, TAB),   /***/   U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC),    U_LT(U_FUN, DEL),     U_NP,                 U_NP


#define MIRYOKU_LAYER_SWITCH \
&tdto_base,           U_NU,                 &kp U_RDO,            &kp U_UND,            &kp PG_UP,            /***/   &kp Y,                &kp U,                &kp I,                &kp O,                &kp P,                 \
&kp LSHFT,            U_LMT(LCTRL, U_CUT),  U_LMT(LOPT, U_CPY),   U_LMT(LCMD, U_PST),   U_LMT(LHYPER, SPC),   /***/   U_RMT(LHYPER, H),     U_RMT(LCMD, J),       U_RMT(LOPT, K),       U_RMT(LCTRL, L),      U_RMT(RSHFT, SEMI),    \
U_NU,                 &kp DEL,              &kp RET,              &kp BSPC,             &kp PG_DN,            /***/   &kp N,                &kp M,                &kp COMMA,            &kp DOT,              &kp FSLH,              \
U_NP,                 U_NP,                 U_LT(U_MEDIA, ESC),   U_LT(U_NAV, SPC),     U_LT(U_MOUSE, TAB),   /***/   U_LT(U_MOUSE, RET),   U_LT(U_NAV, BSPC),    U_LT(U_FUN, DEL),     U_NP,                 U_NP




#define MIRYOKU_LAYER_MEDIA \
U_NU,                 U_NU,                 U_NU,                 U_NU,                 U_NU,                 /***/   U_NU,                 &kp C_BRI_UP,         &kp C_VOL_UP,         U_NU,                 U_NU,                  \
&kp LSHFT,            &kp LCTRL,            &kp LALT,             &kp LCMD,             &kp LHYPER,           /***/   &kp K_MUTE,           &kp C_PREV,           &kp C_VOL_DN,         &kp C_NEXT,           U_NU,                  \
U_NU,                 U_NU,                 U_NU,                 U_NU,                 U_NU,                 /***/   U_NU,                 &kp C_BRI_DN,         &kp C_PP,             U_NU,                 U_NU,                  \
U_NP,                 U_NP,                 U_NA,                 U_NA,                 U_NA,                 /***/   &kp HYPER_3,          &kp HYPER_4,          &kp HYPER_5,          U_NP,                 U_NP

#define MIRYOKU_LAYER_NAV \
U_NU,                 U_NU,                 &kp U_RDO,            &kp U_UND,            &kp PG_UP,            /***/   &kp PG_UP,            &kp HOME,             &kp UP,               &kp END,              U_NU,                  \
&kp LSHFT,            U_LMT(LCTRL, U_CUT),  U_LMT(LOPT, U_CPY),   U_LMT(LCMD, U_PST),   U_LMT(LHYPER, SPC),   /***/   U_NU,                 &kp LEFT,             &kp DOWN,             &kp RIGHT,            U_NU,                  \
U_NU,                 &kp DEL,              &kp RET,              &kp BSPC,             &kp PG_DN,            /***/   &kp PG_DN,            U_NU,                 U_NU,                 U_NU,                 U_NU,                  \
U_NP,                 U_NP,                 U_NA,                 U_NA,                 U_NA,                 /***/   &kp RET,              &kp BSPC,             &kp DEL,              U_NP,                 U_NP

#define MIRYOKU_LAYER_MOUSE \
U_NU,                 U_NU,                 &kp U_RDO,            &kp U_UND,            &kp PG_UP,            /***/   U_WH_D,               U_WH_R,               U_MS_U,               U_WH_L,               U_NU,                  \
&kp LSHFT,            U_LMT(LCTRL, U_CUT),  U_LMT(LOPT, U_CPY),   U_LMT(LCMD, U_PST),   U_LMT(LHYPER, SPC),   /***/   U_NU,                 U_MS_L,               U_MS_D,               U_MS_R,               U_NU,                  \
U_NA,                 &kp DEL,              &kp RET,              &kp BSPC,             &kp PG_DN,            /***/   U_WH_U,               U_NU,                 U_NU,                 U_NU,                 U_NU,                  \
U_NP,                 U_NP,                 U_NA,                 U_NA,                 U_NA,                 /***/   U_BTN1,               U_BTN2,               U_BTN3,               U_NP,                 U_NP





#define MIRYOKU_LAYER_SYM \
&kp CARET,            &kp PIPE,             &kp LEFT_BRACKET,     &kp RIGHT_BRACKET,    &kp STAR,             /***/   &kp UNDER,            &kp LT,               &kp GT,               &kp TILDE,            &mkd_code,            \
U_LMT(LSHFT, AT),     U_LMT(LCTRL, EQUAL),  U_LMT(LOPT, LBRC),    U_LMT(LCMD, RBRC),    U_LMT(LHYPER, MINUS),  /***/  U_RMT(LHYPER, HASH),  U_RMT(LCMD, LPAR),    U_RMT(LOPT, RPAR),    U_RMT(LCTRL, BSLH),   U_RMT(RSHIFT, FSLH),  \
&kp PERCENT,          &kp AMPERSAND,        &kp SQT,              &kp DQT,              &kp PLUS,             /***/   &kp DOLLAR,           &kp COLON,            &kp SEMI,             &kp GRAVE,            &dbl_arrow,           \
U_NP,                 U_NP,                 &kp EXCLAMATION,      &kp DOT,              &kp QMARK,            /***/   U_NA,                 U_NA,                 U_NA,                 U_NP,                 U_NP

#define MIRYOKU_LAYER_NUM \
&kp CARET,            &kp N7,               &kp N8,               &kp N9,               &kp STAR,             /***/   U_NA,                 U_NA,                 U_NA,                 U_NA,                 U_NA,                  \
&kp EURO,             &kp N4,               &kp N5,               &tdto_q_switch,       &kp MINUS,            /***/   &kp LHYPER,           &kp LCMD,             &kp LOPT,             &kp LCTRL,            &kp RSHFT,             \
&kp PERCENT,          &kp N1,               &kp N2,               &kp N3,               &kp PLUS,             /***/   U_NA,                 U_NA,                 U_NA,                 U_NA,                 U_NA,                  \
U_NP,                 U_NP,                 &kp N0,               &kp DOT,              &kp BACKSLASH,        /***/   U_NA,                 U_NA,                 U_NA,                 U_NP,                 U_NP

#define MIRYOKU_LAYER_FUN \
&kp LC(LG(Q)),        U_NA,                 &kp HYPER_UP,         &kp SH_APPS,          &kp SCR_AREA,         /***/   U_NA,                 U_NA,                 U_NA,                 U_NA,                 U_NA,                  \
U_NP,                 &kp HYPER_LT,         &kp HYPER_DN,         &kp HYPER_RT,         &kp SCR_CLP_AREA,     /***/   &kp LHYPER,           &kp LCMD,             &kp LOPT,             &kp LCTRL,            &kp RSHFT,             \
U_NP,                 &bt BT_CLR,           &bt BT_PRV,           &bt BT_NXT,           &kp SCR_WIN,          /***/   U_NA,                 U_NA,                 U_NA,                 U_NA,                 U_NA,                  \
U_NP,                 U_NP,                 &kp HYPER_1,          &kp LG(SPC),          &kp HYPER_2,          /***/   U_NA,                 U_NA,                 U_NA,                 U_NP,                 U_NP



#define MIRYOKU_LAYERMAPPING_SWITCH MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_PLAIN MIRYOKU_MAPPING
