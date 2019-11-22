// define vars shared between files
#include "../functions.h"

// general
#define name some name
#define version 0.0
#define desc some description

// basket
#define basket_rule adrs > 1

// entry
#define entry_trig last > 0
#define entry_price close * 1.01

// launch rules
#define launch_filter not half_day

// position sizing
#define position_size ps_opg
#define max_shares 2000

// stop
#define hard_stop 0
#define stop_trigger time_in_position_sec > 300
#define stop_price minute_low(20)

// target
#define target_trigger last > execution * 1.01
#define target_price ask + .01
