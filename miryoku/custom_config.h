// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_ALPHAS_QWERTY
//#define MIRYOKU_TAP_QWERTY
//#define MIRYOKU_EXTRA_QWERTY
//#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_MAC
//#define MIRYOKU_LAYERS_FLIP
//#define MIRYOKU_MAPPING_EXTENDED_THUMBS

#define LOPT         LALT
#define ROPT         RALT
#define SH_APPS      C_AC_DESKTOP_SHOW_ALL_APPLICATIONS
#define SH_WINS      C_AC_DESKTOP_SHOW_ALL_WINDOWS
#define LHYPER       LS(LC(LA(LCMD)))
#define RHYPER       RS(RC(RA(RCMD)))
#define MEH          LS(LC(LALT))
#define EURO         LS(LA(N2))

#define HYPER_1      LS(LC(LA(LG(N1))))
#define HYPER_2      LS(LC(LA(LG(N2))))
#define HYPER_3      LS(LC(LA(LG(N3))))
#define HYPER_4      LS(LC(LA(LG(N4))))
#define HYPER_5      LS(LC(LA(LG(N5))))
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
&tdtog_q_switch,      &kp W,                &kp E,                &kp R,                &kp T,                /***/   &kp Y,                &kp U,                &kp I,                &kp O,                &kp P,                 \
U_MT(LSHFT, A),       U_MT(LCTRL, S),       U_MT(LOPT, D),        U_MT(LCMD, F),        U_MT(LHYPER, G),      /***/   U_MT(RHYPER, H),      U_MT(RCMD, J),        U_MT(ROPT, K),        U_MT(RCTRL, L),       U_MT(RSHFT, SQT),      \
&tdtog_z_plain,       &kp X,                &kp C,                &kp V,                &kp B,                /***/   &kp N,                &kp M,                U_COMMA_SEMI,         U_DOT_COLON,          U_FSLH_BSLH,           \
U_NP,                 U_NP,                 U_LT(U_MEDIA, ESC),   U_LT(U_NAV, SPC),     U_LT(U_MOUSE, TAB),   /***/   U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC),    U_LT(U_FUN, DEL),     U_NP,                 U_NP




#define MIRYOKU_LAYER_PLAIN \
&tdtog_q_switch,      &kp W,                &kp E,                &kp R,                &kp T,                /***/   &kp Y,                &kp U,                &kp I,                &kp O,                &kp P,                 \
&kp A,                &kp S,                &kp D,                &kp F,                &kp G,                /***/   &kp H,                &kp J,                &kp K,                &kp L,                &kp SQT,               \
&tdtog_z_plain,       &kp X,                &kp C,                &kp V,                &kp B,                /***/   &kp N,                &kp M,                &kp SEMI,             &kp DOT,              &kp FSLH,              \
U_NP,                 U_NP,                 U_LT(U_MEDIA, ESC),   U_LT(U_NAV, SPC),     U_LT(U_MOUSE, TAB),   /***/   U_LT(U_SYM, RET),     U_LT(U_NUM, BSPC),    U_LT(U_FUN, DEL),     U_NP,                 U_NP


#define MIRYOKU_LAYER_SWITCH \
&tdtog_switch,        U_NU,                 &kp U_RDO,            &kp U_UND,            &kp PG_UP,            /***/   &kp Y,                &kp U,                &kp I,                &kp O,                &kp P,                 \
U_MT(LSHFT, &none),   U_MT(LCTRL, U_CUT),   U_MT(LOPT, U_CPY),    U_MT(LCMD, U_PST),    U_MT(LHYPER, &none),  /***/   U_MT(RHYPER, H),      U_MT(RCMD, J),        U_MT(ROPT, K),        U_MT(RCTRL, L),       U_MT(RSHFT, SQT),      \
&tdtog_plain,         &kp DEL,              &kp BSPC,             &kp RET,              &kp PG_DN,            /***/   &kp N,                &kp M,                U_COMMA_SEMI,         U_DOT_COLON,          U_FSLH_BSLH,           \
U_NP,                 U_NP,                 U_LT(U_MEDIA, ESC),   U_LT(U_NAV, SPC),     U_LT(U_MOUSE, TAB),   /***/   U_LT(U_MOUSE, RET),   U_LT(U_NAV, BSPC),    U_LT(U_FUN, DEL),     U_NP,                 U_NP




#define MIRYOKU_LAYER_MEDIA \
U_NA,                 U_NA,                 U_NA,                 &u_to_U_BASE,         U_NA,                 /***/   U_NU,                 &kp C_BRI_UP,         &kp C_VOL_UP,         U_NU,                 U_NU,                  \
&kp LSHFT,            &kp LCTRL,            &kp LALT,             &kp LCMD,             &kp LHYPER,           /***/   &kp K_MUTE,           &kp C_PREV,           &kp C_PP,             &kp C_NEXT,           U_NU,                  \
U_NA,                 U_NA,                 &u_to_U_FUN,          &u_to_U_MEDIA,        U_NA,                 /***/   U_NU,                 &kp C_BRI_DN,         &kp C_VOL_DN,         U_NU,                 U_NU,                  \
U_NP,                 U_NP,                 U_NA,                 U_NA,                 U_NA,                 /***/   &kp HYPER_3,          &kp HYPER_4,          &kp HYPER_5,          U_NP,                 U_NP

#define MIRYOKU_LAYER_NAV \
U_NA,                 U_NU,                 &kp U_RDO,            &kp U_UND,            &kp PG_UP,            /***/   &kp PG_UP,            &kp HOME,             &kp UP,               &kp END,              U_NU,                  \
U_MT(LSHFT, &none),   U_MT(LCTRL, U_CUT),   U_MT(LOPT, U_CPY),    U_MT(LCMD, U_PST),    U_MT(LHYPER, &none),  /***/   &u_caps_word,         &kp LEFT,             &kp DOWN,             &kp RIGHT,            U_NU,                  \
U_NU,                 &kp DEL,              &kp BSPC,             &kp RET,              &kp PG_DN,            /***/   &kp PG_DN,            U_NU,                 U_NU,                 U_NU,                 U_NU,                  \
U_NP,                 U_NP,                 U_NA,                 U_NA,                 U_NA,                 /***/   &kp RET,              &kp BSPC,             &kp DEL,              U_NP,                 U_NP

#define MIRYOKU_LAYER_MOUSE \
U_NA,                 U_NA,                 &kp U_RDO,            &kp U_UND,            &kp PG_UP,            /***/   U_WH_D,               U_WH_R,               U_MS_U,               U_WH_L,               U_NU,                  \
U_MT(LSHFT, &none),   U_MT(LCTRL, U_CUT),   U_MT(LOPT, U_CPY),    U_MT(LCMD, U_PST),    U_MT(LHYPER, &none),  /***/   &u_caps_word,         U_MS_L,               U_MS_D,               U_MS_R,               U_NU,                  \
U_NA,                 &kp DEL,              &kp BSPC,             &kp RET,              &kp PG_DN,            /***/   U_WH_U,               U_NU,                 U_NU,                 U_NU,                 U_NU,                  \
U_NP,                 U_NP,                 U_NA,                 U_NA,                 U_NA,                 /***/   U_BTN1,               U_BTN2,               U_BTN3,               U_NP,                 U_NP





#define MIRYOKU_LAYER_SYM \
&kp CARET,            &kp MINUS,            &kp LEFT_BRACKET,     &kp RIGHT_BRACKET,    &kp PIPE,             /***/   &kp TILDE,            &kp FSLH,             &dbl_arrow,           &kp UNDER,            &dbl_arrow,            \
U_MT(LSHFT, AT),      U_MT(LSHFT, LBRC),    U_MT(LSHFT, RBRC),    U_MT(LSHFT, EQUAL),   U_MT(LSHFT, STAR),    /***/   U_MT(RHYPER, DOLLAR), U_MT(RCMD, SQT),      U_MT(ROPT, LPAR),     U_MT(RCTRL, RPAR),    U_MT(RSHIFT, DQT),     \
&kp PERCENT,          &kp PLUS,             &kp LESS_THAN,        &kp GREATER_THAN,     &kp AMPERSAND,        /***/   &kp GRAVE,            &kp HASH,             &kp SEMI,             &kp COLON,            &kp BSLH,              \
U_NP,                 U_NP,                 &kp DOT,              &kp EXCLAMATION,      &kp QMARK,            /***/   U_NA,                 U_NA,                 U_NA,                 U_NP,                 U_NP

#define MIRYOKU_LAYER_NUM \
&kp CARET,            &kp N7,               &kp N8,               &kp N9,               &kp BACKSLASH,        /***/   U_NA,                 &u_to_U_BASE,         U_NA,                 U_NA,                 U_NA,                  \
&kp EURO,             &kp N4,               &kp N5,               &kp N6,               &kp STAR,             /***/   &kp RHYPER,           &kp RCMD,             &kp ROPT,             &kp RCTRL,            &kp RSHFT,             \
&kp PERCENT,          &kp N1,               &kp N2,               &kp N3,               &kp PLUS,             /***/   U_NA,                 &u_to_U_NUM,          &u_to_U_NAV,          U_NA,                 U_NA,                  \
U_NP,                 U_NP,                 &kp DOT,              &kp N0,               &kp MINUS,            /***/   U_NA,                 U_NA,                 U_NA,                 U_NP,                 U_NP

#define MIRYOKU_LAYER_FUN \
U_NA,                 U_NA,                 &kp SH_APPS,          &kp SH_WINS,          &kp SCR_AREA,         /***/   U_NA,                 &u_to_U_BASE,         U_NA,                 U_NA,                 U_NA,                  \
U_NA,                 U_NA,                 &kp LC(LG(Q)),        &kp LG(Q),            &kp SCR_CLP_AREA,     /***/   &kp RHYPER,           &kp RCMD,             &kp ROPT,             &kp RCTRL,            &kp RSHFT,             \
U_NA,                 U_NA,                 U_NA,                 U_NA,                 &kp SCR_WIN,          /***/   U_NA,                 &u_to_U_FUN,          &u_to_U_MEDIA,        U_NA,                 U_NA,                  \
U_NP,                 U_NP,                 &kp HYPER_1,          &kp HYPER_2,          &kp LG(SPC),          /***/   U_NA,                 U_NA,                 U_NA,                 U_NP,                 U_NP



#define MIRYOKU_LAYERMAPPING_SWITCH MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_PLAIN MIRYOKU_MAPPING
